#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(70);

	fenster->setFPS(1);
	fenster->setBounds(100, 100, ofGetWidth()/10, ofGetHeight()/10);
	bTexInit = false;

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
	img.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
}

void testApp::fensterDraw(){
	if(! bTexInit){
		tex.allocate(ofGetWidth(), ofGetHeight(), GL_RGB);
		bTexInit = true;
	}
	tex.loadData(img.getPixels(), img.getWidth(), img.getHeight(), GL_RGB);
	tex.draw(0, 0, fenster->getWidth(), fenster->getHeight());
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
};

