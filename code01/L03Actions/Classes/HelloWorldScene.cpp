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
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    auto label = LabelTTF::create("jikexueyuan", "Courier", 30);
    label->setPosition(visibleSize.width/2, visibleSize.height/2);
    addChild(label);
    
    auto listener = EventListenerTouchOneByOne::create();
    listener->onTouchBegan = [label](Touch *t,Event *e){
        
        if (label->getBoundingBox().containsPoint(t->getLocation())) {
            
//            label->runAction(MoveTo::create(1, Point(100, 100)));
//            label->runAction(MoveBy::create(1, Point(-50, -50))->reverse());
            
//            label->runAction(Spawn::create(MoveBy::create(1, Point(100, 100)), RotateBy::create(1, 360),NULL));
            
//            label->runAction(Sequence::create(MoveBy::create(1, Point(100, 100)),RotateBy::create(1, 360), NULL));
            
            
            label->runAction(Sequence::create(
                                              MoveBy::create(1, Point(100, 100)),
                                              RotateBy::create(1, 360),
                                              CallFunc::create([](){
                MessageBox("Action complete", "complete");
            }),NULL));
        }
        
        return false;
    };
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, label);
    
//    label->runAction(Repeat::create(RotateBy::create(1, 180), 3));
//    label->runAction(RepeatForever::create(RotateBy::create(1, 180)));
    
    
    
    auto cache = SpriteFrameCache::getInstance();
    cache->addSpriteFramesWithFile("anim.plist");
    
    Vector<SpriteFrame*> vec;
    char name[20];
    memset(name, 0, 20);
    for (int i=0; i<20; i++) {
        sprintf(name, "anim%04d",i);
        vec.pushBack(cache->getSpriteFrameByName(name));
    }
    
    Animate * a = Animate::create(Animation::createWithSpriteFrames(vec,0.1f));
    auto sprite = Sprite::create();
    sprite->setPosition(200, 200);
    addChild(sprite);
    
    sprite->runAction(RepeatForever::create(a));
    
    return true;
}


void HelloWorld::menuCloseCallback(Object* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
