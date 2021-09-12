#include <iostream>
#include "Choose.h"
#include "Bankomat.h"
using namespace std;

int main()
{
    Bankomat first;
    while (Choose() == true)
    {
        first.InputMoney();
    }
    first.InputMoneyClient();
    first.Print();
    if (first.Check() == true)
    {
        cout << "Bankomat will give you money." << endl;
        first.Counting();
    }
    else
    {
        cout << "Your sum is wrong!" << endl;
    }
    first.ToString();
   
}
