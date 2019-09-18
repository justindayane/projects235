//Title:Animal.hpp
//Author: Justin Gbadamassi
//Description: Interface for Project 1
//Date: September 5th 2019
#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <iostream>

class Animal{
public:
	//member functions

	//default constructor
	Animal();

	/**parameterized constructor
	//@param name would be the name of the animal 
	//@param domestic to specify if the animal is domestic or not
	//@param predator to specify if the animal is a predator or not
	*/
	Animal(std::string name, bool domestic = false, bool predator = false);
	std::string getName() const;
	bool isDomestic() const;
	bool isPredator() const;
	void setName(std::string name);
	void setDomestic();
	void setPredator();

protected:
	//Data members
	std::string name_;
	bool domestic_;
	bool predator_;
};

#endif