//Title:Animal.cpp
//Author: Justin Gbadamassi
//Description: Implementation for Project 1
//Date: September 5th 2019

#include "Animal.hpp"
Animal::Animal()
{
	name_ = "";
	domestic_ = false;
	predator_ = false;
}


Animal::Animal(std::string name, bool domestic, bool predator)
{
	name_ = name;
	domestic_ = domestic;
	predator_ = predator;
}

std::string Animal::getName() const{// accessor, returns the name of the animal
	return name_;
}

bool Animal::isDomestic() const{
	return domestic_;
}

bool Animal::isPredator() const{
	return predator_;
}

void Animal::setName(std::string name){
	name_ = name;
}

void Animal::setDomestic(){// to make an animal a domestic one
	domestic_ = true;
}

void Animal::setPredator(){// to make an animal a predator
	predator_ = true;
}