//
//  Points.cpp
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#include "Points.h"

namespace jikexueyuan{
    
    bool Points::init(){
        
        return true;
    }
    
    void Points::draw(){
        
        for (int y = 0; y<50; y++) {
            for (int x=0; x<50; x++) {
                DrawPrimitives::setDrawColor4B(rand()%256, rand()%256, rand()%256, 255);
                DrawPrimitives::drawPoint(Point(x, y));
            }
        }
        
    }
    
}