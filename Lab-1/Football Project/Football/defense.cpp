/*
 * This is the implementation file for the defensive player class for CSC 4111 Lab 1 Task 2
 * It is part of the solution to Lab 1
 *
 * @Author C. Dorman
 */

#include "Defense.h"

/*
 * This is the constructor for the defensive class.
 * All it does is call the base constructor.
 * @param The player's name.
 */
Defense::Defense(string name) : Player(name){

}

/*
 * This is the implementation for the pure virtual method.
 * It sets the defensive player's minutes.  It should be in the base class,
 * because there is nothing specific to an defensive player.
 * @param the number of minutes the player was in the game.
 */
void Defense::setMinutesPlayed(int minutes){
	this->minutes = minutes;
}

/*
 * This method sets the defensive player's tackles.
 * @param the number of yards the player had.
 */
void Defense::setTackles(int tackles){
	this->tackles = tackles;
}

/*
 * This is a method to print out a players stats, it overrides, but then calls 
 * the base class method to print the private attribute name.
 */
void Defense::printStats() const{
	Player::printStats();
	cout << "\tMinutes: " << minutes << "\tTackles: " << tackles << endl;
}