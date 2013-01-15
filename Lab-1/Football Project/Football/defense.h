/*
 * This is the header file for the defensive player class for CSC 4111 Lab 1 Task 2
 * It is part of the solution to Lab 1
 *
 * @Author C. Dorman
 */

#ifndef DEFENSE_H
#define DEFENSE_H

#include "player.h"

using namespace std;

class Defense : public Player{
public:

	/*
	 * This is the constructor for the defensive class.
	 * All it does is call the base constructor.
	 * @param The player's name.
	 */
	Defense(string name);

	/*
	 * This is the implementation for the pure virtual method.
	 * It sets the defensive player's minutes.  It should be in the base class,
	 * because there is nothing specific to an defensive player.
	 * @param the number of minutes the player was in the game.
	 */
	virtual void setMinutesPlayed(int minutes);

	/*
	 * This method sets the defensive player's tackles.
	 * @param the number of yards the player had.
	 */
	void setTackles(int tackles);

	/*
	 * This is a method to print out a players stats, it overrides, but then calls 
	 * the base class method to print the private attribute name.
	 */
	virtual void printStats() const;

private:
	/* The number of tackles the player had */
	int tackles;

};

#endif