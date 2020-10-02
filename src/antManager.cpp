#include "antManager.h"
#include "ant.h"
#include <vector>

void AntManager::setup(int antCount) {
    for (int i = 0; i < antCount; i++) {
        Ant ant;
        ant.setup(8);
        ants.push_back(ant);
    }
}

void AntManager::draw() {
    for (Ant &ant : ants) ant.draw();
}

void AntManager::pruneAnts() {
    for (Ant &ant : ants) {
        if (ant.isReadyForDeletion()) {
            ant.~Ant();
        }
    }
}
