#ifndef SCORES_H
#define SCORES_H

#include "GENode.h"

class Scores {
private:
    int maxEntries;
    int numEntries;
    GENode* head;
    GENode* tail;
public:
    Scores(int maxEnt = 10);
    ~Scores();

    void add(const GameEntry& e);
    GameEntry remove(int i);
    void printAll();
    bool empty() const;
    int size() const;
    int capacity() const;
};

#endif
