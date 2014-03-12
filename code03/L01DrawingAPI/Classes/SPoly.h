//
//  SPoly.h
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#ifndef __L01DrawingAPI__SPoly__
#define __L01DrawingAPI__SPoly__

#include <iostream>
#include <cocos2d.h>

using namespace cocos2d;

namespace jikexueyuan {
    
    
    class SPoly:public Node{
        
    private:
        Point points[5];
        
    public:
        virtual bool init();
        virtual void draw();
        
        CREATE_FUNC(SPoly);
    };
    
}

#endif /* defined(__L01DrawingAPI__SPoly__) */
