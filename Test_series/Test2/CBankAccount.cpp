#include "CBankAccount.h"
#include <string>
using namespace std;

int CBankAccount::deposit(int nMoney) {
	m_nBalance += nMoney;
	return m_nBalance;
}

bool CBankAccount::withdraw(int nMoney) {
	if (m_nBalance < nMoney) { return false;}
	else {
		m_nBalance -= nMoney;
		return true;
	}
}

CBankAccount::CBankAccount() {
	m_nBalance = 0;
	m_strAccountNum = string("");
	m_strBankName = string("");
}

CBankAccount::CBankAccount(string strBankName, string strAccountNum, int nBalance) {
	m_nBalance = nBalance;
	m_strAccountNum = strAccountNum;
	m_strBankName = strBankName;
}

string CBankAccount::getAccountNum() {
	return m_strAccountNum;
}

int CBankAccount::getBalance() {
	return m_nBalance;
}