//Created by Manas Gupta and Vedant Mayur Shah 



#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

#ifndef PLAYER_H
#define PLAYER_H


using namespace std;


//Defined player class

class Player {


//Private data members 

private:

string name;
int numOfDogecoins;
int numOfComputers;
int frustationLevel;
int numVpns;
int ispLevel;
int numAnti;
int hackersDefeatedCum;

//Public member functions 


public: 

Player ();
void setPlayerName(string myName);
string getPlayerName();
int getCompLevel();
void setNumComps(int numOfComps);
int getFrustLevel();
int getPlayerDogecoins();
void setFrustLevel(int frustLevel);
void setIspLevel(int ispLevel);
int getIspLevel();
void setNumVpns(int numOfVpns);
int getNumVpns();
void setNumDogecoins(int numDogecoins);
void setNumAnti(int numOfAnti);
int getNumAnti();
void setHackerDefeatedCum(int numHacker);
int getHackerDefeatedCum();

};

#endif