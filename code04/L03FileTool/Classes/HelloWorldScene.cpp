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
    
    
    auto fu = FileUtils::getInstance();
//    FILE *f = fopen(fu->fullPathFromRelativeFile("data.txt", fu->getWritablePath()).c_str(), "w");
//    fprintf(f, "Hello jikexueyuan\n");
//    fclose(f);
    
    Data d = fu->getDataFromFile(fu->fullPathFromRelativeFile("data.txt", fu->getWritablePath()));
    
    log("%s",d.getBytes());
    
    
    
//    log("%s",fu->getWritablePath().c_str());
    
    
    
    return true;
}


void HelloWorld::menuCloseCallback(Object* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
