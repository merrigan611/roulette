//
//  rouellet.cpp
//
//  Created by Jack Francis Merrigan on 5/26/26.
//

#include "rouellet.hpp"

rouellet::rouellet(){
    red= 0;
    black=0;
    green=0;
    money= 50000;
    games=0;
    srand(time(0));
    
}
void rouellet::playGame(){
    
    std::string playType;
    std::cout << "Do you want to bet on a color (Y/N)? ";
    std::cin >> playType;
    
    if(playType == "Y"){
        do{
            int pot = bet(money);
            int landedOn = spin();
            std::string color = track(landedOn);
            
            if(landedOn % 2 == 1 && color != "green"){
                money += pot * 2;
            }
            else{
                money -= pot;
            }
            games++;
            
        }while(games < 1001 && money > 0);
        
        results();
    }
    else{
        std::cout << "Game cancelled." << std::endl;
    }

}

int rouellet::bet(int ThePot){
    if(money > 0){
        ThePot = (rand() % money) + 1;
        return ThePot;
    }
    else{
        return 1001;
    }
}

std::string rouellet::track(int a){

    if(a % 2 == 1 && != 0 ){
        black++;
        return "black";
    }
    else if(a == 0){
        green++;
        return "green";
    }
    else{
        red++;
        return "red";
    }
}

void rouellet::results(){
    std::cout << red   << " came up this many times" << std::endl
    << black << " came up this many times" << std::endl
    << green << " came up this many times" << std::endl
    << money << " :is the amount of money left/won" << std::endl;
    
}
int rouellet::spin(){
    return rand() % 37;
}

