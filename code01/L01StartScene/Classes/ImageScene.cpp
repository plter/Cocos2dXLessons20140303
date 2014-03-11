//
//  ImageScene.cpp
//  L01StartScene
//
//  Created by plter on 14-3-7.
//
//

#include "ImageScene.h"


Scene* ImageScene::createScene(){
    
    Scene* scene = Scene::create();
    ImageScene * layer = ImageScene::create();
    scene->addChild(layer);
    
    return scene;
}


bool ImageScene::init(){
    
    Size size = Director::getInstance()->getVisibleSize();
    Sprite *s = Sprite::create("HelloWorld.png");
    s->setPosition(size.width/2, size.height/2);
    addChild(s);
    
    return true;
}

