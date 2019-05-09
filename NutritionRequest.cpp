#include "NutritionRequest.h"

NutritionRequest::NutritionRequest()
{
}

NutritionRequest::~NutritionRequest()
{
}

void NutritionRequest::AddItemToList(string addItem)
{
	list.push_back(addItem);
}

void NutritionRequest::PrintList()
{
	for (auto i = list.begin(); i != list.end(); i++)
	{
		cout << *i << endl;
	}
}