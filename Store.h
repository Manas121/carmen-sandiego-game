

//Created by Manas Gupta and Vedant Mayur Shah 



#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#ifndef STORE_H
#define STORE_H


//Below is my store class 

class Store {

//Following are the private member functions 

private:

double cpuCost;
double gpuCost;
double psuCost;
double compCaseCost;
double interCardCost;
double kmCost;
double premedCompCost;
double antiVirusCost;
double vpnCost;
double ispLev2;
double ispLev3;
double ispLev4;
double ispLev5;



//Below are my public data members

public: 

void setCPUCost (int cpuCost);
int getCPUCost ();
void setGpuCost (int gpuCost);
int getGpuCost();
void setPSUCost (int psuCost);
int getPSUCost();
void setcompCaseCost (int compCaseCost);
int getcompCaseCost();
void setInterCardCost (int interCardCost);
int getInterCardCost();
void setkmCost(int kmCost);
int getkmCost();
void setpremedCompCost(int premedCompCost);
int getpremedCompCost();
void setAntivirusCost (int antivirusCost);
int getAntivirusCost();
void setVpnCost (int vpnCost);
int getVpnCost();
void setisLev2Cost (int ispLev2Cost);
int getisLev2Cost();
void setisLev3Cost (int ispLev3Cost);
int getIsLev3Cost();
void setisLev4Cost (int ispLev4Cost);
int getIsLev4Cost();
void setisLev5Cost (int ispLev5Cost);
int getIsLev5Cost();

};

#endif