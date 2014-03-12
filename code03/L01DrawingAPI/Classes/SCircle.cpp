//
//  SCircle.cpp
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#include "SCircle.h"


namespace jikexueyuan {
    
    
    bool SCircle::init(){
        return true;
    }
    
    void SCircle::draw(){
        DrawPrimitives::setDrawColor4B(0, 255, 0, 255);
        DrawPrimitives::drawSolidCircle(Point(0, 0), 50, M_PI*2, 50);
    }
    
}