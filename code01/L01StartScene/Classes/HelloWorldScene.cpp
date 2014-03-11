#include "HelloWorldScene.h"
#include "ImageScene.h"

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
    
    
    Sprite *bg = Sprite::create("bg.jpg");
    bg->setPosition(visibleSize.width/2, visibleSize.height/2);
    addChild(bg);
    

    LabelTTF *label = LabelTTF::create("Show Next Scene", "Courier", 36);
    addChild(label);
    
    label->setPosition(visibleSize.width/2, visibleSize.height/2);
    
    EventListenerTouchOneByOne *listener = EventListenerTouchOneByOne::create();
    listener->onTouchBegan = [label,this](Touch* t,Event *e){
        
        if (label->getBoundingBox().containsPoint(t->getLocation())) {
            
            Director::getInstance()->replaceScene(TransitionFadeBL::create(1, ImageScene::createScene()));
        }
        
        return false;
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
