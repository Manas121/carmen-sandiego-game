
//Created by Manas Gupta and Vedant Mayur Shah 



#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#ifndef HACKER_H
#define HACKER_H

//Following is my hacker class 


//Below is my hacker class 

class Hacker {


//private data members 
private:

string name;
int challengeLevel;
bool defeatedOrNot;

//public member functions 

public: 

Hacker();
void setName(string name);
void setChallengeLevel(int challengeLevel);
void setDefeatedOrNot(bool yesOrNo);
string getName();
int getChallengeLevel();
bool getDefeatedOrNot();

};



#endif