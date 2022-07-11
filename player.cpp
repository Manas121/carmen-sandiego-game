
//Created by Manas Gupta and Vedant Mayur Shah 



#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Player.h"


///Below is my implementation of the player class


//Default constructor


Player::Player() {

frustationLevel = 0;
numOfDogecoins = 200;
numOfComputers = 1;
ispLevel = 1;
numVpns = 1;
hackersDefeatedCum=0;

}


//getter function for players frustration level

int Player::getFrustLevel() {

return frustationLevel;


}

void Player::setHackerDefeatedCum(int numHacker) {    // setter function for how many hackers the player has defeated


hackersDefeatedCum = numHacker;           // number of hackers the player has defeated is the number of hackers


}


int Player::getHackerDefeatedCum() {                 // getter function number of hackers defeated

return hackersDefeatedCum;                   // value of the number of hackers defeated



}


//Setting players name

void Player::setPlayerName(string myName) {

name  = myName;

}

//Getting player's name 

string Player::getPlayerName() {


return name;


}

int Player::getPlayerDogecoins() {              // getter function for the amount of dogecoins

return numOfDogecoins;                        // value of the amount of dogecoins

}

//Setting number of computers
void Player::setNumComps(int numOfComps) {

numOfComputers  = numOfComps;;

}

void Player::setIspLevel(int ispLevel) {   // setter function for ISP

this->ispLevel = ispLevel;

}

int Player::getIspLevel() {

return ispLevel;                           // value for the isp level

}


//Setting frustation level

void Player::setFrustLevel(int frustLevel) {

frustationLevel  = frustLevel;

}

//Setting number of Vpns
void Player::setNumVpns(int numOfVpns) {

numVpns  = numOfVpns;

}

//setting number of dogecoins 

void Player::setNumDogecoins(int numDogecoins) {

numOfDogecoins = numDogecoins;

}

//setting set number of anitivirus 
void Player::setNumAnti(int numOfAnti) {

numAnti = numOfAnti;

}


//get number of antivirus
int Player::getNumAnti() {

return numAnti;

}

//get number of vps 
int Player::getNumVpns() {

return numVpns;

}