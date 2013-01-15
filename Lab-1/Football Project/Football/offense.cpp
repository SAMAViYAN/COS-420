/*
 * This is the implementation file for the offensive player class for CSC 4111 Lab 1 Task 2
 * It is part of the solution to Lab 1
 *
 * @Author C. Dorman
 */

#include "Offense.h"

/*
 * This is the constructor for the offensive class.
 * All it does is call the base constructor.
 * @param The player's name.
 */
Offense::Offense(string name) : Player(name){

}

/*
 * This is the implementation for the pure virtual method.
 * It sets the offensive player's minutes.  It should be in the base class,
 * because there is nothing specific to an offensive player.
 * @param the number of minutes the player was in the game.
 */
void Offense::setMinutesPlayed(int minutes){
	this->minutes = minutes;
}

/*
 * This method sets the offensive player's yards.
 * @param the number of yards the player had.
 */
void Offense::setYards(int yards){
	this->yards = yards;
}

/*
 * This is a method to print out a players stats, it overrides, but then calls 
 * the base class method to print the private attribute name.
 */
void Offense::printStats() const{
	Player::printStats();
	cout << "\tMinutes: " << minutes << "\tYards: " << yards << endl;
}