//Title:Bird.hpp
//Author: Justin Gbadamassi
//Description: Bird Interface for Project 2
//Date: September 13th 2019

#ifndef BIRD_H_
#define BIRD_H_

#include "Animal.hpp"


class Bird: public Animal
{
public:
	//default constructor
	Bird();

	/**parameterized constructor
	//@param name would be the name of the bird
	//@param domestic to specify if the bird is domestic or not
	//@param predator to specify if the bird is a predator or not
	*/
	Bird(std::string name, bool domestic = false, bool predator = false);
	bool isAirborne() const;//return @param airborne_
	bool isAquatic() const;//return @param aquatic_
	void setAirborne();//set @param airborne_ to true 
	void setAquatic();//set @param aquatic_ to true

private:
	//Data members
	bool airborne_;// to specify if the Bird is airbone
	bool aquatic_;//to specify if the Bird is aquatic

};
#endif