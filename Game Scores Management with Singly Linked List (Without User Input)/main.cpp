#include "Scores.h"
#include <iostream>

int main() {
    Scores scores(5); 

    scores.add(GameEntry("Jeff", 5));
    scores.add(GameEntry("Ashley", 10));
    scores.add(GameEntry("Linda", 15));
    scores.add(GameEntry("Ethan", 20));

    std::cout << "Scores after adding 4 entries:" << std::endl;
    scores.printAll();

    scores.add(GameEntry("Deyanara", 25));
    scores.add(GameEntry("Colby", 30));
    scores.add(GameEntry("Dan", 35));

    std::cout << "\nScores after adding more entries:" << std::endl;
    scores.printAll();

    scores.remove(0);

    std::cout << "\nScores after removing the first entry:" << std::endl;
    scores.printAll();

    return 0;
}
