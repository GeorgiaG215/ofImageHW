#pragma once

#include "ofMain.h"


class ofApp : public ofBaseApp{
    
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofImage rockybeach;
    ofImage outline;
    
//    ofImage gears;
//    ofImage tdf;
//    ofImage tdfSmall;
//    ofImage transparency;
//    ofImage bikeIcon;
    
    ofPolyline currentPolyline;
    bool leftMouseButtonPressed;
    ofVec2f lastPoint;
    float minDistance;
    vector <ofPolyline> polylines;
    float ofMap;
};

