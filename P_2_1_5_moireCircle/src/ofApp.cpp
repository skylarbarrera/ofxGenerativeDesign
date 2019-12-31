#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    drawMode = 1;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    overlay();
   a

    
    int x = ofMap(ofGetMouseX(), 0, ofGetWidth(), -50,50);
    int rotation = ofMap(ofGetMouseX(), 0, ofGetWidth(), -PI, PI);
    int scale = ofMap(ofGetMouseY(), 0, ofGetHeight(), 0.7,1);
    
    if (drawMode ==2){
        ofTranslate(x,0);
    }
    if (drawMode ==1){
        ofRotateDeg(rotation);
      
    }
    ofScale(scale);
    overlay();
    switch(drawMode){
           case 1:
               drawMode = 2;
               break;
           case 2:
               drawMode = 1;
               break;
       }

    
}

//--------------------------------------------------------------
void ofApp::overlay(){
    int width = ofGetWidth() -100;
    int height = ofGetHeight() -100;
    
    if (drawMode ==1){
        for (int i = -width /2; i < width/2; i+=5){
            ofDrawLine(i, -height/2, i, height/2);
        }
       
    }
    
    if (drawMode ==2){
        for (int i =0; i < width/2; i += 10){
            ofNoFill();
            ofDrawEllipse(width/4, height/4, i, i);
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
