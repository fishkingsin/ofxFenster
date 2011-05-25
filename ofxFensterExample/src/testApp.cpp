#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(70);
	fenster->setBackground(255, 255, 255);
	ofBackground(255, 255, 255);
	for (int i=0; i<400; i++) {
		cubes.push_back(Cube());
	}
}

//--------------------------------------------------------------
void testApp::update(){
	for (int i=0; i<cubes.size(); i++) {
		cubes[i].update();
	}
}

void testApp::drawCubes(){
	for (int i=0; i<cubes.size(); i++) {
		cubes[i].draw();
	}
}

//--------------------------------------------------------------
void testApp::draw(){
	drawCubes();
	//ofDrawBitmapString("FPS: "+ofToString(ofGetFrameRate(), 0), 3, 15);
}

void testApp::fensterUpdate(){
	
}

void testApp::fensterDraw(){
	ofRectangle r = fenster->getBounds();
	ofTranslate(winCoords.x-r.x,winCoords.y-r.y,0);
	drawCubes();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

void testApp::fensterKeyPressed  (int key){

};
void testApp::fensterKeyReleased(int key){
	
};
void testApp::fensterMouseMoved(int x, int y ){

};
//drag is not yet implemented
void testApp::fensterMouseDragged(int x, int y, int button){
	
};
void testApp::fensterMousePressed(int x, int y, int button){

};
void testApp::fensterMouseReleased(int x, int y, int button){

};
void testApp::fensterWindowResized(int w, int h){
	winCoords = fenster->getBounds();
};

