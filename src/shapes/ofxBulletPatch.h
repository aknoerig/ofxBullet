//
//  ofxBulletPatch.h
//  ofxBullet
//
//  Created by Elias Zananiri on 2015-03-23.
//
//

#pragma once

#include "ofxBulletSoftBody.h"

class ofxBulletPatch : public ofxBulletSoftBody {
public:
    ofxBulletPatch();
    
    void create(ofxBulletWorldSoft* a_world, const ofVec3f& a_p0, const ofVec3f& a_p1, const ofVec3f& a_p2, const ofVec3f& a_p3, int a_resx = 10, int a_resy = 10);
    
    void update();
    void draw();

protected:
    int _lastUpdateFrame;
    float _linkLength;
    ofMesh _cachedMesh;
};
