#pragma once

#include "ofMain.h"

class TailPoint {
    public:
        TailPoint(ofVec2f * currentAntPosition, float * speed);
        ofVec2f position;
};
