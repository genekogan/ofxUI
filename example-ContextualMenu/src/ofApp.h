#ifndef TESTAPP
#define TESTAPP

#include "ofMain.h"
#include "ofxUI.h"

class ofApp : public ofBaseApp 
{
	public:
	void setup();
	void update();
	void draw();
	void exit(); 

	void keyPressed  (int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	
	ofxUICanvas *gui;   	
	void guiEvent(ofxUIEventArgs &e);
    bool drawFill; 
	float red, green, blue, alpha; 	
        
    ofColor backgroundColor; 
    float radius; 
    int resolution;
    ofPoint position;
    
    float noiseScale; 
    float *buffer;
    vector<float> xPos;
    vector<float> yPos;
    
    ofxUIMovingGraph *xGraph;
    ofxUIMovingGraph *yGraph;
    
    int bufferSize;
    
    ofImage *image; 
};

#endif