#include "Animal.hpp"
#include "Mammal.hpp"
#include "Bird.hpp"
#include "Fish.hpp"

int main()
{
	Animal obj("love");

	std::cout << obj.getName()<<std::endl;
	Mammal mam("mammal1");
	//mam.setPredator();
	std::cout<<mam.getName()<<mam.isPredator()<<std::endl;

	return 0;
}