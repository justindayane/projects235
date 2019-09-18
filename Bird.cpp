//Title:Bird.cpp
//Author: Justin Gbadamassi
//Description: Bird implementation for Project 2
//Date: September 13th 2019

#include "Bird.hpp"

//Default Constructor for Bird using the default contructor of the base class and initializing the other data members
Bird::Bird():Animal(),airborne_(false),aquatic_(false){}

//Parameterized constructor using the parameterized constructor of the base class animal and initializing the rest of the data members
Bird::Bird(std::string name, bool domestic, bool predator):Animal(name,domestic,predator),airborne_(false),aquatic_(false){}


bool Bird::isAirborne() const
{
	return airborne_;
}

bool Bird::isAquatic() const
{
	return aquatic_;
}

void Bird::setAirborne()
{
	airborne_ = true;
}

void Bird::setAquatic()
{
	aquatic_ = true;
}