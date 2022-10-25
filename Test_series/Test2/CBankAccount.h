#ifndef CBANKACCOUNT_H
#define CBANKACCOUNT_H

#include <string>
using namespace std;

class CBankAccount {
	int m_nBalance;
	string m_strAccountNum;
public:
	string m_strBankName;
	int deposit(int nMoney);
	bool withdraw(int nMoney);
	CBankAccount();
	CBankAccount(string strBankName, string strAccountNum, int nBalance);
	string getAccountNum();
	int getBalance();
};

#endif // !CBANKACCOUNT_H