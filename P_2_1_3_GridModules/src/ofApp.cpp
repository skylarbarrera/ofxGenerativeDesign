#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
        int tileCount = 6;
        int tileWidth = ofGetWidth()/tileCount;
          int tileHeight = ofGetHeight()/tileCount;
    
        int circleCount = ofGetMouseX()/30 +1;
      
        int endSize = ofMap(ofGetMouseX(), 0, max(ofGetWidth(),ofGetMouseX()), tileWidth/2, 0);
        int endOffset = ofMap(ofGetMouseY(), 0, max(ofGetMouseY(), ofGetHeight()), 0, (tileWidth-endSize)/2);
        
        
        
        for (int gridY = 0; gridY<tileCount;gridY++){
            for (int gridX = 0; gridX<tileCount;gridX++){
                ofPushMatrix();
                ofTranslate(tileWidth*gridX, tileHeight*gridY);
               // ofScale(1, tileHeight/tileWidth);
                
                int toggle = ofRandom(0,4);
                switch(toggle){
                    case 0:
                        ofRotateRad(-HALF_PI);
                        break;
                    case 1:
                        ofRotateRad(0);
                        break;
                    case 2:
                        ofRotateRad(HALF_PI);
                        break;
                    case 3:
                        ofRotateRad(PI);
                        break;
                }
                
                //FINALLY DRAWING
                for (int i = 0; i < circleCount; i++){
                    int diameter = ofMap(i,0,circleCount, tileWidth, endSize);
                    int offset = ofMap(i,0, circleCount, 0, endOffset);
                    cout<< 'OFFest' << offset << "dia" << diameter ;
                    ofNoFill();
                    ofDrawEllipse(offset, 0, diameter, diameter);
                }
                ofPopMatrix();
                
            
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
