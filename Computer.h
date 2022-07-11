
//Created by Manas Gupta and Vedant Mayur Shah 



#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

#ifndef COMPUTER_H
#define COMPUTER_H


using namespace std;


class Computer {

//Private data members
private:

int numOfCPU;
int numOfGPU;
int powerSupplyUnits;
int computerCase;
int internetCard;
int keyAndMouse;
int premadeComp;
int maintLevel;
int numVirus;

//Public member functions 
public: 

Computer ();
void setNumOfCPU(int numCPU);
int getNumOfCPU();
void setNumGPU (int numGPU);
int getNumGPU();
int getNumPsu();
int getNumCompCases();
int getNumIntCards();
int getKeyAndMouse();
void setPowerSupplyUnits(int numOfComps);
void setNumCompCase(int numOfCompCase);
void setNumInternetCard(int intCards);
void setNumKeyAndMouse(int kAndM);
void setPreMadeComp();
int getPreMadeComp();
void setMaintLevel(int maintLevel);
int getMaintLevel();
void setNumVirus(int numOfVirus);
int getNumVirus();


};

#endif