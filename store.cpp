

//Created by Manas Gupta and Vedant Mayur Shah 


#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


//Below is my implementation of the store class 

#include "Store.h"


//Sets CPU cost

void Store::setCPUCost(int cpuCost) {

this -> cpuCost = cpuCost;

} 

//Sets GPU cost

void Store::setGpuCost(int gpuCost) {

this -> gpuCost = gpuCost;

} 

//Sets computer case cost

void Store::setcompCaseCost(int compCaseCost) {

this -> compCaseCost = compCaseCost;;

}

//Sets internet card cost
void Store::setInterCardCost(int interCardCost) {

this -> interCardCost = interCardCost;

}

//Sets keyboard and mouse cost

void Store::setkmCost(int kmCost) {

this -> kmCost = kmCost;

}

//Sets premade computer cost
void Store::setpremedCompCost(int premedCompCost) {

this -> premedCompCost = premedCompCost;

}

//Sets antivirus software cost

void Store::setAntivirusCost(int antivirusCost) {

this -> antiVirusCost = kmCost;

} 

//sets vpn cost
void Store::setVpnCost(int vpnCost) {

this -> vpnCost = vpnCost;

}

int Store::getCPUCost() {

return cpuCost;

}

int Store::getGpuCost() {

return gpuCost;

}

int Store::getPSUCost() {

return psuCost;

}

int Store::getcompCaseCost() {

return compCaseCost;

}

int Store::getInterCardCost() {

return interCardCost;

}

int Store::getkmCost() {

return kmCost;

}

int Store::getpremedCompCost() {

return premedCompCost;

}

int Store::getAntivirusCost() {

return antiVirusCost;

}

int Store::getVpnCost() {

return vpnCost;

}

int Store::getisLev2Cost() {

return ispLev2;

}

int Store::getIsLev3Cost() {

return ispLev3;

}

int Store::getIsLev4Cost() {

return ispLev4;

}

int Store::getIsLev5Cost() {

return ispLev5;

}