#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int tileCount = 20;
    for (int gridY = 0; gridY<tileCount;gridY++){
        for (int gridX = 0; gridX<tileCount;gridX++){
            int posX = ofGetWidth() / tileCount * gridX;
            int posY = ofGetHeight() / tileCount * gridY;
            int toggle = ofRandom(0, 2);
            if (toggle==0){
                ofSetLineWidth(ofGetMouseX()/20);
                ofSetColor(0,200,120);
                ofDrawLine(posX, posY, posX+ofGetWidth()/tileCount, posY + ofGetHeight() / tileCount);
            }
            if (toggle==1){
                ofSetLineWidth(ofGetMouseY()/2);
                ofSetColor(200,100,120);
                ofDrawLine(posX, posY + ofGetHeight() / tileCount, posX+ofGetWidth()/tileCount, posY);
            }
        
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
