//
//  Rect.cpp
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#include "Rect.h"


namespace jikexueyuan{
    
    bool Rect::init(){
        
        return true;
    }
    
    void Rect::draw(){
        DrawPrimitives::setDrawColor4B(255, 0, 0, 255);
        DrawPrimitives::drawRect(Point(0, 0), Point(100,100));
    }
    
}