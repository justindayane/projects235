//Title:Mammal.cpp
//Author: Justin Gbadamassi
//Description: Mammal implementation for Project 2
//Date: September 13th 2019

#include "Mammal.hpp"
#include <iostream>

//Default Constructor for Bird not using the default contructor of the base class instead initializing all the data members
Mammal::Mammal()
{
	name_="";
	domestic_=false;
	predator_=false;
	hair_=false;
	airborne_=false;
	aquatic_=false;
	toothed_=false;
	fins_=false;
	tail_=false;
	legs_=0;
}

//Parameterized constructor not using the parameterized constructor of the base class animal but instead initializing all the data members
Mammal::Mammal(std::string name, bool domestic, bool predator)
{
	name_=name;
	domestic_ = domestic;
	predator_ = predator;
	hair_=false;
	airborne_=false;
	aquatic_=false;
	toothed_=false;
	fins_=false;
	tail_=false;
	legs_=0;
}
bool Mammal::hasHair() const
{
	return hair_;
}

bool Mammal::isAirborne() const
{
	return airborne_;
}

bool Mammal::isAquatic() const
{
	return aquatic_;
}

bool Mammal::isToothed() const
{
	return toothed_;
}

bool Mammal::hasFins() const
{
	return fins_;
}
	
bool Mammal::hasTail() const
{
	return tail_;
}

int Mammal::legs() const
{
	return legs_;
}

void Mammal::setHair()
{
	hair_ = true;
}

void Mammal::setAirBorne()
{
	airborne_ = true;
}
void Mammal::setAquatic()
{
	aquatic_ = true;
}

void Mammal::setToothed()
{
	toothed_ = true;
}

void Mammal::setFins()
{
	fins_ = true;
}

void Mammal::setTail()
{
	tail_ = true;
}

void Mammal::setLegs(int legs)
{
	legs_=legs;
}
