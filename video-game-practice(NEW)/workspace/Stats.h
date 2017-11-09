#pragma once
#ifndef CLASS_H
#define CLASS_H

//#include "stdafx.h"
#include <string>
using namespace std;




// Define the classes here and give them base stats.

//****************************************************
class Knight
{

private:
	int health = 200;
	int damage = 150;

public:

};

//***************************************************
class Bowman
{

private:
	int health = 150;
	int damage = 175;

public:

};

//********************************************************
class Magi
{

private:
	int  health = 100;
	int damage = 200;

public:

};

//*********************************************************
class Assasin
{

private:
	int health = 150;
	int damage = 175;

public:

};










// define monsters here and give them base stats
//****************************************************
class Goblin
{
private:
	int goblinDamage = 50;
	int goblingHealth = 100;
};


//***************************************************
class Troll
{
private:
	int trollDamage = 100;
	int trollHealth = 500;


};


//****************************************************
class Theif
{
private:
	int theifDamage = 80;
	int theifHealth = 100;


};


//****************************************************
class Dragon
{
private:
	int dragonDamage = 150;
	int dragonHealth = 800;
};


//****************************************************
// Define player gold here
class Gold
{
private:
	int playerGold = 0;

public:
	int getPlayerGold;
	int setPlayerGold;
};

#endif // !CLASS_H