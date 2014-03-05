//
//  Ball.h
//  L08CustomClass
//
//  Created by plter on 14-3-4.
//
//

#ifndef __L08CustomClass__Ball__
#define __L08CustomClass__Ball__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;


class Ball:public Sprite {
    
public:
    virtual bool init();
    
    CREATE_FUNC(Ball);
    
//    static Ball* create(){
//        
//        Ball * b = new Ball();
//        b->init();
//        b->autorelease();
//        
//        return b;
//    }
};



#endif /* defined(__L08CustomClass__Ball__) */
