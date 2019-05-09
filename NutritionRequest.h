#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class NutritionRequest
{
public:
	NutritionRequest();
	~NutritionRequest();
	void AddItemToList(string addItem);
	void PrintList();

private:
	vector<string> list;
};

