#include "CircleDLinkedList.h"

class MusicPlayer {
    
private:
    std::string type;
    CircleDLinkedList playlist;

public:
    MusicPlayer(std::string t) : type(t) {}

    ~MusicPlayer() {}

    void play() {
        if (!playlist.empty()) {
            std::cout << playlist.getCurrentSong() << std::endl;
        } else {
            std::cout << "No songs to play." << std::endl;
        }
    }

    void next() {
        playlist.advance();
        play();
    }

    void previous() {
        playlist.retreat();
        play();
    }

    void addSong(const Song& song) {
        playlist.add(song);
    }

    void removeSong() {
        playlist.remove();
    }

    int size() const {
        return playlist.size();
    }

    bool empty() const {
        return playlist.empty();
    }

    Song getCurrentSong() const {
        return playlist.getCurrentSong();
    }

    void print(bool forward) {
        playlist.print(forward);
    }
};
