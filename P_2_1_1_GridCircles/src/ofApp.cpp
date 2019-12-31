#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(10);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int tileCount = 20;
    ofTranslate(ofGetWidth()/tileCount/2, ofGetHeight()/tileCount/2);
    
    for (int gridY = 0; gridY<tileCount;gridY++){
        for (int gridX = 0; gridX<tileCount;gridX++){
            int posX = ofGetWidth() / tileCount * gridX;
            int posY = ofGetHeight() / tileCount * gridY;
           
            int shiftX = ofRandom(-ofGetMouseX(), ofGetMouseX()) /20 ;
            int shiftY = ofRandom(-ofGetMouseY(), ofGetMouseY()) /20 ;
            ofSetColor(200, 100, 50);
            ofDrawEllipse(posX + shiftX, posY+shiftY, ofGetMouseY()/15, ofGetMouseY()/15);
            ofSetColor(50, 100, 200);
            ofDrawCircle(posX, posY, 10);
        
        }
        
    }

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
