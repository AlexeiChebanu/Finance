#pragma once
#include <string>

using namespace std;
//описание класса карт и кошельков
class Card
{
private:
	string name;
	int balance;
	bool iscredit;
public:
	Card(string name, int balance, bool isCredit);
	void updateBalance(int balance);
	string getName();
	int getBalance();
	bool isCredit();
	string toString();
};

