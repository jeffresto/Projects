#ifndef GAMEENTRY_H
#define GAMEENTRY_H
#include <string>

class GameEntry {
private:
    std::string name;
    int score;

public:
    GameEntry(const std::string& n = "", int s = 0);
    std::string getName() const;
    int getScore() const;
    void setName(std::string nName);
    void setScore(int nScore);
};
#endif
