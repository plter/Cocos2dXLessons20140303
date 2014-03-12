//
//  Line.h
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#ifndef __L01DrawingAPI__Line__
#define __L01DrawingAPI__Line__

#include <iostream>
#include <cocos2d.h>

USING_NS_CC;

namespace jikexueyuan{
    
    class Line:public Node{
        
        
    public:
        virtual bool init();
        virtual void draw();
        
        CREATE_FUNC(Line);
    };
    
}

#endif /* defined(__L01DrawingAPI__Line__) */
