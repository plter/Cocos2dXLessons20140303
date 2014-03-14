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
    
    label = LabelTTF::create("jikexueyuan","Courier",30);
    addChild(label);
    
    schedule(schedule_selector(HelloWorld::timerHandler), 1);
    
//    scheduleUpdate();
    return true;
}

void HelloWorld::timerHandler(float dt){
    log(">>>>>");
}


void HelloWorld::update(float dt){
    
    label->setPosition(label->getPosition()+Point(1,1));
    
    if (label->getPositionX()>500) {
        unscheduleUpdate();
    }
}


void HelloWorld::menuCloseCallback(Object* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
