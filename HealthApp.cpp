// HealthApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "NutritionRequest.h"
#include "FruitSelection.h"
#include "VegetableSelection.h"
#include <iostream>
#include <string>
using namespace std;

void displayMenu()
{
	cout << "Main Menu" << endl;
	cout << "1) Build nutrition list" << endl;
	cout << "2) View nutrition list" << endl;
	cout << "3) Add Fruit" << endl;
	cout << "4) Add Vegetables" << endl;
	cout << "5) Exit" << endl;
}

int main()
{
	int userSelection;
	string input = "";
	NutritionRequest request;
	FruitSelection fruit;
	VegetableSelection vegetable;
	bool nutritionRequestCompleted = false;
	vector<string> nutritionList;

	cout << "Welcome to the Nutritionst!" << endl;
	displayMenu();

	cin >> userSelection;

	while (userSelection != 5)
	{
		switch (userSelection)
		{
		case 1:
			request.AddItemToList();
			nutritionRequestCompleted = true;
			break;
		case 2:
			request.PrintList();
			break;
		case 3:
			if (nutritionRequestCompleted)
			{
				vector<string> addToList = fruit.GetRequestedFruits(request.getList());
				nutritionList.reserve(nutritionList.size() + addToList.size());
				nutritionList.insert(nutritionList.end(), addToList.begin(), addToList.end());
			}
			break;
		case 4:
			if (nutritionRequestCompleted)
			{
				vector<string> addToList = vegetable.GetRequestedVegetables(request.getList());
				nutritionList.reserve(nutritionList.size() + addToList.size());
				nutritionList.insert(nutritionList.end(), addToList.begin(), addToList.end());
			}
			break;
		default:
			cout << "Invalid value! Please try again." << endl;
			break;
		}
		displayMenu();

		cin >> userSelection;
	}
	cout << "Thank you for using the Nutritionst! Here is your recommended nutrition list:" << endl;
	for (auto i = nutritionList.begin(); i != nutritionList.end(); i++)
	{
		cout << *i << endl;
	}
	//request.~NutritionRequest();
	//fruit.~FruitSelection();
	//vegetable.~VegetableSelection();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file