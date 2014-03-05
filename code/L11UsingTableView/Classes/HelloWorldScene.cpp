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
    
    TableView * tv = TableView::create(this, Size(300, 300));
    tv->setAnchorPoint(Point(0, 0));
    tv->setPosition(100, 0);
    tv->setDelegate(this);
    addChild(tv);
    
    
    return true;
}


Size HelloWorld::cellSizeForTable(cocos2d::extension::TableView *table){
    return Size(300, 50);
}

TableViewCell* HelloWorld::tableCellAtIndex(cocos2d::extension::TableView *table, ssize_t idx){
    
    TableViewCell *cell = table->dequeueCell();
    LabelTTF *label;
    
    if (cell==NULL) {
        cell = TableViewCell::create();
        label = LabelTTF::create();
        label->setTag(2);
        label->setFontSize(30);
        label->setAnchorPoint(Point(0, 0));
        cell->addChild(label);
    }else{
        label = (LabelTTF*)cell->getChildByTag(2);
    }
    
    label->setString(StringUtils::format("Label %ld",idx));
    
    return cell;
}


ssize_t HelloWorld::numberOfCellsInTableView(cocos2d::extension::TableView *table){
    return 100;
}


void HelloWorld::tableCellTouched(cocos2d::extension::TableView *table, cocos2d::extension::TableViewCell *cell){
    
    LabelTTF *label = (LabelTTF*)cell->getChildByTag(2);
    log("%s",label->getString().c_str());
    
}


void HelloWorld::menuCloseCallback(Object* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
