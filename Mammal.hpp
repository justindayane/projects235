//Title:Mammal.hpp
//Author: Justin Gbadamassi
//Description: Mammal Interface for Project 2
//Date: September 13th 2019

#ifndef MAMMAL_H_
#define MAMMAL_H_

#include <iostream>
#include "Animal.hpp"

class Mammal: public Animal
{
public:

	//default constructor
	Mammal();

	/**parameterized constructor
	//@param name would be the name of the mammal 
	//@param domestic to specify if the mammal is domestic or not
	//@param predator to specify if the mammal is a predator or not
	*/
	Mammal(std::string name, bool domestic = false, bool predator = false);
	bool hasHair() const;//return @param hair_
	bool isAirborne() const;//return @param airborne_
	bool isAquatic() const;//return @param aquatic_
	bool isToothed() const;//return @param toothed_
	bool hasFins() const;//return @param fins_
	bool hasTail() const;//return @param tail_
	int legs() const;//return @param legs_
	void setHair();//set @param hair_ to true
	void setAirBorne();//set @aparam airborne_ to true
	void setAquatic();//set @param aquatic_ to true
	void setToothed();//set @param toothed_ to true
	void setFins();//set @param fins_ to true
	void setTail();//set @param trail_ to true
	void setLegs(int legs);//set @param legs_ to legs

private:
	//data members
	bool hair_;//this parameter is to specify if the mammal is hairy or not
	bool airborne_;//to specify is the mammal is airborne or not
	bool aquatic_;//to specify if the mammal is aquactic or not
	bool toothed_;//to specify if the mammal is toothed ot not
	bool fins_;// to specify is the mammal has fins or not
	bool tail_;//to specify is the mammal has a tail or not
	int legs_;// to specify how many legs the mammal has

};
#endif