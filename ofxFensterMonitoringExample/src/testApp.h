#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ofxFenster.h"

class Cube:public ofRectangle{
public:
	Cube(){
		position();
	}
	void position(){
		x = ofRandom(-ofGetWindowPositionX(), ofGetWidth());
		y = ofRandom(0, ofGetHeight());
		speed = ofRandom(1, 3);
		gray = ofRandom(20, 100);
		size = ofRandom(20, 100);
	}
	void draw(){
		ofSetColor(gray, gray, gray);
		ofRect(x, y, size, size);
	}
	void update(){
		x+=speed;
		if(x>ofGetScreenWidth()-ofGetWindowPositionX())
			x=-ofGetWindowPositionX();
	}
	float speed;
	ofColor color;
	int gray;
	int size;
};

class testApp : public ofBaseApp, public ofxFensterListener{
	
public:
	void setup();
	void update();
	void draw();
	
	void fensterDraw();
	void fensterUpdate();
	
	void drawCubes();
	
	void keyPressed  (int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	
	void fensterKeyPressed  (int key);
	void fensterKeyReleased(int key);
	void fensterMouseMoved(int x, int y );
	void fensterMouseDragged(int x, int y, int button);
	void fensterMousePressed(int x, int y, int button);
	void fensterMouseReleased(int x, int y, int button);
	void fensterWindowResized(int w, int h);
	
	vector<Cube> cubes;
	ofRectangle winCoords;
private:
	ofImage img;
	ofTexture tex;
	bool bTexInit;
};

#endif
