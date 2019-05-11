#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class FruitSelection
{
public:
	FruitSelection();
	~FruitSelection();
	vector<string> GetRequestedFruits(vector<string> list);

private:
	map<string, string> fruitMap;
	vector<string> nutritionFruits;
};