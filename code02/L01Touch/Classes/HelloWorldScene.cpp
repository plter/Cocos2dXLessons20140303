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
    
    
    Size size = Director::getInstance()->getVisibleSize();
    
    
    auto label = LabelTTF::create("Click me", "Courier", 30);
    label->setPosition(size.width/2, size.height/2);
    addChild(label);
    
    auto listener = EventListenerTouchOneByOne::create();
    listener->onTouchBegan = [](Touch *t,Event *e){
        
        if (e->getCurrentTarget()->getBoundingBox().containsPoint(t->getLocation())) {
            
            log("onTouchBegan");
        }
        
        return true;
    };
    
    listener->onTouchMoved = [](Touch* t,Event *e){
        log("onTouchMoved");
    };
    
    listener->onTouchEnded = [](Touch *t,Event *e){
        log("onTouchEnd");
    };
    
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, label);
    
    
    return true;
}


void HelloWorld::menuCloseCallback(Object* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
