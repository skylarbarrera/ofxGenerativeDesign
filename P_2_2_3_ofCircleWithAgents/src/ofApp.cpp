#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    //ofSetFrameRate(20);
    centerX = ofGetWidth() /2;
    centerY = ofGetHeight()/2;
    
    
    gui.setup();
    gui.add(formResolution.setup("Form Resolution", 20, 0, 100));
    gui.add(stepSize.setup("Step Size", 20, 0, 100));
   
    
    
    //Add GUI component
    formResolution = 6;
    int initRadius = 40;
    stepSize = 1;
    float pls = 360/formResolution;
    angle = glm::radians(pls);
    for (int i = 0; i < formResolution; i++){
        x.push_back(cos(angle*i)*initRadius);
        y.push_back(sin(angle*i)*initRadius);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    centerX += (ofGetMouseX() - centerX) * 0.01;
    centerY += (ofGetMouseY() - centerY) * 0.01;
    
    for (int i = 0; i < formResolution; i++){
           x.at(i) = x.at(i) + ofRandom(-stepSize,stepSize);
           y.at(i) = y.at(i) + ofRandom(-stepSize,stepSize);
       }

}

//--------------------------------------------------------------
void ofApp::draw(){
    int rand = ofRandom(0,1);
    
    
   
    ofNoFill();
    ofPath shape;
    shape.setFilled(false);
    shape.setStrokeWidth(2);
    shape.setStrokeColor(ofColor(127+80*cos(0.3*ofGetElapsedTimef()),127+ 60*sin(0.11*ofGetElapsedTimef()),127));
    shape.setFillColor(ofColor(0,0,0,255));

    shape.curveTo(x.at(formResolution -1 ) +centerX, y.at(formResolution -1 ) +centerY);
    
    for (int i = 0; i < formResolution; i++){
        
        shape.curveTo(x.at(i ) +centerX, y.at(i ) +centerY);
    }
    
   shape.curveTo(x.at(0) +centerX, y.at(0) +centerY);
    shape.curveTo(x.at(1) +centerX, y.at(1) +centerY);
    shape.draw();
    
    
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
    ofBackground(25);

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
