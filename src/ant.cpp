#include "ant.h"
#include "colors.h"
#include "tailPoint.hpp"

ofVec2f Ant::getRandomPosition() {
    return ofVec2f(ofRandomWidth(), ofRandomHeight());
}

void Ant::setup(const float speed) {
    Colors *colors = colors->getInstance();
    
    m_speed = speed;
    m_opacity = 1;
    m_position = getRandomPosition();
    m_color = colors->getRandomAntColor();
}

ofVec2f Ant::getNewPosition() {
    int xPositive = int(ofRandom(2));
    int yPositive = int(ofRandom(2));
    
    float x = ofNoise(ofGetElapsedTimef()) * m_speed;
    float y = ofNoise(ofGetElapsedTimef()) * m_speed;

    return ofVec2f(
        m_position.x + (xPositive ? x : -1 * x),
        m_position.y + (yPositive ? y : -1 * y)
    );
}

float Ant::getNewOpacity() {
    float drop = ofNoise(ofGetElapsedTimef());
    return m_opacity - drop;
}

void Ant::draw() {
    TailPoint *tailPoint = new TailPoint(&m_position, &m_speed);
    m_position.set(tailPoint->position);
    m_tail.push_back(*tailPoint);
    m_opacity = getNewOpacity();
    
    ofSetColor(m_color);
    
    for (TailPoint &tail : m_tail)
        ofDrawCircle(tail.position, 1);
}

bool Ant::isReadyForDeletion() {
    return m_opacity <= 0;
}
