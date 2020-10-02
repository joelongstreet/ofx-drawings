#include "tailPoint.hpp"

TailPoint::TailPoint(ofVec2f *currentAntPosition, float *speed) {
    int xPositive = int(ofRandom(2));
    int yPositive = int(ofRandom(2));
    
    float x = ofNoise(ofGetElapsedTimef()) * *speed;
    float y = ofNoise(ofGetElapsedTimef()) * *speed;

    position = ofVec2f(
       currentAntPosition->x + (xPositive ? x : -1 * x),
       currentAntPosition->y + (yPositive ? y : -1 * y)
    );
};
