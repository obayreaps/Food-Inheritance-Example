#include "Food.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string name, origin;
    int rankingHealthiness;
    char typeOfFood;
    bool isFastFood, isSweet, isWholeFood;
    
    cout << "Name of the food: ";
    cin >> name;
    
    cout << "Origin of the food: ";
    cin >> origin;
    
    cout << "On a scale of 1-10, how healthy is your food choice: ";
    cin >> rankingHealthiness;
    
    cout << "What type of food is this? (F for fast food, W for whole food, S for sweets): ";
    cin >> typeOfFood;
    
    if (typeOfFood == 'F')
    {
        cout << "Confirm its fastfood: (1 for yes, or 0 for no) ";
        cin >> isFastFood;
        FastFood fastfood(name, origin, rankingHealthiness, isFastFood);
        fastfood.displayInfo();
    }
    else if (typeOfFood == 'W')
    {
        cout << "Is it a fruit or vegetable? (Type 1 for fruit, or 0 for vegetable) ";
        cin >> isWholeFood;
        WholeFood wholefood(name, origin, rankingHealthiness, isWholeFood);
        wholefood.displayInfo();
    }
    else if (typeOfFood == 'S')
    {
        cout << "Confirm it's sweets: (1 for yes, or 0 for no) ";
        cin >> isSweet;
        Sweets issweet(name, origin, rankingHealthiness, isSweet);
        issweet.displayInfo();
    }
    else
    
    return 0;
}