//Title:Fish.cpp
//Author: Justin Gbadamassi
//Description: Fish implementation for Project 2
//Date: September 13th 2019

#include "Fish.hpp"
#include <iostream>

//Default Constructor for Fish using the default contructor of the base class and initializing the other data members
Fish::Fish(): Animal(),venomous_(0){}

//Parameterized constructor using the parameterized constructor of the base class animal and initializing the rest of the data members
Fish::Fish(std::string name, bool domestic, bool predator):Animal(name,domestic,predator),venomous_(0){}


bool Fish::isVenomous() const
{
	return venomous_;
}

void Fish::setVenomous()
{
	venomous_ = true;
}