#include "DNode.h"

class CircleDLinkedList {
private:
    DNode* cursor;

public:
    CircleDLinkedList() : cursor(nullptr) {}

    bool empty() const { return cursor == nullptr; }
    int size() const {
        int count = 0;
        if (cursor) {
            DNode* temp = cursor;
            do {
                count++;
                temp = temp->next;
            } while (temp != cursor);
        }
        return count;
    }

    void add(const Song& song) {
        DNode* newNode = new DNode(song);
        if (cursor == nullptr) {
            cursor = newNode;
            cursor->next = cursor;
            cursor->prev = cursor;
        } else {
            DNode* nextNode = cursor->next;
            cursor->next = newNode;
            newNode->prev = cursor;
            newNode->next = nextNode;
            nextNode->prev = newNode;
            cursor = newNode;
        }
    }

    void remove() {
        if (cursor == nullptr) return;
        DNode* oldNode = cursor;
        if (oldNode->next == cursor) {
            cursor = nullptr;
        } else {
            cursor->prev->next = cursor->next;
            cursor->next->prev = cursor->prev;
            cursor = cursor->next;
        }
        delete oldNode;
    }

    void advance() {
        if (cursor) cursor = cursor->next;
    }

    void retreat() {
        if (cursor) cursor = cursor->prev;
    }

    Song getCurrentSong() const {
        if (cursor) return cursor->elem;
        return Song();
    }

    void print(bool forward = true) const {
        if (!cursor) return;
        DNode* start = cursor;
        do {
            std::cout << start->elem << std::endl;
            start = forward ? start->next : start->prev;
        } while (start != cursor);
    }

    ~CircleDLinkedList() {
        while (!empty()) remove();
    }
};
