//Created by Manas Gupta and Vedant Mayur Shah 



#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


//Below is my implementation of Computer class

#include "Computer.h"

//constructor for computer class

Computer::Computer () {

numOfCPU = 0;
numOfGPU = 0;
powerSupplyUnits  = 0;
computerCase = 0;
internetCard  = 0;
keyAndMouse  = 0;
premadeComp = 0;
maintLevel = 100;
numVirus = 0;

}

//setting number of viruses 

void Computer::setNumVirus(int numOfVirus) {

numVirus = numOfVirus;

}

//getting number of viruses 

int Computer::getNumVirus() {

return numVirus;

}

//setting maintanence level 

void Computer::setMaintLevel(int maintLevel) {


this -> maintLevel = maintLevel;


}

//get maintanence level 

int Computer::getMaintLevel() {

return maintLevel;

}

//Sets number of CPUS

void Computer::setNumOfCPU(int numCPU){

this->numOfCPU = numCPU;

}

//Gets number of GPUS 

int Computer::getNumGPU(){

return numOfGPU;

}

//Gets number of CPUS

int Computer::getNumOfCPU(){

return numOfCPU;

}

//gets number of psu's
int Computer::getNumPsu() {

return powerSupplyUnits;

}

//gets number of comp cases
int Computer::getNumCompCases() {

return computerCase;

}

//get number of internet cards 

int Computer::getNumIntCards() {

return internetCard;

}


//Sets number of GPUS 

void Computer::setNumGPU(int numGPU){

this->numOfGPU = numGPU;

}

//Sets power supply unnits

void Computer::setPowerSupplyUnits(int numPSL){

powerSupplyUnits = numPSL;

}

//Sets number of computer cases 
void Computer::setNumCompCase(int numCC){

computerCase = numCC;

}


//Sets number of internet cards
void Computer::setNumInternetCard(int numIC){

internetCard = numIC;

}

//gets number of keyboard and mouse 
int Computer::getKeyAndMouse() {

return keyAndMouse;


}

//set number of keyboard and mouse 

void Computer::setNumKeyAndMouse(int keyAndM) {

keyAndMouse = keyAndM;

}

//set number of premade computers

void Computer::setPreMadeComp() {

premadeComp = 1;

} 


//get number of premade computers 

int Computer::getPreMadeComp() {


return premadeComp;

}

