#include "Bankomat.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
Bankomat::Bankomat()
{
	srand(time(0));
	if (this->SumMoney == 0)
	{
		this->SumMoney = rand() % 10000;
	}
	this->MinValue = 100;
	this->MaxValue = 100000;
	this->SumClient = 0;
	this->Identificator = nullptr;
}

Bankomat::Bankomat(int SumClient)
{
	srand(time(0));
	this->SumMoney = rand() % 100000;
	this->MinValue = 100;
	this->MaxValue = 10000;
	this->SumClient = SumClient;
	this->Identificator[10];
	for (size_t i = 0; i < 9; i++)
	{
		this->Identificator[i] = rand() % 50;
	}	
	this->Identificator[9] = '\0';
}

Bankomat::~Bankomat()
{
	delete[]this->Identificator;
	this->Identificator = nullptr;
}

void Bankomat::InputMoney()
{
	int money;
	cout << "Money in bankomat:" << this->SumMoney << endl;
	cout << "You can put only 10000$ in a day, and not less than 100$" << endl;
	cout << "Put some money: ";
	cin >> money;
	cout << endl;
	while (this->SumMoney + money > 9999 || this->SumMoney + money < 100 )
	{
		cout << "You can put only 10000$, and not less than 100$" << endl;
		cout << "Put some money: ";
		cin >> money;
		cout << endl;
	}
	this->SumMoney += money;
}

void Bankomat::InputMoneyClient()
{
	this->Identificator = new char[10];
	for (size_t i = 0; i < 9; i++)
	{
		this->Identificator[i] = 30 + rand() % 60;
	}
	this->Identificator[9] = '\0';
	cout << "Enter your sum: ";
	cin >> this->SumClient;
}

void Bankomat::Print()
{
	cout << "Sum in bankomat: " << this->SumMoney << endl;
	cout << "Sum in client: " << this->SumClient << endl;
	cout << "Maximum value: " << this->MaxValue << endl;
	cout << "Minimum value: " << this->MinValue << endl;
	cout << "Identificator: " << this->Identificator << endl;
}

bool Bankomat::Check()
{
	if (this->SumClient < this->MinValue || this->SumClient > this->MaxValue)
	{
		return false;
	}
	else if (this->SumClient % 10 == 1)
	{
		return false;
	}
	else if (this->SumClient % 10 == 0 && this->SumClient > this->SumMoney )
	{
		return false;
	}
	else
	{ 
		return true;
		}
}

void Bankomat::Counting()
{
	for (int i = 4; i >= 0; i--)
	{
		if (this->SumClient - this->bills[i] >= 0)
		{
			cout << "You will got: " << this->bills[i] << endl;
			this->SumClient -= this->bills[i];
			this->SumMoney -= this->bills[i];
			i++;
		}
	}
}

void Bankomat::SetMoneyClient(int SumClient)
{
	this->SumClient = SumClient;
}

int Bankomat::GetMoneyClient()
{
	return 0;
}

void Bankomat::SetMoneyInBankomat(int SumMoney)
{
	this->SumMoney = SumMoney;
}

int Bankomat::GetMoneyInBankomat()
{
	return 0;
}

void Bankomat::SetMinValue(int MinValue)
{
	this->MinValue=MinValue;
}

int Bankomat::GetMinValue()
{
	return 0;
}

void Bankomat::SetMaxValue(int MaxValue)
{
	this->MaxValue = MaxValue;
}

int Bankomat::GetMaxValue()
{
	return 0;
}

void Bankomat::ToString()
{
	this->SumToString = new char[20];
	_itoa_s(this->SumMoney,this->SumToString, 19, 10);
	cout << "Sum client in string: " << SumToString;
}

