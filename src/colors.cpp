#include "colors.h"

ofColor Colors::getBackgroundColor() {
    return colorList[0];
}

ofColor Colors::getRandomAntColor() {
    int index = int(
                    ofRandom(
                             1,
                             sizeof(colorList)/sizeof(colorList[0])
                             )
                    );
    return colorList[index];
}
