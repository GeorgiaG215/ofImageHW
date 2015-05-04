#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    rockybeach.loadImage("images/rockybeach.jpg");
    rockybeach.setImageType(OF_IMAGE_GRAYSCALE);
//    gears.loadImage("images/gears.gif");
//    tdf.loadImage("images/tdf_1972_poster.jpg");
//    
//    tdfSmall.loadImage("images/tdf_1972_poster.jpg");
//    tdfSmall.resize(tdfSmall.width / 4, tdfSmall.height / 4);
//    tdfSmall.setImageType(OF_IMAGE_GRAYSCALE);
//    
//    transparency.loadImage("images/transparency.png");
//    bikeIcon.loadImage("images/bike_icon.png");
//    bikeIcon.setImageType(OF_IMAGE_GRAYSCALE);
    
    int w = rockybeach.getWidth();
    int h = rockybeach.getHeight();
    
    //float diameter = 10;
    
    //ofSetColor(255, 0, 0);
    ofPixelsRef pixels = rockybeach.getPixelsRef();
    
    for(int y = 0; y < h; y++) {
        for(int x = 0; x < w; x++) {
            
            ofColor color = rockybeach.getColor(x,y);
            
            if(color.b + color.r + color.g < 250){
                
                pixels.setColor(x,y, ofColor::black);
                
            }
        }
    }
    float ofMap(float value, float inputMin, float inputMax, float outputMin, float outputMax);
    
    outline.setFromPixels(pixels);
}

//// Drawing evenly spaced tangents along the polyline
////  Note: These are pretty exaggerated tangents, like Figure 16 (right)
//ofSetColor(255, 50);
//float numPoints = polyline.size();
//float tangentLength = 300;
//for (int p=0; p<500; p+=1) {
//    ofVec3f point = polyline.getPointAtPercent(p/500.0);
//    float floatIndex = p/500.0 * (numPoints-1);
//    ofVec3f tangent = polyline.getTangentAtIndexInterpolated(floatIndex) * tangentLength;
//    ofLine(point-tangent/2, point+tangent/2);
//}
//}
//
//ofSetColor(255,100,0);  // Orange color for active polyline
//currentPolyline.draw();
//}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //rockybeach.draw(0, 0);
    
    outline.draw(0,0);
}

    // same as above, but this time
    // use the raw data directly with getPixels()
    
//    int w = rockybeach.getWidth();
//    int h = rockybeach.getHeight();
//    float diameter = 1;
//    unsigned char * pixels = rockybeach.getPixels();
//    
//    ofSetColor(0, 0, 255);
//    for(int y = 0; y < h; y++) {
//        
//        for(int x = 0; x < w; x++) {
//            
//            int index = y * w + x;
//            
//            unsigned char cur = pixels[index];
//            
//            float size = 1 - ((float) cur / 255);
//            ofCircle(200 + x * diameter, 500 + y * diameter, 1 + size * diameter / 2);
//        }
//    }

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
