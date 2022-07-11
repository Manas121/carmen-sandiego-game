//Created by Manas Gupta and Vedant Mayur Shah 


//NOTE - IF RUNNING/COMPILING THIS FILE, IT IS PREFFERED THAT YOU USE THE "Play button"/Windows Powershell to compile/run this file.

#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

//#include "Computer.h"
//#include "Store.h"
//#include "Hacker.h"
//#include "Player.h"
//#include "Carmen.h"
//#include "Map.h"


using namespace std;



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


//Below is my implementation of the player class


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


//setters and getter function for the store class 
void Store::setCPUCost(int cpuCost) {

this -> cpuCost = cpuCost;

} 

//setting psu cost 
void Store::setPSUCost(int psuCost) {

this -> psuCost = psuCost;

}

//setting isp cost, accoridng to levels 
void Store::setisLev2Cost(int lev2cost) {


this -> ispLev2 = lev2cost;


}


void Store::setisLev3Cost(int lev3cost) {

this -> ispLev3 = lev3cost;

}

void Store::setisLev4Cost(int lev4cost) {


this -> ispLev4 = lev4cost;


}

void Store::setisLev5Cost(int lev5cost) {


this -> ispLev5 = lev5cost;


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

//gets cpu cost 
int Store::getCPUCost() {

return cpuCost;

}

//gpu gpu cost 
int Store::getGpuCost() {

return gpuCost;

}

//set psu cost 
int Store::getPSUCost() {

return psuCost;

}

//get comp case cost 

int Store::getcompCaseCost() {

return compCaseCost;

}

//get internet card cost 

int Store::getInterCardCost() {

return interCardCost;

}

//get keyboard and mouse cost

int Store::getkmCost() {

return kmCost;

}

//get premed computer cost 

int Store::getpremedCompCost() {

return premedCompCost;

}

//get antivirus cost 

int Store::getAntivirusCost() {

return antiVirusCost;

}

//get vpn cost 

int Store::getVpnCost() {

return vpnCost;

}

//get internet service provider cost, according to login 

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



//Below is my Computer class

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

//Sets number of cpmputer cases 
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



class Map
{
     private:
          static const int num_rows = 5;
          static const int num_cols = 9;
          static const int num_npcs = 3;
          static const int num_hackers = 3;

          int playerPosition[2];
          int bestBuyPosition[2];
          int npcPositions[num_npcs][2];
          int hackerPositions[num_hackers][2];
          char mapData[num_rows][num_cols];

          int npc_count;
          int hacker_count;
          bool best_buy_on_map;

     public :
          Map();

          void resetMap();

          // getters
          int getPlayerRowPosition();
          int getPlayerColPosition();
          int getNPCCount();
          int getHackerCount();

          // setters
          void setPlayerRowPosition(int);
          void setPlayerColPosition(int);
          void setNPCCount(int);
          void setHackerCount(int);

          bool spawnNPC(int, int);
          bool spawnBestBuy(int, int);
          bool spawnHacker(int, int);

          void displayMap();
          void displayMoves();  
          bool executeMove(char);

          bool isBestBuyLocation();
          bool isNPCLocation();
          bool isHackerLocation();

          bool isBestBuyOnMap();
};



Map::Map()
{
    resetMap();
}

// resets player position, count values, and initializes values in position arrays to -1
void Map::resetMap() {
    playerPosition[0] = 0; 
    playerPosition[1] = 0;

    bestBuyPosition[0] = -1;
    bestBuyPosition[1] = -1;

    npc_count = 0;
    hacker_count = 0;
    best_buy_on_map = false;

    for (int i = 0; i < num_npcs; i++) {
        npcPositions[i][0] = -1;
        npcPositions[i][1] = -1;
    }

    for (int i = 0; i < num_hackers; i++) {
        hackerPositions[i][0] = -1;
        hackerPositions[i][1] = -1;
    }

    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            mapData[i][j] = '-';
        }
    }
}






// return player's row position
int Map::getPlayerRowPosition() {
    return playerPosition[0];
}

// return player's column position
int Map::getPlayerColPosition() {
    return playerPosition[1];
}

int Map::getNPCCount() {
    return npc_count;
}

int Map::getHackerCount() {
    return hacker_count;
}

// set player's row position to parameter row
void Map::setPlayerRowPosition(int row) {
    playerPosition[0] = row;
}

// set player's column position to parameter row
void Map::setPlayerColPosition(int col) {
    playerPosition[1] = col;
}

void Map::setNPCCount(int count) {
    npc_count = count;
}

void Map::setHackerCount(int count) {
    hacker_count = count;
}

/* add Hacker to map
 * Parameters: where to spawn Hacker -- row (int), col (int)
 * Return: (bool) false if no more space in hackerPositions array
 *                      or if (row, col) is an invalid position
 *                      or if (row, col) is already populated; else true
 */
bool Map::spawnHacker(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    if (hacker_count >= num_hackers) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }

    if (hackerPositions[hacker_count][0] == -1 && hackerPositions[hacker_count][1] == -1) {
        hackerPositions[hacker_count][0] = row;
        hackerPositions[hacker_count][1] = col;
        mapData[row][col] = 'H';
        hacker_count++;
        return true;
    }

    return false;
}

/* add NPC to map
 * Parameters: where to spawn NPC -- row (int), col (int)
 * Return: (bool) false if no more space in npcPositions array
 *                      or if (row, col) is an invalid position
 *                      or if (row, col) is already populated; else true
 */
bool Map::spawnNPC(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    if (npc_count >= num_npcs) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }

    if (npcPositions[npc_count][0] == -1 && npcPositions[npc_count][1] == -1) {
        npcPositions[npc_count][0] = row;
        npcPositions[npc_count][1] = col;
        mapData[row][col] = 'N';
        npc_count++;
        return true;
    }

    return false;
}

/* add Best Buy to map
 * Parameters: where to spawn Best Buy -- row (int), col (int)
 * Return: (bool) false if (row, col) is an invalid location
 *                      or if (row, col) is already populated
 *                      or if there is a best buy already on the map; else true
 */
bool Map::spawnBestBuy(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }

    if (best_buy_on_map) {
        return false;
    }

    if (bestBuyPosition[0] == -1 && bestBuyPosition[1] == -1) {
        bestBuyPosition[0] = row;
        bestBuyPosition[1] = col;
        mapData[row][col] = 'B';
        best_buy_on_map = true;
        return true;
    }

    return false;
}

// return true if x, y position has a best buy there
bool Map::isBestBuyLocation(){
    return bestBuyPosition[0] == playerPosition[0] && bestBuyPosition[1] == playerPosition[1];
}

// return true if x, y position has an npc there
bool Map::isNPCLocation(){
    for(int i = 0; i < num_npcs; i++){
        if(npcPositions[i][0] == playerPosition[0] && npcPositions[i][1] == playerPosition[1]){
            return true; 
        }
    }
    return false; 
}

// return true if x, y position has a hacker there
bool Map::isHackerLocation() {
    for(int i = 0; i < num_hackers; i++){
        if(hackerPositions[i][0] == playerPosition[0] && hackerPositions[i][1] == playerPosition[1]){
            return true; 
        }
    }
    return false; 
}

/*
 * This function prints a menu of valid moves based on playerPosition
 * Parameters: none
 * Return: nothing (void)
 */
void Map::displayMoves(){
    if(!(playerPosition[0] == 0)){
        cout << "w (Up)" << endl;
    }
    if(!(playerPosition[0] == (num_rows - 1))){
        cout << "s (Down)" << endl; 
    }
    if(!(playerPosition[1] == 0)){
        cout << "a (Left)" << endl; 
    }
    if(!(playerPosition[1] == (num_cols - 1))){
        cout << "d (Right)" << endl; 
    }
}

/*
 * This function takes in user input
 * and updates playerPosition on the map.
 * Parameters: move (char) -- 'w' (up), 'a' (left), 's' (down), 'd' (right)
 * Return: (bool) if move is valid, then true, else false
 */
bool Map::executeMove(char move){
    // if user inputs w, move up if it is an allowed move
    if(!(playerPosition[0] == 0) && (tolower(move) == 'w')){
        playerPosition[0] -= 1;
        return true; 
    }
    // if user inputs s, move down if it is an allowed move
    else if(!(playerPosition[0] == (num_rows - 1))&& (tolower(move) == 's')){
        playerPosition[0] += 1;
        return true; 
    }
    // if user inputs a, move left if it is an allowed move
    else if(!(playerPosition[1] == 0)&& (tolower(move) == 'a')){
        playerPosition[1] -= 1;
        return true; 
    }
    // if user inputs d, move right if it is an allowed move
    else if(!(playerPosition[1] == (num_cols - 1))&& (tolower(move) == 'd')){
        playerPosition[1] += 1;
        return true; 
    }
    else{
        cout << "Invalid Move" << endl; 
        return false; 
    }
}

/*
 * This function prints a 2D map in the terminal.
 * Parameters: none
 * Return: nothing (void)
 */
void Map::displayMap() {
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            if (playerPosition[0] == i && playerPosition[1] == j) {
                cout << "x";
            } else if (mapData[i][j] == 'H') {  // don't show hacker on the map
                cout << "-";
            }
            else {
                cout << mapData[i][j];
            }
        }
        cout << endl;
    }
}

// returns true if there is already a Best Buy on the map
bool Map::isBestBuyOnMap() {
    return best_buy_on_map;
}


//best buy function

void bestBuy(Player &mainPlayer, Computer &playersComputer, Store &bestBuyStore, int serverRoom) {


//SettingPrices
if (serverRoom == 1) {

//setting cost according to server room 1


bestBuyStore.setCPUCost(10);
bestBuyStore.setGpuCost(20);
bestBuyStore.setPSUCost(5);
bestBuyStore.setcompCaseCost(15);
bestBuyStore.setInterCardCost(5);
bestBuyStore.setkmCost(10);
bestBuyStore.setpremedCompCost(100);


bestBuyStore.setAntivirusCost(10);
bestBuyStore.setVpnCost(20);
bestBuyStore.setisLev2Cost(10);
bestBuyStore.setisLev3Cost(25);
bestBuyStore.setisLev4Cost(40);
bestBuyStore.setisLev5Cost(50);

} else if (serverRoom == 2) {

//setting cost according to server room 2 

bestBuyStore.setCPUCost(10*0.10+10);
bestBuyStore.setGpuCost(20*0.10+20);
bestBuyStore.setPSUCost(5*0.10+5);
bestBuyStore.setcompCaseCost(15*0.10+15);
bestBuyStore.setInterCardCost(5*0.10+5);
bestBuyStore.setkmCost(10*0.10+10);
bestBuyStore.setpremedCompCost(100*0.10+100);


bestBuyStore.setAntivirusCost(10*0.10+10);
bestBuyStore.setVpnCost(20*0.10+20);
bestBuyStore.setisLev2Cost(10*0.10+10);
bestBuyStore.setisLev3Cost(25*0.10+25);
bestBuyStore.setisLev4Cost(40*0.10+25);
bestBuyStore.setisLev5Cost(50*0.10+50);

} else if (serverRoom == 3) {

//setting cost according to server room 3 

bestBuyStore.setCPUCost((10*0.10+10)*0.20+(10*0.10+10));
bestBuyStore.setGpuCost((20*0.10+20)*0.20+(20*0.10+20));
bestBuyStore.setPSUCost((5*0.10+5)*0.20+(5*0.10+5));
bestBuyStore.setcompCaseCost((15*0.10+15)*0.20+(15*0.10+15));
bestBuyStore.setInterCardCost((5*0.10+5)*0.20+(5*0.10+5));
bestBuyStore.setkmCost((10*0.10+10)*0.20+(10*0.10+10));
bestBuyStore.setpremedCompCost((100*0.10+100)*0.20+(100*0.10+100));

bestBuyStore.setAntivirusCost((10*0.10+10)*0.20+(10*0.10+10));
bestBuyStore.setVpnCost((20*0.10+20)*0.20+(20*0.10+20));
bestBuyStore.setisLev2Cost((10*0.10+10)*0.20+(10*0.10+10));
bestBuyStore.setisLev3Cost((25*0.10+25)*0.20+(25*0.10+25));
bestBuyStore.setisLev4Cost((40*0.10+25)*0.20+(40*0.10+25));
bestBuyStore.setisLev5Cost((50*0.10+50)*0.20+(50*0.10+50));

} else if (serverRoom == 4) {

//setting cost according to server room 4

bestBuyStore.setCPUCost(((10*0.10+10)*0.20+(10*0.10+10))*0.25+((10*0.10+10)*0.20+(10*0.10+10)));
bestBuyStore.setGpuCost(((20*0.10+20)*0.20+(20*0.10+20))*0.25+((20*0.10+20)*0.20+(20*0.10+20)));
bestBuyStore.setPSUCost(((5*0.10+5)*0.20+(5*0.10+5))*0.25+((5*0.10+5)*0.20+(5*0.10+5)));
bestBuyStore.setcompCaseCost(((15*0.10+15)*0.20+(15*0.10+15))*0.25+((15*0.10+15)*0.20+(15*0.10+15)));
bestBuyStore.setInterCardCost(((5*0.10+5)*0.20+(5*0.10+5))*0.25+((5*0.10+5)*0.20+(5*0.10+5)));
bestBuyStore.setkmCost(((10*0.10+10)*0.20+(10*0.10+10))*0.25+((10*0.10+10)*0.20+(10*0.10+10)));
bestBuyStore.setpremedCompCost(((100*0.10+100)*0.20+(100*0.10+100))*0.25+((100*0.10+100)*0.20+(100*0.10+100)));

bestBuyStore.setAntivirusCost(((10*0.10+10)*0.20+(10*0.10+10))*0.25+((10*0.10+10)*0.20+(10*0.10+10)));
bestBuyStore.setVpnCost(((20*0.10+20)*0.20+(20*0.10+20))*0.25+((20*0.10+20)*0.20+(20*0.10+20)));
bestBuyStore.setisLev2Cost(((10*0.10+10)*0.20+(10*0.10+10))*0.25+((10*0.10+10)*0.20+(10*0.10+10)));
bestBuyStore.setisLev3Cost(((25*0.10+25)*0.20+(25*0.10+25))*0.25+((25*0.10+25)*0.20+(25*0.10+25)));
bestBuyStore.setisLev4Cost(((40*0.10+25)*0.20+(40*0.10+25))*0.25+((40*0.10+25)*0.20+(40*0.10+25)));
bestBuyStore.setisLev5Cost(((50*0.10+50)*0.20+(50*0.10+50))*0.25+((50*0.10+50)*0.20+(50*0.10+50)));

} else if (serverRoom == 5) {

//setting cost according to server room 5 

bestBuyStore.setCPUCost((((10*0.10+10)*0.20+(10*0.10+10))*0.25+((10*0.10+10)*0.20+(10*0.10+10)))*0.30+(((10*0.10+10)*0.20+(10*0.10+10))*0.25+((10*0.10+10)*0.20+(10*0.10+10))));
bestBuyStore.setGpuCost((((20*0.10+20)*0.20+(20*0.10+20))*0.25+((20*0.10+20)*0.20+(20*0.10+20)))*0.30+(((20*0.10+20)*0.20+(20*0.10+20))*0.25+((20*0.10+20)*0.20+(20*0.10+20))));
bestBuyStore.setPSUCost((((5*0.10+5)*0.20+(5*0.10+5))*0.25+((5*0.10+5)*0.20+(5*0.10+5)))*0.30+(((5*0.10+5)*0.20+(5*0.10+5))*0.25+((5*0.10+5)*0.20+(5*0.10+5))));
bestBuyStore.setcompCaseCost((((15*0.10+15)*0.20+(15*0.10+15))*0.25+((15*0.10+15)*0.20+(15*0.10+15)))*0.30+(((15*0.10+15)*0.20+(15*0.10+15))*0.25+((15*0.10+15)*0.20+(15*0.10+15))));
bestBuyStore.setInterCardCost((((5*0.10+5)*0.20+(5*0.10+5))*0.25+((5*0.10+5)*0.20+(5*0.10+5)))*0.30+(((5*0.10+5)*0.20+(5*0.10+5))*0.25+((5*0.10+5)*0.20+(5*0.10+5))));
bestBuyStore.setkmCost((((10*0.10+10)*0.20+(10*0.10+10))*0.25+((10*0.10+10)*0.20+(10*0.10+10)))*0.30+(((10*0.10+10)*0.20+(10*0.10+10))*0.25+((10*0.10+10)*0.20+(10*0.10+10))));
bestBuyStore.setpremedCompCost((((100*0.10+100)*0.20+(100*0.10+100))*0.25+((100*0.10+100)*0.20+(100*0.10+100)))*0.30+(((100*0.10+100)*0.20+(100*0.10+100))*0.25+((100*0.10+100)*0.20+(100*0.10+100))));

bestBuyStore.setAntivirusCost((((10*0.10+10)*0.20+(10*0.10+10))*0.25+((10*0.10+10)*0.20+(10*0.10+10)))*0.30+(((10*0.10+10)*0.20+(10*0.10+10))*0.25+((10*0.10+10)*0.20+(10*0.10+10))));
bestBuyStore.setVpnCost((((20*0.10+20)*0.20+(20*0.10+20))*0.25+((20*0.10+20)*0.20+(20*0.10+20)))*0.30+(((20*0.10+20)*0.20+(20*0.10+20))*0.25+((20*0.10+20)*0.20+(20*0.10+20))));
bestBuyStore.setisLev2Cost((((10*0.10+10)*0.20+(10*0.10+10))*0.25+((10*0.10+10)*0.20+(10*0.10+10)))*0.30+(((10*0.10+10)*0.20+(10*0.10+10))*0.25+((10*0.10+10)*0.20+(10*0.10+10))));
bestBuyStore.setisLev3Cost((((25*0.10+25)*0.20+(25*0.10+25))*0.25+((25*0.10+25)*0.20+(25*0.10+25)))*0.30+(((25*0.10+25)*0.20+(25*0.10+25))*0.25+((25*0.10+25)*0.20+(25*0.10+25))));
bestBuyStore.setisLev4Cost((((40*0.10+25)*0.20+(40*0.10+25))*0.25+((40*0.10+25)*0.20+(40*0.10+25)))*0.30+(((40*0.10+25)*0.20+(40*0.10+25))*0.25+((40*0.10+25)*0.20+(40*0.10+25))));
bestBuyStore.setisLev5Cost((((50*0.10+50)*0.20+(50*0.10+50))*0.25+((50*0.10+50)*0.20+(50*0.10+50)))*0.30+(((50*0.10+50)*0.20+(50*0.10+50))*0.25+((50*0.10+50)*0.20+(50*0.10+50))));

} 

ifstream in_File;

in_File.open("best_buy_info.txt");


string line;



while (getline(in_File,line)) { 



cout << line << "\n";


}


in_File.close();

int buyInput;
bool didBuyAnti = false;
double totalCost = 0;

//loop that allows the user to buy multiple items 


do {


cout << "\n" << "Please specify what you would like to purchase, if anything. Enter 1  for Computer parts, 2 for Antivirus Software, 3. for VPN, 4 for Internet Provider, and 5 if you'd like to purchase nothing." << "\n";

cin >> buyInput;


if (buyInput == 1) {

//if player chooses to buy computer parts 


cout << "Best buy suggests you buy atleast one of each Computer part" << "\n";
cout << "You can have a maximum of 3 of each computer part and 1 extra premade computer. These are the different parts: " << "\n";
cout << "▪ A CPU costs 10 Dogecoins" << "\n";
cout << "▪ A GPU costs 20 Dogecoins" << "\n";
cout << "▪ A Power Supply Unit costs 5 Dogecoins" << "\n";
cout << "▪ A Computer Case costs 15 Dogecoins" << "\n";
cout << "▪ An internet card costs 5 Dogecoins" << "\n";
cout << "▪ A keyboard and mouse costs 10 Dogecoins" << "\n";
cout << "▪ A premade computer costs 100 Dogecoins" << "\n";

int partChoice;

cout << "What parts would you like to purchase? Type 1 for CPU, 2 for GPU, 3 for Power supply unit, 4 for Computer Case, 5 for internet card, 6 for Keyboard and Mouse, 7 for a premade computer." << "\n";

cin >> partChoice;

int quantity;

cout << "Please specify the quantity. Please adhere to the max cap." << "\n";

cin >> quantity;

//if player chooses to buy cpu 

if (partChoice == 1) {


if (mainPlayer.getPlayerDogecoins()>=bestBuyStore.getCPUCost()*quantity) {


if (playersComputer.getNumOfCPU() < 3 && quantity<=3 ) {


playersComputer.setNumOfCPU(playersComputer.getNumOfCPU()+quantity);


mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getCPUCost()*quantity);

totalCost = totalCost+bestBuyStore.getCPUCost()*quantity;

} else {


cout << "You can't buy more than 3 of this item" << "\n";


}


} else {

cout << "Sorry, you're too broke to buy this. Please choose a lesser quantity of this item." << "\n";

}


} else if (partChoice == 2) {

//if player chooses to buy gpu

if (mainPlayer.getPlayerDogecoins()>=bestBuyStore.getGpuCost()*quantity) {

if (playersComputer.getNumGPU() < 3 && quantity<=3) {

playersComputer.setNumGPU(playersComputer.getNumGPU()+quantity);


mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getGpuCost()*quantity);

totalCost = totalCost+bestBuyStore.getGpuCost()*quantity;

} else {

cout << "You can't buy more than 3 of this item" << "\n";

}


} else {

cout << "Sorry, you're too broke to buy this. Please choose a lesser quantity of this item." << "\n";

}


} else if (partChoice == 3) {

//if player chooses to buy psu


if (mainPlayer.getPlayerDogecoins()>=bestBuyStore.getPSUCost()*quantity) {


if (playersComputer.getNumPsu() < 3 && quantity<=3) {

playersComputer.setPowerSupplyUnits(playersComputer.getNumPsu()+quantity);

mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getPSUCost()*quantity);

totalCost = totalCost+bestBuyStore.getPSUCost()*quantity;

} else {


cout << "You can't buy more than 3 of this item" << "\n";


}


} else {

cout << "Sorry, you're too broke to buy this. Please choose a lesser quantity of this item." << "\n";

} 



} else if (partChoice == 4) { 

//if the player chooses to buy comp cases 

if (mainPlayer.getPlayerDogecoins()>=bestBuyStore.getcompCaseCost()*quantity) {


if (playersComputer.getNumCompCases() < 3 && quantity<=3) {

playersComputer.setNumCompCase(playersComputer.getNumCompCases()+quantity);

mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getcompCaseCost()*quantity);

totalCost = totalCost+bestBuyStore.getcompCaseCost()*quantity;

} else {

cout << "You can't buy more than 3 of this item" << "\n";

}

} else {

cout << "Sorry, you're too broke to buy this. Please choose a lesser quantity of this item." << "\n";

}



} else if (partChoice == 5) {

//if the player chooses to buy internet cards 

if (mainPlayer.getPlayerDogecoins()>=bestBuyStore.getInterCardCost()*quantity) {

if (playersComputer.getNumIntCards() < 3 && quantity<=3) {

playersComputer.setNumInternetCard(playersComputer.getNumIntCards()+quantity);

mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getInterCardCost()*quantity);

totalCost=totalCost+bestBuyStore.getInterCardCost()*quantity;

} else {


cout << "You can't buy more than 3 of this item" << "\n";

}


} else {


cout << "Sorry, you're too broke to buy this. Please choose a lesser quantity of this item." << "\n";



}



} else if (partChoice == 6) {

//if the player chooses the to buy keyboard and mouse

if (mainPlayer.getPlayerDogecoins()>=bestBuyStore.getkmCost()*quantity) {

if (playersComputer.getKeyAndMouse() < 3 && quantity<=3) {

playersComputer.setNumKeyAndMouse(playersComputer.getKeyAndMouse()+quantity);

mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getkmCost()*quantity);

totalCost = totalCost+bestBuyStore.getkmCost()*quantity;

} else {

cout << "You can't buy more than 3 of this item" << "\n";


} 

} else {


cout << "Sorry, you're too broke to buy this. Please choose a lesser quantity of this item." << "\n";


}

} else if (partChoice == 7) {

//if the player chooses to buy pre made computers 

if (mainPlayer.getPlayerDogecoins()>=bestBuyStore.getpremedCompCost()) {

if (playersComputer.getPreMadeComp() < 1 && quantity<=1) {

playersComputer.setPreMadeComp();

playersComputer.setMaintLevel(playersComputer.getMaintLevel()+100);

mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getpremedCompCost());

totalCost = totalCost+bestBuyStore.getpremedCompCost();

} else {

//tells if quantity is not right 
cout << "You can't buy more than 1 of this item." << "\n";


}

} else {

//tells that you dont have enough money to buy this item 
cout << "Sorry, you're too broke to buy this. Please choose a lesser quantity of this item." << "\n";


}

} else {

//tells that your input is invalid 
cout << "Invalid input. Please reinter the correct input" << "\n";


}

//Tells user if they've already reached max cap on the item 

} else if (buyInput == 2) {

if(didBuyAnti == true) {

cout << "Sorry, you can't purchase this again" << "\n";

}



if (didBuyAnti == false) {

int quantity;

//asks the user for quantity of usb sticks 
cout << "How many usb sticks would you like to purchase?" << "\n";

cin >> quantity;



if (mainPlayer.getPlayerDogecoins()>=bestBuyStore.getAntivirusCost()*quantity) {


mainPlayer.setNumAnti(mainPlayer.getNumAnti()+quantity);


mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getAntivirusCost()*quantity);

totalCost = totalCost+bestBuyStore.getAntivirusCost()*quantity;

didBuyAnti= true;

} else {

//tells the user that they don't have enough money to the purchase the respective quantity of the respective product
cout << "Sorry, you're too broke to buy this. Please choose a lesser quantity of this item." << "\n";


}

}


} else if (buyInput == 3) {

//asks the user how many usb sticks they would like to purchase 
cout << "How many VPNs would you like to purchase?" << "\n";

int quantity;

cin >> quantity;

if(mainPlayer.getPlayerDogecoins()>=bestBuyStore.getVpnCost()*quantity) {

mainPlayer.setNumVpns(mainPlayer.getNumVpns()+quantity);

mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getVpnCost()*quantity);

totalCost = totalCost+bestBuyStore.getVpnCost()*quantity;


} else {

//tells the user they dont have enough money to buy this item 
cout << "Sorry, you're too broke to buy this. Please choose a lesser quantity of this item." << "\n";


}


} else if (buyInput == 4) {


//asks the user what internet service provider they'd like to purchase 
cout << "What level internet provder would you like to purchase? Levels range from 2 to 5" << "\n";

int level;

cin >> level;

//if player choses level 2
if (level==2) {


if (mainPlayer.getPlayerDogecoins()>=bestBuyStore.getisLev2Cost()) {


mainPlayer.setIspLevel(2);

mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getisLev2Cost());

totalCost = totalCost + bestBuyStore.getisLev2Cost();


} else {


cout << "Sorry, you're too broke to buy this level of ISP. Please select a lower level." << "\n";


}

//if the player choses level 3 
} else if (level == 3) {



if (mainPlayer.getPlayerDogecoins()>=bestBuyStore.getIsLev3Cost()) {


mainPlayer.setIspLevel(3);

mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getIsLev3Cost());

totalCost = totalCost+bestBuyStore.getIsLev3Cost();

} else {


cout << "Sorry, you're too broke to buy this level of ISP. Please select a lower level." << "\n";


}

//if the player choses level 4
} else if (level == 4) {



if (mainPlayer.getPlayerDogecoins()>=bestBuyStore.getIsLev4Cost()) {


mainPlayer.setIspLevel(4);

mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getIsLev4Cost());

totalCost=totalCost+bestBuyStore.getIsLev4Cost();

} else {

//tells the player he's too broke to buy this quantity of this item 
cout << "Sorry, you're too broke to buy this level of ISP. Please select a lower level." << "\n";


}


//if the player choses level 5
} else if (level == 5) {



if (mainPlayer.getPlayerDogecoins()>=bestBuyStore.getIsLev5Cost()) {


mainPlayer.setIspLevel(5);

mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()-bestBuyStore.getIsLev5Cost());

totalCost = totalCost+bestBuyStore.getIsLev5Cost();


} else {

//tells the user he's too broke to buy this level of ISP 
cout << "Sorry, you're too broke to buy this level of ISP. Please select a lower level." << "\n";


}



} else {

//tells the user the input is invalid 
cout << "Invalid input. Please reinter the correct input" << "\n";


}


} else if (buyInput == 5) {

//tells the user they're exiting best buy 
cout << "Exiting best buy. Hasta la vista baby!! Come back soon" << "\n";


return;


} else {

//tells the user the input is invalid 
cout << "Invalid input. Please reinter the correct input" << "\n";


}


//prints the total cost for the user 
cout << "Your total cost so far: " << totalCost << "\n";



} while (buyInput != 5);


 
}

//my status update function - returns nothing 

void statusUpdate (Player &mainPlayer, Computer &playersComputer, Store &bestBuyStore, Carmen &mainCarmen, int serverRoom) {


cout << "Status update: " << "\n";

//Prints the status update after each turn 

cout << "     *CPU's: " << playersComputer.getNumOfCPU() << "\n";
cout << "     *GPU's: " << playersComputer.getNumGPU() << "\n";
cout << "     *Power supply unit's: " << playersComputer.getNumPsu() << "\n";
cout << "     *Computer case's: " << playersComputer.getNumCompCases() << "\n";
cout << "     *Internet card's: " << playersComputer.getNumIntCards() << "\n";
cout << "     *Keyboard and mouse's: " << playersComputer.getKeyAndMouse() << "\n";
cout << "     *Premade Computer: " << playersComputer.getPreMadeComp() << "\n";
cout << "     *VPN's: " << mainPlayer.getNumVpns() << "\n";
cout << "     *USB Stick's: " << mainPlayer.getNumAnti() << "\n";
cout << "     *Internet provider level:  " << mainPlayer.getIspLevel() << "\n";
cout << "     *Number of dogecoins:  " << mainPlayer.getPlayerDogecoins() << "\n";
cout << "     *Player's frustation:  " << mainPlayer.getFrustLevel() << "\n";
cout << "     *Carmen's progress level:  " << mainCarmen.getProgress() << "\n";
cout << "     *Total Hackers defeated:  " << mainPlayer.getHackerDefeatedCum() << "\n";
cout << "     *Player's Computer Maintenence level:   " << playersComputer.getMaintLevel() << "\n";



//Drops maintanence level by 10 per virus after each turn 
playersComputer.setMaintLevel(playersComputer.getMaintLevel()-10*playersComputer.getNumVirus());

//drops players frustation level after each turn 
mainPlayer.setFrustLevel(mainPlayer.getFrustLevel()+2);


//Updates player dogecoins after each turn 
mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()+5+playersComputer.getNumGPU()*5);


}



//uses random function  to come up with a random row index

int randomRowIndex() {


srand(time(0));
return rand() % (4 - 0 + 1) + 0;


}

//uses random function to come up with a random column index 

int randomColumnIndex() {


srand(time(0));
return rand() % (9 - 0 + 1) + 0;


}

//function for stackoverflow puzzle 

bool stackOverflowPuzzle (Player &mainPlayer, Computer &playersComputer, Store &bestBuyStore, Carmen &mainCarmen, int serverRoom) {

//randomly chooses one question out of 5 questions 

srand(time(0));
int q =  rand() % (5 - 1 + 1) + 1;
bool correct = false;

//first question 

if ( q==1) {

cout << "Guess the number! The number is between 1 and 5. Please enter your answer." << "\n";

int num;

cin >> num;

if (num==3)
correct = true;



}


if (q==2) {

//second question 
cout << "How many countries are in the world? Please enter your answer." << "\n";


int num;

cin >> num;

if (num==195)
correct = true;



}

if (q==3) {

//third question 
cout << "How many planets in our solar system? Please enter your answer." << "\n";


int num;

cin >> num;

if (num==8)
correct = true;



}

if (q==4) {

//4th question 
cout << "How many meters in a kilometer? Please enter your answer." << "\n";


int num;

cin >> num;

if (num==1000)
correct = true;



}

//5th question 
if (q==5) {


cout << "The unlucky number? Please enter your answer" << "\n";


int num;

cin >> num;

if (num==13)
correct = true;



}



if (correct==true) {

//tells if you got it right 
cout << "hurray you got it right " << "\n";
mainPlayer.setFrustLevel(mainPlayer.getFrustLevel()-5);


} else {

//tells if you got it wrong 
cout << "Ooops you lost. No benefits acquired! " << "\n"; 

}


return correct;



}

//misfortune function - takes in mainPlayer, players computer, etc as parameters 

void misfortune (Player &mainPlayer, Computer &playersComputer, Store &bestBuyStore, Carmen &mainCarmen, int serverRoom) {

srand(time(0));

int num = rand() % (100 - 1 + 1) + 1;


if (num > 0 && num <= 33) {


srand(time(0));

int r =  rand() % (3 - 1 + 1) + 1;


if (r==1) {

//if misfortune occurs

if (playersComputer.getNumOfCPU()>0 && playersComputer.getNumGPU()>0 && playersComputer.getNumPsu()>0 && playersComputer.getNumCompCases()>0 && playersComputer.getNumIntCards()>0 && playersComputer.getKeyAndMouse()>0 && mainPlayer.getNumAnti()>0) {

cout << "OH NO! Misfortune occured. Your team was robbed by Carmen’s dastardly hackers!" << "\n";

srand(time(0));

int q =  rand() % (2 - 1 + 1) + 1;


if (q==1) {
//misfortune event 1 (selected randomly )
playersComputer.setNumOfCPU(0);
playersComputer.setNumGPU(0);
playersComputer.setPowerSupplyUnits(0);
playersComputer.setNumCompCase(0);
playersComputer.setNumInternetCard(0);
playersComputer.setNumKeyAndMouse(0);
cout << "You have no computer parts left!" << "\n";

}


 if (q==2) {

//misfortune event 2 (selected randomly)

mainPlayer.setNumAnti(0);


cout << "Your antivirus was stolen " << "\n";



}

} else {

//misfortune event 3 (selected randomly)

cout << "oops. Misfortune occured! Computer Maintenance level dropped by 10" << "\n";
playersComputer.setMaintLevel(playersComputer.getMaintLevel()-10);

}


}


if (r==2) {

//misfortune occured 
playersComputer.setMaintLevel(10);

cout << "Oh no! Misfortunred occured.Your computer was damaged" << "\n";

}


if (r==3) {

//misfortune occured 

mainPlayer.setFrustLevel(mainPlayer.getFrustLevel()+10);
cout << "Oh no! Your frustation level has imcreased" << "\n";



}


}


}


//code for puzzle functionality - different puzzles are embedded in this function


bool puzzle (Player &mainPlayer, Computer &playersComputer, Store &bestBuyStore, Carmen &mainCarmen, int serverRoom) {

//opems the puzzle text file 


ifstream in_File;

in_File.open("puzzles.txt");

//creates a line to store different lines from the text file 

string line;

bool answered  = false;


int q = 1;

//Following are the different questions for the puzzle. A question is chosen at random 

srand(time(0));
int randQ = rand() % (5 - 1 + 1) + 1;


if(q==1 && randQ==1)
cout << "Question " << 1 << "\n";



while (getline(in_File,line)) { 


if (q==randQ)
cout << line << "\n";



if (line == "---") {

if (q==randQ) {

if (q==1) {


cout << " Please enter an answer to this question in the form of an integer" << "\n";

int answer  = 0;

cin >> answer;

if (answer == 21) 
answered = true;


}


else if (q==2) {

//Second question 

cout << " Please enter an answer to this question in the form of an integer" << "\n";

int answer  = 0;

cin >> answer;

if (answer == 13) 
answered = true;




}


else if (q==3) {

//Asks the user for the answer 

cout << " Please enter an answer by typing either ''A'', ''B'', ''C'', or ''D'' " << "\n";

char answer;

cin >> answer;

if (answer == 'B') 
answered = true;



}


else if (q==4) {


//Asks the user for answer 

cout << " Please enter an answer by typing either ''A'', ''B'', ''C'', or ''D'' " << "\n";

char answer;

cin >> answer;

if (answer == 'A') 
answered = true;




}

else if (q==5) {


//Asks the user for answer 

cout << " Please enter an answer by typing either ''A'', ''B'', ''C'', or ''D'' " << "\n";

char answer;

cin >> answer;

if (answer == 'D') 
answered = true;


}

break;
}

//update question
q++;

if (q==randQ)
cout << "Question " << q << "\n";



}



}

//Displays the result of the question 

in_File.close();

if (answered == true) {

cout << "Congrats you solved the puzzle" << "\n";

} else

cout << "HAHA Loser you lost" << "\n";

return answered;


}

//Speak to npc function, returns nothing 

void speakToNPC(Player &mainPlayer, Computer &playersComputer, Store &bestBuyStore, Carmen &mainCarmen, int serverRoom) {

//asks the user whether they would like to emgage with the hacker or not 
cout << "Do you choose to Complete NPC's puzzle or take your chances? Type 1 for puzzle and 2 to take your chances" << "\n";

int input;

bool validInput = true;

do {

cin >> input;

validInput=true;

if (input == 1) {

//if player wins, randomly give them a free computer part 
if (puzzle(mainPlayer,playersComputer,bestBuyStore,mainCarmen,serverRoom)) {

srand(time(0));

int r = rand() % (6 - 1 + 1) + 1;

if (r == 1)
playersComputer.setNumOfCPU(playersComputer.getNumOfCPU()+1);

else if (r==2)
playersComputer.setNumGPU(playersComputer.getNumGPU()+1);

else if (r==3)
playersComputer.setPowerSupplyUnits(playersComputer.getNumPsu()+1);

else if (r==4)
playersComputer.setNumCompCase(playersComputer.getNumCompCases()+1);

else if (r==5)
playersComputer.setNumInternetCard(playersComputer.getNumIntCards()+1);

else if (r==6)
playersComputer.setNumKeyAndMouse(playersComputer.getKeyAndMouse()+1);

cout << "You got a free Computer part!" << "\n";

}



} else if (input == 2) {

//if luck is on their side, they get a free computer part 

srand(time(0));

int r = rand() % (99 - 1 + 1) + 1;


if (r > 0 && r <= 33) {



srand(time(0));

int k = rand() % (6 - 1 + 1) + 1;

if (k == 1)
playersComputer.setNumOfCPU(playersComputer.getNumOfCPU()+1);

else if (k==2)
playersComputer.setNumGPU(playersComputer.getNumGPU()+1);

else if (k==3)
playersComputer.setPowerSupplyUnits(playersComputer.getNumPsu()+1);

else if (k==4)
playersComputer.setNumCompCase(playersComputer.getNumCompCases()+1);

else if (k==5)
playersComputer.setNumInternetCard(playersComputer.getNumIntCards()+1);

else if (k==6)
playersComputer.setNumKeyAndMouse(playersComputer.getKeyAndMouse()+1);

cout << "You got a free Computer part from the NPC!" << "\n";


} else if (r > 33 && r <= 66) {

//Encountered nuetral npc, in which case nothing happens 

cout << "You encountered a nuetral NPC. Nothing happened" << "\n";


} else {

//npc steals a randomly selected computer part, luck was not on their side 

srand(time(0));

int x = rand() % (6 - 1 + 1) + 1;

if (x == 1)
playersComputer.setNumOfCPU(playersComputer.getNumOfCPU()-1);

else if (x==2)
playersComputer.setNumGPU(playersComputer.getNumGPU()-1);

else if (x==3)
playersComputer.setPowerSupplyUnits(playersComputer.getNumPsu()-1);

else if (x==4)
playersComputer.setNumCompCase(playersComputer.getNumCompCases()-1);

else if (x==5)
playersComputer.setNumInternetCard(playersComputer.getNumIntCards()-1);

else if (x==6)
playersComputer.setNumKeyAndMouse(playersComputer.getKeyAndMouse()-1);


cout << "Uh oh! NPC stole a random part of your computer" << "\n";



}



} else {

validInput=false;

cout << "Invalid input. Enter 1 for puzzle or 2 to take your chances" << "\n";

}

} while (validInput==false);



}


//Computer repair function - allows the player to repair their computer using computer parts 

void computerRepair (Player &mainPlayer, Computer &playersComputer, Store &bestBuyStore, Carmen &mainCarmen, int serverRoom) {


int totalParts = 0;
bool playerRunsAgain = false;

//displays the different parts player can use to repair their computer
do {

if ((playersComputer.getNumOfCPU()>0 ||playersComputer.getNumGPU()>0 || playersComputer.getNumPsu()>0 || playersComputer.getNumCompCases()>0 || playersComputer.getNumIntCards()>0 || playersComputer.getKeyAndMouse()>0) && playersComputer.getMaintLevel()<100) {


playerRunsAgain = false;

//following parts can be used 
cout << "Inventory: " << "\n";
cout << "CPU: " << playersComputer.getNumOfCPU() << "\n";
cout << "Gpu: " << playersComputer.getNumGPU() << "\n";
cout << "PSU: " << playersComputer.getNumPsu() << "\n";
cout << "Computer Cases: " << playersComputer.getNumCompCases() << "\n";
cout << "Internet cards: " << playersComputer.getNumIntCards() << "\n";
cout << "Keyboard and mouse: " << playersComputer.getKeyAndMouse() << "\n";


bool validUserInput = false;

bool altCout = false;



do {

//asks user to input part 

cout << "Which part would you like to use to repair your Computer? Type 1 for CPU, 2 for GPU, 3 for PSU, 4 for Computer Case, 5 for internet card, and 6 for keyboard and mouse." << "\n";


int userInput  = 0;
cin >> userInput;


if (userInput == 1) {
validUserInput=true;

if (playersComputer.getNumOfCPU()>0) {

//Aslks for quantity from the user 

cout << "How many of these parts would you like to use? Should be less than 5" << "\n";

int qty;
cin >> qty;

bool validQty=false;

do {
if (playersComputer.getNumOfCPU()>=qty && qty<=5) {

validQty = true;
playersComputer.setNumOfCPU(playersComputer.getNumOfCPU()-qty);

totalParts = totalParts+qty;

} else {

//Tells user they don't have enough parts 

cout << "You do not have enough of this part. Please select a lesser quantity." << "\n";

}

} while(validQty==false);

} else {
//Tells user they don't have enough parts 

validUserInput= false;
altCout = true;
cout << "Ooops. You do not have any of these parts. Please select a different part." << "\n";

}



} else if (userInput == 2) {

validUserInput=true;

if (playersComputer.getNumGPU()>0) {

//Asks user for quantity 


cout << "How many of these parts would you like to use? Should be less than 5" << "\n";

int qty;
cin >> qty;

int validQty = false;

do {
if (playersComputer.getNumGPU()>=qty && qty<=5) {

validQty=true;
playersComputer.setNumGPU(playersComputer.getNumGPU()-qty);

totalParts = totalParts+qty;

} else {

//Informs user they don't have enough of those parts 

cout << "You do not have enough of this part. Please select a lesser quantity." << "\n";

}

} while (validQty==false);

} else {

//Informs user they dont have enough of those parts 

validUserInput=false;
altCout = true;
cout << "Ooops. You do not have any of these parts. Please select a different part." << "\n";

}



} else if (userInput == 3) {
validUserInput=true;
if (playersComputer.getNumPsu()>0) {

//Asks user for the quantity of the part 

cout << "How many of these parts would you like to use? Should be less than 5" << "\n";

int qty;
cin >> qty;

int validQty = false;
do {
if (playersComputer.getNumPsu()>=qty && qty<=5) {

validQty=true;
playersComputer.setPowerSupplyUnits(playersComputer.getNumPsu()-qty);

totalParts = totalParts+qty;

} else {

//informs user they dont have enough of this part 

cout << "You do not have enough of this part. Please select a different quantity." << "\n";

}

} while(validQty==false);

} else {

validUserInput=false;
altCout=true;

//informs user they don't have enough of this part 

cout << "Ooops. You do not have any of these parts. Please select a different part." << "\n";

}





} else if (userInput == 4) {
validUserInput=true;
if (playersComputer.getNumCompCases()>0) {

//asks user for the quantity

cout << "How many of these parts would you like to use? Should be less than 5" << "\n";

int qty;
cin >> qty;

bool validQty = false;

do {

if (playersComputer.getNumCompCases()>=qty && qty<=5) {

validQty=true;
playersComputer.setNumCompCase(playersComputer.getNumCompCases()-qty);

totalParts = totalParts+qty;

} else {

//asks user for the quantity 

cout << "You do not have enough of this part. Please select a different quantity." << "\n";

}

} while(validQty==false);

} else {

//tells user they dont have enough of requested parts 

 validUserInput = false;   
 altCout=true;
cout << "Ooops. You do not have any of these parts. Please select a different part." << "\n";

}


} else if (userInput == 5) {
validUserInput=true;
if (playersComputer.getNumIntCards()>0) {

//asks user for the quantity 

cout << "How many of these parts would you like to use? Should be less than 5" << "\n";

int qty;
cin >> qty;

bool validQty = false; 

do {

if (playersComputer.getNumIntCards()>=qty && qty<=5) {

validQty=true;

playersComputer.setNumInternetCard(playersComputer.getNumIntCards()-qty);

totalParts = totalParts+qty;

} else {
//tells user they don't have enough of the requested part 
cout << "You do not have enough of this part. Please select a different quantity." << "\n";

}

} while(validQty==false);

} else {

validUserInput=false;
altCout=true;

//tells user they don't have enough of requested parts 

cout << "Ooops. You do not have any of these parts. Please select a different part." << "\n";

}


} else if (userInput == 6) {

validUserInput=true;
if (playersComputer.getKeyAndMouse()>0) {

//asks the user for the quantity of the part 

cout << "How many of these parts would you like to use? Should be less than 5" << "\n";

int qty;
cin >> qty;

bool validQty = false;

do {

if (playersComputer.getKeyAndMouse()>=qty && qty<=5) {

validQty=false;

playersComputer.setNumKeyAndMouse(playersComputer.getKeyAndMouse()-qty);

totalParts = totalParts+qty;

} else {

//tells user they dont have enough of requested parts 

cout << "You do not have enough of this part. Please select a different quantity." << "\n";

}

} while(validQty==false);

} else {

validUserInput=false;
altCout=true;
//tells user they dont have enough parts 
cout << "Ooops. You do not have any of these parts. Please select a different part." << "\n";

}



} else if (userInput<1 ||userInput>6 || altCout==true){

//tells user input is invalid 

if(altCout!=true)
cout << "Invalid input. " << "\n";

}


} while (validUserInput==false);


} else {

break;

}



if (totalParts<5 && (playersComputer.getNumOfCPU()>0 ||playersComputer.getNumGPU()>0 || playersComputer.getNumPsu()>0 || playersComputer.getNumCompCases()>0 || playersComputer.getNumIntCards()>0 || playersComputer.getKeyAndMouse()>0)) {

//tells user how many computer parts they user
cout << "You used " << totalParts << " total parts yet. You can use " << 5-totalParts << " more parts to repair your computer even more. " <<  "If you would like to do this, type 1. If no, type any other number" << "\n";


int mainInput;
cin >> mainInput;

if (mainInput == 1) {

playerRunsAgain = true;

} else if (mainInput == 2) {

playerRunsAgain = false;

}

} else {

break;

}


} while (playerRunsAgain==true);






if (totalParts > 0) {


playersComputer.setMaintLevel(playersComputer.getMaintLevel()+(20*totalParts));

//tells user their computer was repaired 
cout << "Congrats, your computer was repaired" << "\n";


} else 

//tells user their computer was unable to be repaired 

cout << "Sorry your computer was unable to be repaired " << "\n";


}


//function for using usb functionality 


void useUSB (Player &mainPlayer, Computer &playersComputer, Store &bestBuyStore, Carmen &mainCarmen, int serverRoom) {

//allows the user to use their usb stick to get rid of their virus 
playersComputer.setNumVirus(0);


mainPlayer.setNumAnti(mainPlayer.getNumAnti()-1);



}

//function for updating virus 

void virus (Player &mainPlayer, Computer &playersComputer, Store &bestBuyStore, Carmen &mainCarmen, int serverRoom) {


playersComputer.setNumVirus(playersComputer.getNumVirus()+1);


}


//function for updating hacker fight 


bool hackerFight (Player &mainPlayer, Computer &playersComputer, Store &bestBuyStore, Carmen &mainCarmen, int serverRoom) {


//determine which hacker to fight 

string hackersName;
int hackerIndex = 0;
bool didPlayerWin = false;

if (serverRoom == 1) {

//hacker conditions for server room 1 
do {

srand(time(0));

hackerIndex = rand() % (3 - 0 + 1) + 0;
 
if(mainCarmen.getHacker(hackerIndex).getDefeatedOrNot() == false) {

mainCarmen.setHackersDefeatedOrNot(true,hackerIndex);

}


} while (mainCarmen.getHacker(hackerIndex).getDefeatedOrNot() == false);

//tells user which hacker they encountered 

cout << "You just ran into " << mainCarmen.getHacker(hackerIndex).getName() << " Think you can beat this hacker's skills?" << "\n";


} else if (serverRoom == 2) {

//hacker conditions for server room 2 

do {

srand(time(0));

hackerIndex = rand() % (7 - 4 + 1) + 4;
 
if(mainCarmen.getHacker(hackerIndex).getDefeatedOrNot() == false) {

mainCarmen.setHackersDefeatedOrNot(true,hackerIndex);

}


} while (mainCarmen.getHacker(hackerIndex).getDefeatedOrNot() == false);


cout << "You just ran into " << mainCarmen.getHacker(hackerIndex).getName() << " Think you can beat this hacker's skills?" << "\n";


} else if (serverRoom == 3) {

//hacker conditions for server room 3 

do {

srand(time(0));

hackerIndex = rand() % (11 - 8 + 1) + 8;
 
if(mainCarmen.getHacker(hackerIndex).getDefeatedOrNot() == false) {

mainCarmen.setHackersDefeatedOrNot(true,hackerIndex);

}


} while (mainCarmen.getHacker(hackerIndex).getDefeatedOrNot() == false);


cout << "You just ran into " << mainCarmen.getHacker(hackerIndex).getName() << " Think you can beat this hacker's skills?" << "\n";


} else if (serverRoom == 4) {

//hacker conditions for server room 4


do {

srand(time(0));

hackerIndex = rand() % (15 - 12 + 1) + 12;
 
if(mainCarmen.getHacker(hackerIndex).getDefeatedOrNot() == false) {

mainCarmen.setHackersDefeatedOrNot(true,hackerIndex);

}


} while (mainCarmen.getHacker(hackerIndex).getDefeatedOrNot() == false);

cout << "You just ran into " << mainCarmen.getHacker(hackerIndex).getName() << " Think you can beat this hacker's skills?" << "\n";


} else if (serverRoom == 5) {

//hacker conditions for server room 5

do {

srand(time(0));

hackerIndex = rand() % (19 - 16 + 1) + 16;
 
if(mainCarmen.getHacker(hackerIndex).getDefeatedOrNot() == false) {

mainCarmen.setHackersDefeatedOrNot(true,hackerIndex);

}


} while (mainCarmen.getHacker(hackerIndex).getDefeatedOrNot() == false);


//tells user which hacker they encountered 


cout << "You just ran into " << mainCarmen.getHacker(hackerIndex).getName() << " Think you can beat this hacker's skills?" << "\n";





}

//asks user wher they'dlike to fight or forfeit 

cout << "Would you like to attack or forfiet? Type 1 for attack and 2 to forfeit." << "\n";
int userInput;
cin >> userInput;

bool validInput = false;

do {

//if user decided to attack 

if (userInput==1){

validInput=true;

if (playersComputer.getMaintLevel()>0) {


srand(time(0));
int r1 = rand() % (6 - 1 + 1) + 1;
srand(time(0));
int r2 = rand() % (6 - 1 + 1) + 1;

double battleOutcome = 0;
if (mainPlayer.getNumVpns()>0)
battleOutcome  = (r1*mainPlayer.getIspLevel())-((r2*serverRoom)/mainPlayer.getNumVpns());
else
cout << "The battle of the outcome could not be determined since the player owns 0 VPN's. We're counting this as a loss for the player." << "\n";

//program displays the result 

if (battleOutcome>0) {

didPlayerWin = true;

cout << "Congrats, you won the battle." << "\n";
mainPlayer.setNumDogecoins(mainPlayer.getPlayerDogecoins()+50);
mainPlayer.setHackerDefeatedCum(mainPlayer.getHackerDefeatedCum()+1);


} else {

//program displays the result 
didPlayerWin = false;
cout << "Sorry, you have lost this battle." << "\n";


mainCarmen.setProgress(mainCarmen.getProgress()+25);


playersComputer.setMaintLevel(playersComputer.getMaintLevel()-20);


srand(time(0));

int randNum = rand() % (100 - 1 + 1) + 1;

if (randNum > 0 && randNum<=10) {

//10 % probablity that players computer will be infected with a virus after the battle 

virus(mainPlayer,playersComputer,bestBuyStore,mainCarmen,serverRoom);


}



}


} else {

//Forfeit case

didPlayerWin = false;

cout << "Sorry, you are not able to fight since your maintanence level is not above 0. You have automatically forfeited." << "\n";

playersComputer.setNumOfCPU(0);
playersComputer.setNumGPU(0);
playersComputer.setPowerSupplyUnits(0);
playersComputer.setNumCompCase(0);
playersComputer.setNumInternetCard(0);
playersComputer.setNumKeyAndMouse(0);

}


srand(time(0));


int myRand  =  rand() % (6 - 1 + 1) + 1;

if (myRand == 1) 
playersComputer.setNumOfCPU(0);
else if(myRand == 2)
playersComputer.setNumGPU(0);
else if (myRand == 3)
playersComputer.setPowerSupplyUnits(0);
else if (myRand == 4)
playersComputer.setNumCompCase(0);
else if (myRand == 5)
playersComputer.setNumInternetCard(0);
else if (myRand == 6)
playersComputer.setNumKeyAndMouse(0);



} else if (userInput == 2) {

validInput=true;

playersComputer.setNumOfCPU(0);
playersComputer.setNumGPU(0);
playersComputer.setPowerSupplyUnits(0);
playersComputer.setNumCompCase(0);
playersComputer.setNumInternetCard(0);
playersComputer.setNumKeyAndMouse(0);


} else {

//tells user their input is invalid 

validInput=false;

cout << "Invalid input. Please enter 1 for attack and 2 for forfeit." << "\n";

}

} while(validInput==false);



srand(time(0));


int nnRand  =  rand() % (6 - 1 + 1) + 1;


if (nnRand == 1) 
playersComputer.setNumOfCPU(0);
else if(nnRand == 2)
playersComputer.setNumGPU(0);
else if (nnRand == 3)
playersComputer.setPowerSupplyUnits(0);
else if (nnRand == 4)
playersComputer.setNumCompCase(0);
else if (nnRand == 5)
playersComputer.setNumInternetCard(0);
else if (nnRand == 6)
playersComputer.setNumKeyAndMouse(0);


//drops maintanence level 

srand(time(0));


int nRand  =  rand() % (100 - 1 + 1) + 1;

if (nRand>0 && nRand<= 30) {

playersComputer.setMaintLevel(playersComputer.getMaintLevel()-10);


}

//returns the result of the battle 

return didPlayerWin;



}

//sorting algorithm


void sort (Player &mainPlayer, Computer &playersComputer, Store &bestBuyStore, Carmen &mainCarmen, int serverRoom) {


string computerParts [6] = {"CPU: ", "GPU: ", "PSU: ", "Computer Cases: ", "Internet cards ", " Keyboard and mouse: "};

int numOfComputerParts [6] = {playersComputer.getNumOfCPU(), playersComputer.getNumGPU(), playersComputer.getNumPsu(), playersComputer.getNumCompCases(), playersComputer.getNumIntCards(), playersComputer.getKeyAndMouse()};


//sorting algorithm 

int i = 0;
int j = 0;
int min = 0;
int temp = 0;

//sorts computer parts from least quantity and greatest quantity 

for (int i = 0; i < 6; i ++) {

min = i;

for (int j = i+1; j< 6; j++) {

if(numOfComputerParts[j]<numOfComputerParts[min]) 
min=j;

temp = numOfComputerParts[i];
numOfComputerParts[i]=numOfComputerParts[min];
//computerParts[i] = computerParts[min];
numOfComputerParts[min] = temp;
//computerParts[min]=computerParts[i];
}



}

cout << "Here's your sorted computer parts from lowest value to smallest value: " << "\n";

for (int i = 0; i < 6; i++) {


cout << numOfComputerParts[i] << "\n";



}

}

//function checks whether the game is ove ror not and returns the result in the form of boolean 

bool isGameOver (Player &mainPlayer, Computer &playersComputer, Store &bestBuyStore, Carmen &mainCarmen, int serverRoom) {


bool isOver = false;

//checking game over conditions, acccording to game specifics 
if (mainPlayer.getFrustLevel()>99) {

//game over case 1 

isOver=true;

cout << "Your frustation level has reached hundred! You lose :(" << "\n";



ofstream out_file;
out_file.open("results.txt");

//writes final status update into a file 

out_file << "     *CPU's: " << playersComputer.getNumOfCPU() << "\n";
out_file << "     *GPU's: " << playersComputer.getNumGPU() << "\n";
out_file << "     *Power supply unit's: " << playersComputer.getNumPsu() << "\n";
out_file << "     *Computer case's: " << playersComputer.getNumCompCases() << "\n";
out_file << "     *Internet card's: " << playersComputer.getNumIntCards() << "\n";
out_file << "     *Keyboard and mouse's: " << playersComputer.getKeyAndMouse() << "\n";
out_file << "     *Premade Computer: " << playersComputer.getPreMadeComp() << "\n";
out_file << "     *USB Stick's: " << mainPlayer.getNumAnti() << "\n";
out_file << "     *VPN's: " << mainPlayer.getNumVpns() << "\n";
out_file << "     *Internet provider level:  " << mainPlayer.getIspLevel() << "\n";
out_file << "     *Number of dogecoins:  " << mainPlayer.getPlayerDogecoins() << "\n";
out_file << "     *Player's frustation:  " << mainPlayer.getFrustLevel() << "\n";
out_file << "     *Carmen's progress level:  " << mainCarmen.getProgress() << "\n";
out_file << "     *Total Hackers defeated:  " << mainPlayer.getHackerDefeatedCum() << "\n";
out_file << "     *Player's Computer Maintenence level:   " << playersComputer.getMaintLevel() << "\n";

out_file.close();

sort(mainPlayer,playersComputer, bestBuyStore, mainCarmen, serverRoom);

}

if (mainCarmen.getProgress()>99) {

//game over condition true 

isOver = true;

cout << "Carmen's progress level has reached hundred. You lose :(" << "\n";


ofstream out_file;
out_file.open("results.txt");


//saves final status update to a file 

out_file << "     *CPU's: " << playersComputer.getNumOfCPU() << "\n";
out_file << "     *GPU's: " << playersComputer.getNumGPU() << "\n";
out_file << "     *Power supply unit's: " << playersComputer.getNumPsu() << "\n";
out_file << "     *Computer case's: " << playersComputer.getNumCompCases() << "\n";
out_file << "     *Internet card's: " << playersComputer.getNumIntCards() << "\n";
out_file << "     *Keyboard and mouse's: " << playersComputer.getKeyAndMouse() << "\n";
out_file << "     *Premade Computer: " << playersComputer.getPreMadeComp() << "\n";
out_file << "     *USB Stick's: " << mainPlayer.getNumAnti() << "\n";
out_file << "     *VPN's: " << mainPlayer.getNumVpns() << "\n";
out_file << "     *Internet provider level:  " << mainPlayer.getIspLevel() << "\n";
out_file << "     *Number of dogecoins:  " << mainPlayer.getPlayerDogecoins() << "\n";
out_file << "     *Player's frustation:  " << mainPlayer.getFrustLevel() << "\n";
out_file << "     *Carmen's progress level:  " << mainCarmen.getProgress() << "\n";
out_file << "     *Total Hackers defeated:  " << mainPlayer.getHackerDefeatedCum() << "\n";
out_file << "     *Player's Computer Maintenence level:   " << playersComputer.getMaintLevel() << "\n";

out_file.close();

sort(mainPlayer,playersComputer, bestBuyStore, mainCarmen, serverRoom);

}


if (playersComputer.getMaintLevel() < 1) {

//game over condition 3 

isOver = true;

cout << "Your Computer's maintanence level has reached zero. You lose :( " << "\n";

//saves the final result to a file 

ofstream out_file;
out_file.open("results.txt");

out_file << "     *CPU's: " << playersComputer.getNumOfCPU() << "\n";
out_file << "     *GPU's: " << playersComputer.getNumGPU() << "\n";
out_file << "     *Power supply unit's: " << playersComputer.getNumPsu() << "\n";
out_file << "     *Computer case's: " << playersComputer.getNumCompCases() << "\n";
out_file << "     *Internet card's: " << playersComputer.getNumIntCards() << "\n";
out_file << "     *Keyboard and mouse's: " << playersComputer.getKeyAndMouse() << "\n";
out_file << "     *Premade Computer: " << playersComputer.getPreMadeComp() << "\n";
out_file << "     *USB Stick's: " << mainPlayer.getNumAnti() << "\n";
out_file << "     *VPN's: " << mainPlayer.getNumVpns() << "\n";
out_file << "     *Internet provider level:  " << mainPlayer.getIspLevel() << "\n";
out_file << "     *Number of dogecoins:  " << mainPlayer.getPlayerDogecoins() << "\n";
out_file << "     *Player's frustation:  " << mainPlayer.getFrustLevel() << "\n";
out_file << "     *Carmen's progress level:  " << mainCarmen.getProgress() << "\n";
out_file << "     *Total Hackers defeated:  " << mainPlayer.getHackerDefeatedCum() << "\n";
out_file << "     *Player's Computer Maintenence level:   " << playersComputer.getMaintLevel() << "\n";

out_file.close();

sort(mainPlayer,playersComputer, bestBuyStore, mainCarmen, serverRoom);

}


//returns whether game over or not


return isOver;



}





int main () {


Carmen mainCarmen;

//1st server roon; just starting

int serverRoom=1;

Player mainPlayer;

Map map;

Computer playersComputer;
Store bestBuyStore;



srand(time(0));


//asks user for name 


cout << "Welcome to where in the code is Carmen Sandiego. Please enter your name." << "\n";
string name;
cin >> name;


mainPlayer.setPlayerName(name);

map.spawnBestBuy(0,0);

//welcomes user to whichever server room they're in 

cout << "Welcome to Server Room " << serverRoom << "\n" << "\n";
cout << "You're in a Best Buy!" << endl << "\n";

bestBuy(mainPlayer,playersComputer,bestBuyStore,serverRoom);

//First server room to be continued


int numHackersDefeated = 0;

while (serverRoom<=5)

{

if (serverRoom!=1)
cout << "Welcome to Server Room " << serverRoom << "\n";



//Setting up the current server room

//for spawning best buy


if (serverRoom!=1) {

map.spawnBestBuy(randomRowIndex(),randomColumnIndex());

}


//for spawning NPC's



srand(time(0));

int numNPCs = rand() % (3 - 1 + 1) + 1;
int x = 0;


while (x<numNPCs) {

bool spawnSucess = false;

do {

spawnSucess = map.spawnNPC(randomRowIndex(),randomColumnIndex());

} while (spawnSucess == false);

x++;

}


//for spawning Hacker's


srand(time(0));

//choose how many hackers will be on the map (between 1 and 3)
int numHackers = rand() % (3 - 1 + 1) + 1;

int y = 0;

while (y<numHackers) {


bool spawnSucess = false;

do {
   
spawnSucess = map.spawnHacker(randomRowIndex(),randomColumnIndex());

} while (spawnSucess == false);

y++;

}

//Resetting number of hackers defeated, since entering new server room
numHackersDefeated = 0;

//Entering currrent server room
    char move;
    while (numHackersDefeated<numHackers) {

    map.displayMap();  // pretty print map_data in terminal

        cout << "Valid moves are: " << endl; 
        map.displayMoves();  // give user a menu of valid moves to pick from
        
        cout << "Input a move: "; 
        cin >> move;
        cout << endl;
        map.executeMove(move);  // move the player on map based on user input
     

       if (map.isBestBuyLocation()) {
            cout << "You're in a Best Buy!" << endl;

          bestBuy(mainPlayer,playersComputer,bestBuyStore,serverRoom);

        }

        if (map.isHackerLocation()) {

            cout << "You've encountered a Hacker!" << endl;
            
            bool playerWin = hackerFight(mainPlayer,playersComputer,bestBuyStore,mainCarmen,serverRoom);
            
            if (playerWin==true)
                numHackersDefeated++;


        }

        if (map.isNPCLocation()) {
            cout << "You've encountered an NPC!" << endl;

            speakToNPC(mainPlayer,playersComputer,bestBuyStore,mainCarmen,serverRoom);
        }



    //gives user the option to do other things as well 


        cout << "ATTENTION! You have the option to do the following as well - 1) Repair your Computer 2) Browse Stack Overflow, and 3) Use USB stick or 4)Quit game. Please choose one of the corresponding numbers to indicate your choice. IF you would like to do none of these, type any other number" << "\n";

        int newInput;
        cin >>newInput;
  
        if (newInput==1) {
       
        if (playersComputer.getMaintLevel()<100 && playersComputer.getNumVirus()<1) {
        

        computerRepair(mainPlayer,playersComputer,bestBuyStore,mainCarmen,serverRoom);


        } else

        //if user wants to repair computer 

        cout << "You're unable to repair your computer at this time because either your computer's maintanence level is too high or your computer has a virus(es)" << "\n";

         
        }

        if (newInput==2)

        //if user wants to browse stackoverflow

         stackOverflowPuzzle(mainPlayer,playersComputer,bestBuyStore,mainCarmen,serverRoom);


        
        if (newInput==3) {
        //if user wants to use usb stick to get rid of their virus 
        if (playersComputer.getNumVirus()>0) {
        useUSB(mainPlayer,playersComputer,bestBuyStore,mainCarmen,serverRoom);
        cout << "Congrats you got rid of any/all viruses" << "\n";
        }
        else {

        cout << "You don't have a virus to get rid of!" << "\n";

        }

       
        }
        
        //if user wants to quit game 

        if (newInput==4) {

         cout << " You quit. Sorry you could not win the game :(" << "\n";


         ofstream out_file;
out_file.open("results.txt");


//save results to a textfile 


out_file << "     *CPU's: " << playersComputer.getNumOfCPU() << "\n";
out_file << "     *GPU's: " << playersComputer.getNumGPU() << "\n";
out_file << "     *Power supply unit's: " << playersComputer.getNumPsu() << "\n";
out_file << "     *Computer case's: " << playersComputer.getNumCompCases() << "\n";
out_file << "     *Internet card's: " << playersComputer.getNumIntCards() << "\n";
out_file << "     *Keyboard and mouse's: " << playersComputer.getKeyAndMouse() << "\n";
out_file << "     *Premade Computer: " << playersComputer.getPreMadeComp() << "\n";
out_file << "     *USB Stick's: " << mainPlayer.getNumAnti() << "\n";
out_file << "     *VPN's: " << mainPlayer.getNumVpns() << "\n";
out_file << "     *Internet provider level:  " << mainPlayer.getIspLevel() << "\n";
out_file << "     *Number of dogecoins:  " << mainPlayer.getPlayerDogecoins() << "\n";
out_file << "     *Player's frustation:  " << mainPlayer.getFrustLevel() << "\n";
out_file << "     *Carmen's progress level:  " << mainCarmen.getProgress() << "\n";
out_file << "     *Total Hackers defeated:  " << mainPlayer.getHackerDefeatedCum() << "\n";
out_file << "     *Player's Computer Maintenence level:   " << playersComputer.getMaintLevel() << "\n";


out_file.close();
         sort(mainPlayer,playersComputer, bestBuyStore, mainCarmen, serverRoom);
         abort();

        }

      
        int newRandom = rand() % (100- 1 + 1) + 1;

        if (newRandom>0 && newRandom<=30)
        misfortune(mainPlayer,playersComputer,bestBuyStore,mainCarmen,serverRoom);

    
 
    //update dogecoins, maintanence level, frustation level, etc
     statusUpdate(mainPlayer,playersComputer,bestBuyStore,mainCarmen,serverRoom);


        
     bool isItOver = isGameOver(mainPlayer,playersComputer,bestBuyStore,mainCarmen,serverRoom);
     
     if (isItOver)
     abort();



    }



//Exiting current server room


if(serverRoom==5) {


if (numHackersDefeated==numHackers) {

cout << "Congratulations, YOU WON!!!!" << "\n";

break;


}



}


bool isItOver = isGameOver(mainPlayer,playersComputer,bestBuyStore,mainCarmen,serverRoom);
     
     if (isItOver)
     abort();

serverRoom++;

map.resetMap();

}






}