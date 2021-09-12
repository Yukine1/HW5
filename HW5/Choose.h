#pragma once
#include <iostream>
using namespace std;

bool Choose()
{
    int choose;
    cout << "You are bankomat or client? 1-Bankomat, 2-Client: ";
    cin >> choose;
    while (choose < 1 || choose > 2)
    {
        cout << "You are bankomat or client? 1-Bankomat, 2-Client: ";
        cin >> choose;
    }
    if (choose == 1)
    {
        return true;
    }
    if (choose == 2)
        return false;
}