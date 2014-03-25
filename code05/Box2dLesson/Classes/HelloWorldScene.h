#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include <Box2D/Box2D.h>


#define RATIO 80.0f

class HelloWorld : public cocos2d::Layer,public b2ContactListener
{
    
private:
    b2World *world;
    b2Body *groundBody;
    
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    virtual void update(float dt);
    
    virtual void BeginContact(b2Contact* contact);
    
    void addRect(float x,float y,b2BodyType type);
    void addGround();
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
