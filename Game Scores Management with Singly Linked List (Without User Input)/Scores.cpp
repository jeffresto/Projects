#include "Scores.h"
#include <iostream>

Scores::Scores(int maxEnt) : maxEntries(maxEnt), numEntries(0), head(nullptr), tail(nullptr) {}

Scores::~Scores() {
    while (!empty()) {
        remove(0); 
    }
}

void Scores::add(const GameEntry& e) {
    if (numEntries == maxEntries) {
        std::cerr << "Error: The list is full, cannot add new entry.\n";
        return;
    }

    GENode* newNode = new GENode(e);
    if (empty()) {
        head = tail = newNode;
    } else {
        GENode* prev = nullptr;
        GENode* curr = head;
        while (curr != nullptr && curr->elem.getScore() > e.getScore()) {
            prev = curr;
            curr = curr->next;
        }
        if (prev == nullptr) {
            newNode->next = head;
            head = newNode;
        } else {
            newNode->next = curr;
            prev->next = newNode;
            if (curr == nullptr) {
                tail = newNode;
            }
        }
    }
    ++numEntries;
}

GameEntry Scores::remove(int i) {
    if (i < 0 || i >= numEntries) {
        return GameEntry("", -11);
    }

    GENode* prev = nullptr;
    GENode* curr = head;

    for (int index = 0; index < i; ++index) {
        prev = curr;
        curr = curr->next;
    }

    if (prev == nullptr) {
        head = curr->next;
    } else {
        prev->next = curr->next;
    }

    if (curr == tail) {
        tail = prev;
    }

    GameEntry e = curr->elem;
    delete curr;
    --numEntries;

    return e;
}

void Scores::printAll() {
    GENode* curr = head;
    while (curr != nullptr) {
        std::cout << "Name: " << curr->elem.getName() << ", Score: " << curr->elem.getScore() << std::endl;
        curr = curr->next;
    }
}

bool Scores::empty() const {
    return numEntries == 0;
}

int Scores::size() const {
    return numEntries;
}

int Scores::capacity() const {
    return maxEntries;
}
