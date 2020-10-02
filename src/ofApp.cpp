#include "ofApp.h"
#include "colors.h"
#include "antManager.h"

//--------------------------------------------------------------
void ofApp::setup(){
    Colors *colors = colors->getInstance();
    ofColor background = colors->getBackgroundColor();
    ofSetBackgroundColor(background);
    
    antManager.setup(10);
    
    gui.setup();
    
    createNewAnt.addListener(this, &ofApp::createNewAntPressed);
    gui.add(createNewAnt.setup("Create Ant"));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if (showGui) {
        gui.draw();
    }
    
    antManager.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    showGui = true;
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

//--------------------------------------------------------------
void ofApp::createNewAntPressed(){
    ofLogVerbose("new ant button pressed");
}
