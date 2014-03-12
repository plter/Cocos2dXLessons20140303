//
//  Circle.cpp
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#include "Circle.h"


namespace jikexueyuan{
    
    
    bool Circle::init(){
        
        return true;
    }
    
    void Circle::draw(){
        DrawPrimitives::drawCircle(Point(0, 0), 50, M_PI*2, 50, true);
    }
    
}