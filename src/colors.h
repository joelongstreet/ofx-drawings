#pragma once

#include "ofMain.h"

class Colors {
    static Colors *instance;
    Colors() {}

    ofColor colorList[5] = {
        ofColor(242, 241, 240),
        ofColor(89, 88, 89),
        ofColor(191, 191, 191),
        ofColor(140, 140, 139),
        ofColor(13, 13, 13)
    };

    public:
        // why can't I put this in the .cpp file?
        static Colors *getInstance() {
            if (!instance) {
                instance = new Colors;
            }

            return instance;
        };

        ofColor getBackgroundColor();
        ofColor getRandomAntColor();
};

