
//Created by Manas Gupta and Vedant Mayur Shah 


#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


//Follwing is my hacker class

#include "Hacker.h"

//Hacker constructor 

Hacker::Hacker() {


defeatedOrNot = false; //(not defeated)

}

//gets hacker name 

string Hacker::getName() {

return name;

}


//sets whether hacker defeated or not 
void Hacker::setDefeatedOrNot(bool yesOrNo) {


defeatedOrNot = yesOrNo;


}

//sets challenge level 

int Hacker::getChallengeLevel() {


return challengeLevel;

}

//gets hacker defeated or not 

bool Hacker::getDefeatedOrNot() {

return defeatedOrNot;

}

//sets hacker name 

void Hacker::setName(string name) {

this-> name = name;

}

//Sets the challenge level

void Hacker::setChallengeLevel(int challengeLevel) {

this-> challengeLevel = challengeLevel;

}


