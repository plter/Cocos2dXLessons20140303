#include "HelloWorldScene.h"
#include "Rect.h"
#include "SRect.h"
#include "Circle.h"
#include "SCircle.h"
#include "Poly.h"
#include "SPoly.h"
#include "Line.h"
#include "Points.h"

USING_NS_CC;


class Shape:public Node {
    
public:
    virtual void draw(){
        
    };
    
    virtual bool init(){
        return true;
    }
    
    CREATE_FUNC(Shape);
};


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
    
    auto r = jikexueyuan::Rect::create();
    r->setPosition(50,50);
    addChild(r);
    
    auto sr = jikexueyuan::SRect::create();
    sr->setPosition(200,50);
    addChild(sr);
    
    auto c = jikexueyuan::Circle::create();
    c->setPosition(400,100);
    addChild(c);
    
    auto sc = jikexueyuan::SCircle::create();
    sc->setPosition(550,100);
    addChild(sc);
    
    auto p = jikexueyuan::Poly::create();
    p->setPosition(100,300);
    addChild(p);
    
    auto sp = jikexueyuan::SPoly::create();
    sp->setPosition(300,300);
    addChild(sp);
    
    auto l = jikexueyuan::Line::create();
    l->setPosition(450,300);
    addChild(l);
    
    auto ps = jikexueyuan::Points::create();
    ps->setPosition(600,300);
    addChild(ps);
    
    return true;
}


void HelloWorld::menuCloseCallback(Object* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
