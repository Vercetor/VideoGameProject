/*
AUTHOR: Colin Powers
DESCRIPTION: This is the test program for a game originally written by Tyler Hocket but revamped in C++ by Colin Powers


TO-DO: 
	Add Main page. COMPLETE.
	Add Castle function.
	Add fort function.
	Complete Marketplace function.
	Complete Tavern function.
	Complete Blacksmith Function.
	Add wilderness function.
	Add win function.
	Add lose function.COMPLETE. changed it to deathscreen().
	Add clear screen later. need to check all answers and text first. system("CLS");
	finish MonsterStats objects.
	finish Class.h

*/


//#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "Stats.h"

using namespace std;

// Function Prototypes
string charScreen();
int Marketplace();
void blacksmith();
void wilderness();
void castle();
void tavern();
void deathscreen();
void credits();



//*************************************************************************************************************
// Main
//*************************************************************************************************************
int main()
{
	// Variables
	int choice;
	string classType;
	string name;
	int destinationChoice;
	int choiceCountA;
	
		// Introduction
	cout << "You are approached by a Knight clad in all black armor, wielding a great sword at his side," << endl;
	cout << "and a wise looking Wizard."
	cout << "Wizard: Welcome to the perilous land of Sadricson! says the Wizard." << endl;
	cout << "My name is Sir George Hegge of the Great Northern Lands of Dah'Ko'Tah" << endl << endl;

while(choice != 1||2)
{
	cout << "Wizard: Would you like to go on an adventure? " << endl;
	cout << "Wizard: Enter 1 for Yes, or 2 for No. " << endl;
	cin >> choice;

	// Ask user if they wish to go on the adventure.
	switch (choice)
	{
	case 1: cout << "Wizard: Excellent! Let us begin our adventure!" << endl;
		cout << "Wizard: I shall acompany you on this, little journey, merely as a guide." << endl << endl;
		charScreen(); // brings user to character selection function
		break;
	case 2: cout << "Black Knight: Go home peasant!" << endl;
	   deathscreen();
		break;
	default: cout << "Black Knight: Make a valid selection or die by my sword" << endl;
	    choiceCountA++; // ticks up till 3, if they dont select the correct answer
	                    // the knight kills them.
	
	    if(choiceCountA >= 3)
    	{
	        cout << "Black Knight: You have failed to make a valid selection!" << endl << endl << endl;
	        deathscreen();
	    }// End If statement.
	}// End switch statement.

}// End while menu loop.

// Brings user to marketplace function.
// This loops the user constantly back to the market place.
// Possibly shift to if(alive)=return to marketplace.
Marketplace();

	




	return 0;
}


//**********************************************************************************
// Character Selection
//*********************************************************************************
string charScreen()
{
	string name = "null";
	int classChoice;        // number for switch statement.
	string classType;       // name of the type of class user selected.
	int choiceCountB;       // Counter to kill the user if they make too many invalid selections.

	cout << "Wizard: What is your name? " << endl;
	cin >> name;

	cout << " Wizard: What is your class " << name << "?" << endl;
	cout << "1. The Brave Knight" << endl;
	cout << "2. The Sly Bowman" << endl;
	cout << "3. The Cunning Magi" << endl;
	cout << "4. The Devious Assasin" << endl;
	cin >> classChoice;

while(classChoice != 1||2||3||4) // Looping menu till user picks their class
{
	// class selection switch statement
	switch (classChoice)
	{
	case 1: cout << "Ah! The Brave Knight! A wise choice indeed." << endl << endl;
		classType = "Brave Knight";
		return classType, name;
		break;

	case 2: cout << "Oh? The Sly Bowman! You have some skill with a bow?" << endl;
		classType = "Sly Bowman";
		return classType, name;
		break;

	case 3: cout << "The Wise and Cunning Magi? I thought there was a bit of the Arcane about you..." << endl;
		classType = "Cunning Magi";
		return classType, name;
		break;

	case 4: cout << "The Devious Assasin? Dangerous indeed..." << endl;
		classType = "Devious Assasin";
		return classType, name;
		break;

	default: cout << "Black Knight: What have I told you about making valid selections? I really don't want to kill you..." << endl;
	    choiceCountB++;
	    if(choiceCountB >=3)
	    {
	        cout << "Wizard: I keep trying to help you, but the Black Knight will not be made a fool."
	        deathscreen();
	    }
	}// End switch statement.
}// End while loop.

}


//************************************************************************************************************************
// Marketplace
//************************************************************************************************************************
int Marketplace()
{
	int destinationChoice;

	cout << "Welcome to the Marketplace!" << endl;
	cout << "What would you like to do?" << endl;
	cout << "1. Visit the Blacksmith" << endl;
	cout << "2. Visit the Tavern" << endl;
	cout << "3. Visit the Castle" << endl;
	cout << "4. Enter the Wilderness" << endl;
	cin >> destinationChoice;

	switch (destinationChoice)
	{
	case 1: cout << "Off to the 'Smithy with you!!!" << endl;
		blacksmith();
		break;

	case 2: cout << "Let's go have a drink!" << endl;
		tavern();
		break;

	case 3: cout << "Are you sure? That looks pretty dangerous..." << endl;
		castle();
		break;

	case 4: cout << "The wilderness is dark and full of dangers..." << endl;
		wilderness();
		break;

	default: cout << "Off with your head, peasant! You have made an invalid choice!" << endl;
		break;
	}

	return destinationChoice;

}


//*********************************************************************************************
// Blacksmith
//********************************************************************************************
void blacksmith()
{

	int blacksmithChoice;

	cout << "You walk into the blacksmith and see a stout dwarf covered in soot holding a hammer." << endl << endl;

	cout << "Welcome to the Hammer 'N Anvil" << endl;
	cout << "What can I do for ya?" << endl;
	cout << "1. Buy gear" << endl;
	cout << "2. Sell gear" << endl;
	cout << "3. Repair gear" << endl;
	cout << "4. Exit blacksmith" << endl;
	cin >> blacksmithChoice;

	switch (blacksmithChoice)
	{
	case 1: cout << "Here's what I got for sale" << endl;
		break;

	case 2: cout << "Let me take a look at your wares" << endl;
		break;

	case 3: cout << "You break it, I fix it" << endl;
		break;

	case 4: cout << "I didn't want your business anyways!" << endl;
		break;

	default: cout << "I don't speak elvish! Speak Human or Dwarvish.";

	}

	return;

}


//***************************************************************************************************
// Tavern
//***************************************************************************************************
void tavern()
{
	int tavernChoice;

	cout << "You walk into the Tavern. It reeks of stale beer, moldy bread and something that smells a lot like vomit..." << endl;
	cout << "You see a tall man, standing behind the bar cleaning a glass." << endl;

	cout << "Welcome to the Donkey's Arse" << endl;
	cout << "We don't like elves, we don't mind dwarves, and we despise anyone "
		<< "that doesn't know the wing speed velocity of an African Swallow." << endl;
	cout << "But that's neither here nor there." << endl;
	cout << "What can I do for you?" << endl;

	cout << "1. Have an ale" << endl;
	cout << "2. Rent a room for the night" << endl;
	cout << "3. Ask about local gossip" << endl;
	cout << "4. Start a bar fight" << endl;
	cout << "5. Exit the tavern" << endl;
	cin >> tavernChoice;

	switch (tavernChoice)
	{
	case 1: cout << "One ale for the mighty adventurer!" << endl;
		break;

	case 2: cout << "If it's accomodations you're looking for. I have the best beds." << endl;
		break;

	case 3: cout << "Well I have heard a thing or two...." << endl;
		break;

	case 4: cout << "Now thats no way to make friends" << endl;
		break;

	case 5: cout << "Good. I really didn't like the way you looked anyways!" << endl;
		break;

	default: cout << "You'll be sacrificed to the Mighty Dagon for your invalid selection!" << endl;

	}

}


//**************************************************************************************************
// Castle
//***************************************************************************************************
void castle()
{

}


//*************************************************************************************************
// Wilderness
//*************************************************************************************************
void wilderness()
{

}

//*************************************************************************************************
// Death Screen
//*************************************************************************************************
void deathscreen()
{
    cout << "You have lost." << endl << "Game over.\nPlease Try Again!" << endl;
    credits();
}

//*************************************************************************************************
// Credits
//*************************************************************************************************
void credits()
{
    cout << "Game original idea by Tyler Hocket." << endl;
    cout << "Game revamp by Colin Powers" << endl;
    cout << "This game is dedicated to my grandfather George Hegge." << endl;
    cout << "Who sadly passed away during the making of this game." << endl;
    cout << "Love you Grandpa." << endl;
    cout << "19??-2017" << endl;
    
    
    exit(0); //exits the game.
    
}




