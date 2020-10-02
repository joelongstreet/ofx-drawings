#pragma once

#include "ofMain.h"
#include "tailPoint.hpp"

class Ant {
    public:
        ofVec2f m_position;
        float m_opacity;
    public:
        void setup(float speed);
        void walk();
        void draw();
        bool isReadyForDeletion();
    private:
        ofVec2f getRandomPosition();
        ofVec2f getNewPosition();
        float getNewOpacity();
        float m_speed;
        int m_tailLength;
        vector<TailPoint> m_tail;
        ofColor m_color;
};
