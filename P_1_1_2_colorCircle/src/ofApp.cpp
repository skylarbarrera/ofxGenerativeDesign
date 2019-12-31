#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float angleStep = 360/45;
    
    int centroidX = ofGetWidth()/2;
    int centroidY = ofGetHeight()/2;
    
    
    
    
    int lastVX = centroidX+100;
    int lastVY = centroidY;
    for (float angle = angleStep; angle <= 360; angle+= angleStep){
        ofPath pathT;
        pathT.moveTo(centroidX, centroidY);
        pathT.lineTo(lastVX, lastVY);
        int map = ofMap(angle, 0, 360, 0, 255);
        ofColor c = ofColor::fromHsb(map, map, 100);
        pathT.setFillColor(c);
        
       
        float vx = ofGetWidth()/2 + cos(glm::radians(angle)) * 100;
        float vy = ofGetHeight()/2 + sin(glm::radians(angle)) * 100;
        lastVX = vx;
        lastVY = vy;
        pathT.lineTo(vx,vy);
        pathT.draw();
        
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
