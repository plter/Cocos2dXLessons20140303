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
    
    auto cache = SpriteFrameCache::getInstance();
    cache->addSpriteFramesWithFile("anim.plist");
    
    Vector<SpriteFrame*> vec;
    char name[15];
    memset(name, 0, 15);
    
    for (int i=0; i<20; i++) {
        sprintf(name, "anim%04d",i);
        vec.pushBack(cache->getSpriteFrameByName(name));
    }
    
    Animation *animation = Animation::createWithSpriteFrames(vec,0.1f);
    Animate *animate = Animate::create(animation);
    
    auto sprite = Sprite::create();
    addChild(sprite);
    sprite->setPosition(200, 200);
    sprite->runAction(RepeatForever::create(animate));
    
    return true;
}


void HelloWorld::menuCloseCallback(Object* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
