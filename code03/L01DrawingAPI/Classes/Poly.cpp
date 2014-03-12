//
//  Poly.cpp
//  L01DrawingAPI
//
//  Created by plter on 14-3-12.
//
//

#include "Poly.h"


namespace jikexueyuan {
    
    bool Poly::init(){
        
        ps[0] = Point(0, 0);
        ps[1] = Point(100,0);
        ps[2] = Point(100,100);
        
        return true;
    }
    
    
    void Poly::draw(){
        DrawPrimitives::drawPoly(ps, 3, true);
    }
    
}