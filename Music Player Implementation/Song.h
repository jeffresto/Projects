#ifndef SONG_H
#define SONG_H

#include <iostream>
#include <string>

class Song{

private:
    std::string songTitle;
    std::string singerName;

public:
    Song(std::string sTitle = "", std::string sName = "")
        : songTitle(sTitle), singerName(sName) {
            
        }
    
    ~Song(){
        
    }
    
    std::string getSongTitle() {
        return songTitle;
    }
    std::string getSingerName(){
        return singerName;
    }
    
    void setSongTitle(std::string title){
        songTitle = title;
    }
    void setSingerName(std::string name){
        singerName = name;
    }
  
    friend std::ostream& operator<<(std::ostream& os, const Song& song){
        os << "Song: " << song.songTitle << " by " << song.singerName;
        return os;
    } 
  
};

#endif
