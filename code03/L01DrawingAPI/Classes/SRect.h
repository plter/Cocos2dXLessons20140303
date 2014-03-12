//
//  SRect.h
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#ifndef __L01DrawingAPI__SRect__
#define __L01DrawingAPI__SRect__

#include <iostream>
#include <cocos2d.h>

using namespace cocos2d;

namespace jikexueyuan {
    
    class SRect:public Node{
        
        
    public:
        virtual bool init(){
            
            return true;
        }
        
        virtual void draw();
        
        CREATE_FUNC(SRect);
    };
    
}

#endif /* defined(__L01DrawingAPI__SRect__) */
