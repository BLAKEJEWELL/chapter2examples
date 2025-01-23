/*Program file name: chapter2examples
Programmer: Blake Jewell
Date: January 23, 2025
Requirements: 
Write a program that has the following character variables:
first, middle, and last. store your initials in these variables
then display them on screen
*/

#include <iostream>

int main()
{
	char firstinitial;
	char middleinitial;
	char lastinitial;
	std::cout << "please enter the initial of your first name";
	std::cin >> firstinitial;
	std::cout << "please enter the initial of your middle name";
	std::cin >> middleinitial;
	std::cout << "please enter the initial of your last name";
	std::cin >> lastinitial;
	std::cout << "your initials are:" << firstinitial << middleinitial << lastinitial;
}


