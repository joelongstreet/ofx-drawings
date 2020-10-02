#pragma once

#include <vector>
#include "ant.h"

class AntManager {
    public:
        void setup(int antCount);
        void draw();
        void pruneAnts();
        vector<Ant> ants;
        float count;
};
