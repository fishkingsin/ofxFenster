#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ofxFenster.h"

class testApp : public ofBaseApp, public ofxFensterListener{
	
public:
	void setup();
	void update();
	void draw();
	
	void fensterDraw();
	void fensterUpdate();
	
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
	
};

#endif
