#pragma once
class Bankomat
{
	int SumMoney = 0;
	int MinValue;
	int MaxValue;
	int bills[6] = { 50, 100, 200, 500, 1000 };
	int SumClient;
	char* Identificator;
	char* SumToString;
public:
	Bankomat();
	Bankomat(int SumClient);
	~Bankomat();
	void InputMoney();
	void InputMoneyClient();
	void Print();
	bool Check();
	void Counting();
	void SetMoneyClient(int SumClient);
	int GetMoneyClient();
	void SetMoneyInBankomat(int SumMoney);
	int GetMoneyInBankomat();
	void SetMinValue(int MinValue);
	int GetMinValue();
	void SetMaxValue(int MaxValue);
	int GetMaxValue();
	void ToString();

};

