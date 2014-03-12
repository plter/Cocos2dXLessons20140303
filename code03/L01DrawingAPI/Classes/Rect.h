//
//  Rect.h
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#ifndef __L01DrawingAPI__Rect__
#define __L01DrawingAPI__Rect__

#include <iostream>
#include <cocos2d.h>

using namespace cocos2d;

namespace jikexueyuan{
    
    class Rect:public Node {
        
    public:
        virtual bool init();
        virtual void draw();
        
        CREATE_FUNC(Rect);
    };
    
}


#endif /* defined(__L01DrawingAPI__Rect__) */
