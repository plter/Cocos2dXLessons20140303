//
//  ImageScene.h
//  L01StartScene
//
//  Created by plter on 14-3-7.
//
//

#ifndef __L01StartScene__ImageScene__
#define __L01StartScene__ImageScene__

#include <iostream>
#include <cocos2d.h>
USING_NS_CC;

    
class ImageScene:public Layer {
    
public:
    static Scene* createScene();
    
    virtual bool init();
    CREATE_FUNC(ImageScene);
};


#endif /* defined(__L01StartScene__ImageScene__) */
