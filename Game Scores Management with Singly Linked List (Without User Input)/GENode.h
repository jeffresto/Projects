#ifndef GENODE_H
#define GENODE_H

#include "GameEntry.h"

class GENode {
private:
    GameEntry elem;
    GENode* next;
public:
    static int activeNodes;

    GENode(const GameEntry& e, GENode* n = nullptr);
    ~GENode();

    friend class Scores;
};

#endif
