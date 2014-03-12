//
//  SRect.cpp
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#include "SRect.h"

namespace jikexueyuan {
    
    void SRect::draw(){
        DrawPrimitives::drawSolidRect(Point(0, 0), Point(100, 100), Color4F(0, 0, 1, 1));
    }
}