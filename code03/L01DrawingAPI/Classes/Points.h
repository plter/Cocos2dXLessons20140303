//
//  Points.h
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#ifndef __L01DrawingAPI__Points__
#define __L01DrawingAPI__Points__

#include <iostream>
#include <cocos2d.h>

using namespace cocos2d;

namespace jikexueyuan{
    
    class Points:public Node{
        
        
    public:
        virtual bool init();
        virtual void draw();
        
        CREATE_FUNC(Points);
    };
    
}


#endif /* defined(__L01DrawingAPI__Points__) */
