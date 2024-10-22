#include "GameEntry.h"

GameEntry::GameEntry(const std::string& n, int s) : name(n), score(s) {}

std::string GameEntry::getName() const {
    return name;
}

int GameEntry::getScore() const {
    return score;
}

void GameEntry::setName(std::string nName) {
    name = nName;
}

void GameEntry::setScore(int nScore) {
    score = nScore;
}
