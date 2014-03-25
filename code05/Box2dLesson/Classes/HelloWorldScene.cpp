#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    world = new b2World(b2Vec2(0,-10));
    world->SetContactListener(this);
    
    
    addGround();
    addRect(5, 3, b2_dynamicBody);
//    addRect(1,5,b2_kinematicBody);
    
    scheduleUpdate();
    
    return true;
}

void HelloWorld::update(float dt){
    world->Step(dt, 8, 3);
    
    Sprite *s;
    
    for (b2Body *b = world->GetBodyList(); b; b=b->GetNext()) {
        
        if (b->GetUserData()) {
            s = (Sprite*)b->GetUserData();
            
            s->setPosition(b->GetPosition().x*RATIO, b->GetPosition().y*RATIO);
        }
    }
}

void HelloWorld::BeginContact(b2Contact *contact){
    if (contact->GetFixtureA()->GetBody()==groundBody||contact->GetFixtureB()->GetBody()==groundBody) {
        
        log("有物体落在了地板上");
    }
}


void HelloWorld::addRect(float positionX,float positionY,b2BodyType type){
    
    //config box2d
    b2BodyDef def;
    def.position = b2Vec2(positionX, positionY);
    def.linearVelocity = b2Vec2(0, 10);
    def.type = type;
    
    b2Body* body = world->CreateBody(&def);
    
    b2PolygonShape shape;
    shape.SetAsBox(0.5, 0.5);
    
    b2FixtureDef fixtureDef;
    fixtureDef.density = 1;
    fixtureDef.friction = 0.3;
    fixtureDef.shape = &shape;
    body->CreateFixture(&fixtureDef);
    
    //config cocos shape
    auto s = Sprite::create();
    s->setTextureRect(Rect(0, 0, 0.5*2*RATIO, 0.5*2*RATIO));
    addChild(s);
    
    body->SetUserData(s);
}


void HelloWorld::addGround(){
    
    b2BodyDef def;
    def.position = b2Vec2(400/RATIO,0);
    def.type = b2_staticBody;
    
    groundBody = world->CreateBody(&def);
    
    b2PolygonShape groundShape;
    groundShape.SetAsBox(400/RATIO, 0.5);
    
    b2FixtureDef fixureDef;
    fixureDef.density = 1;
    fixureDef.friction = 0.3;
    fixureDef.shape = &groundShape;
    groundBody->CreateFixture(&fixureDef);
}

void HelloWorld::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
