//
//  Line.cpp
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#include "Line.h"

namespace jikexueyuan{
    
    
    bool Line::init(){
        
        return true;
    }
    
    void Line::draw(){
        DrawPrimitives::drawLine(Point(0, 0), Point(100, 100));
    }
    
}