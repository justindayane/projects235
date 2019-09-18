//Title:Fish.hpp
//Author: Justin Gbadamassi
//Description: Fish Interface for Project 2
//Date: September 13th 2019

#ifndef FISH_H_
#define FISH_H_

#include <iostream>
#include "Animal.hpp"

class Fish: public Animal
{
public:
	//default constructor
	Fish();
	/**parameterized constructor
	//@param name would be the name of the Fish
	//@param domestic to specify if the fish is domestic or not
	//@param predator to specify if the fish is a predator or not
	*/
	Fish(std::string name, bool domestic = false, bool predator = false);
	bool isVenomous() const;// return @param isVenomous
	void setVenomous();//set @param venomous_ to true

private:
	//data member
	bool venomous_;//to specify if the fish is venomous or not
};
#endif