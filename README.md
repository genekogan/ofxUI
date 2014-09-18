#### ofxUIx

This is a fork of [ofxUI](https://github.com/rezaali/ofxUI) which is intended to support ofParameter.  See this [discussion](https://github.com/rezaali/ofxUI/issues/156) for more info on why this would be a useful feature. 

For the time being, all variables passed by reference to ofxUI previously done using primitives like float, int, ofVec2f, etc, have been replaced by their corresponding ofParameters, e.g. ofParameter<float>, ofParameter<int>, etc. This means ofxUIx is not interchangeable/compatible with ofxUI, hence the name change to avoid collisions.
	
This addon is not fully tested yet.