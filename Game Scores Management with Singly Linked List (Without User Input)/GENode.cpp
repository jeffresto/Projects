#include "GENode.h"

int GENode::activeNodes = 0;

GENode::GENode(const GameEntry& e, GENode* n) : elem(e), next(n) {
    ++activeNodes;
}

GENode::~GENode() {
    --activeNodes;
}
