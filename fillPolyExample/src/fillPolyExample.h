#pragma once

#include "ofMain.h"

using namespace std;

class fillPolyTest : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		string test;
		ofTrueTypeFont font;
		vector<ofTTFCharacter> paths;
		vector<vector<ofPoint> > lines;
		vector<ofPoint> formPoints;

		int stepSize;
};
