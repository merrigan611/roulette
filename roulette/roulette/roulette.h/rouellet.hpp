//
//  rouellet.hpp
//  
//
//  Created by Jack Francis Merrigan on 5/26/26.
//

#ifndef roulette_hpp
#define roulette_hpp

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

class roulette {

public:
    roulette();
    void playGame();

private:
    std::string track(int a);
    void results();
    int spin();
    int bet(int b);

    int red;
    int black;
    int betAmount;   
    int games;
    int money;
};

#endif /* roulette_hpp */
