#include "FruitSelection.h"

FruitSelection::FruitSelection()
{
	fruitMap.insert(pair<string, string>("Eye Health", "Oranges"));
	fruitMap.insert(pair<string, string>("Hair Growth", "Bananas"));
	fruitMap.insert(pair<string, string>("Teeth and Gums", "Apples"));
	fruitMap.insert(pair<string, string>("Skin", "Kiwi"));
	fruitMap.insert(pair<string, string>("Weight Loss", "Grapefruit"));
	fruitMap.insert(pair<string, string>("Digestion", "Apples"));
	fruitMap.insert(pair<string, string>("Post Surgery", "Grapes"));
	fruitMap.insert(pair<string, string>("Good Sleep", "Kiwi"));
	fruitMap.insert(pair<string, string>("Blood Flow", "Pomegranate"));
	fruitMap.insert(pair<string, string>("Healthy Heart", "Avocados"));
}


FruitSelection::~FruitSelection()
{
}

vector<string> FruitSelection::GetRequestedFruits(vector<string> list)
{
	for (auto i = list.begin(); i != list.end(); i++)
	{
		if (fruitMap.find(*i) != fruitMap.end())
			nutritionFruits.push_back(fruitMap.at(*i));
	}
	return nutritionFruits;
}