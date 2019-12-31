#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //GUI SETUP
    gui.setup();
    gui.add(stepxSlider.setup("X Value", 400, 0, 800));
    gui.add(stepySlider.setup("Y Value", 200, 0, 400));
   
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    stepX = stepxSlider + 2;
    stepY = stepySlider + 2;
    for (int gridY = 0; gridY < ofGetHeight(); gridY += stepY){
        for (int gridX = 0; gridX < ofGetWidth(); gridX += stepX){
            int mapY = ofMap(gridY , 0, 400, 0, 255);
            int mapX = ofMap(gridX , 0, 800, 0, 255);
            ofColor c = ofColor::fromHsb(mapX, mapY, 100);
            ofSetColor(c);
            ofDrawRectangle(gridX, gridY,stepX, stepY);
        }
        
    }
    
    gui.draw();
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
   

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
