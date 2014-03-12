//
//  Poly.h
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#ifndef __L01DrawingAPI__Poly__
#define __L01DrawingAPI__Poly__

#include <iostream>
#include <cocos2d.h>

using namespace cocos2d;

namespace jikexueyuan {
    
    class Poly:public Node{
        
    private:
        Point ps[3];
        
    public:
        virtual bool init();
        
        virtual void draw();
        
        
        CREATE_FUNC(Poly);
        
    };
    
}

#endif /* defined(__L01DrawingAPI__Poly__) */
