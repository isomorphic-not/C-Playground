// ConsoleCommonTasks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "LinearF.h"
#include "DataF.h"
#include "HomeF.h"
#include "EmailF.h"

int main()
{
	int choice;

	do {
		callMenu();
		std::cout << "Welcome! Please choose a valid option(integer only):";
		std::cin >> choice;

		switch (choice) {
		case 1: std::cout << "\nchoice " << choice << " chosen\n\n"; break;
		case 2: std::cout << "\nchoice " << choice << " chosen\n\n"; break;
		case 3: std::cout << "\nchoice " << choice << " chosen\n\n"; break;
		case 4: std::cout << "\nchoice " << choice << " chosen\n\n"; callLinear(); break;
		case 5: std::cout << "\nchoice " << choice << " chosen\n\n"; callData();  break;
		case 6: std::cout << "\nchoice " << choice << " chosen\n\n"; break;
		case 7: std::cout << "\nchoice " << choice << " chosen\n\n"; break;
		case 8: std::cout << "\nchoice " << choice << " chosen\n\n"; break;
		case 123: system("CLS"); break;
		}

	} while (choice != 0);

	std::cout << "\nbye!\n\n";
}