//Created by Manas Gupta and Vedant Mayur Shah 



#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


//Below is my implementation of Computer class

#include "Carmen.h"



//Carmen constructor (initializing all of our hackers- they work under carmen !)

Carmen::Carmen() {

progress = 0;

hackers[0].setName("hansolo1337");
hackers[0].setChallengeLevel(1);
hackers[1].setName("gandalf5000");
hackers[1].setChallengeLevel(1);
hackers[2].setName("tomato_cultivator20");
hackers[2].setChallengeLevel(1);
hackers[3].setName("cheeto_dweller");
hackers[3].setChallengeLevel(1);
hackers[4].setName("thejoker33");
hackers[4].setChallengeLevel(2);
hackers[5].setName("furiosa11");
hackers[5].setChallengeLevel(2);
hackers[6].setName("woodythesheriff");
hackers[6].setChallengeLevel(2);
hackers[7].setName("lizzathealien");
hackers[7].setChallengeLevel(2);
hackers[8].setName("ironman123");
hackers[8].setChallengeLevel(3);
hackers[9].setName("pizzaIsKnowledge");
hackers[9].setChallengeLevel(3);
hackers[10].setName("bing_bong_2015");
hackers[10].setChallengeLevel(3);
hackers[11].setName("num1_carmenfan77");
hackers[11].setChallengeLevel(3);
hackers[12].setName("free_almonds");
hackers[12].setChallengeLevel(4);
hackers[13].setName("uzer_1000");
hackers[13].setChallengeLevel(4);
hackers[14].setName("twinkle_star99");
hackers[14].setChallengeLevel(4);
hackers[15].setName("team-3dward-5evr");
hackers[15].setChallengeLevel(4);
hackers[16].setName("crazyCatLady76");
hackers[16].setChallengeLevel(5);
hackers[17].setName("numba_1programmer");
hackers[17].setChallengeLevel(5);
hackers[18].setName("myNameisJeff");
hackers[18].setChallengeLevel(5);
hackers[19].setName("treatYoSelf");
hackers[19].setChallengeLevel(5);



}

//set progress level 

void Carmen::setProgress(int progress) {

this -> progress = progress;

}

//get progress level 

int Carmen::getProgress() {

return progress;

}

//get hacker level 

Hacker Carmen::getHacker(int index) {


return hackers[index];


}

//set hacker defeated or not 

void Carmen::setHackersDefeatedOrNot(bool defeated, int index) {



hackers[index].setDefeatedOrNot(defeated);



}