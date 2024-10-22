#include "MusicPlayer.h"
#include "DNode.h"

int DNode::activeNodes = 0;

int main(){
    
    MusicPlayer player("Music Player");
    
    player.addSong(Song("Billie Jean", "Michael Jackson"));
    player.addSong(Song("Purple Rain", "Prince"));
    player.addSong(Song("Hey Jude", "The Beatles"));

    player.play();
    player.next();
    player.next();
    player.next();
    player.previous();

    player.print(true);
    player.print(false);

    player.removeSong();
    player.play();
    player.next();
    player.next();
    player.next();

    player.print(true);
    player.print(false);

    return 0;
    
    
    
    
}
