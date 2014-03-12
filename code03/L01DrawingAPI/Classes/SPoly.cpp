//
//  SPoly.cpp
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#include "SPoly.h"

namespace jikexueyuan {
    
    bool SPoly::init(){
        
        points[0] = Point(0,0);
        points[1] = Point(100,0);
        points[2] = Point(100,100);
        points[3] = Point(50,50);
        points[4] = Point(0,100);
        
        return true;
    }
    
    void SPoly::draw(){
        
        DrawPrimitives::drawSolidPoly(points, 5, Color4F(1, 1, 0, 1));
    }
    
}