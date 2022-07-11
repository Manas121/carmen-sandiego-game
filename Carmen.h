#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

#ifndef CARMEN_H
#define CARMEN_H


using namespace std;



#include "Hacker.h"


//sets carmen 

class Carmen {

//private data members

private:


int progress;

Hacker hackers [20];

//public member functions 

public:

Carmen();
void setProgress(int progress);
int getProgress();
Hacker getHacker(int index);
void setHackersDefeatedOrNot(bool defeated, int index);


};


#endif