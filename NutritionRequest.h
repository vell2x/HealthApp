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
	void AddItemToList();
	void PrintList();
	vector<string> getList();

private:
	vector<string> list;
};

