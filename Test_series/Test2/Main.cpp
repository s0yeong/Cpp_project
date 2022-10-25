#include "CBankAccount.h"
#include <iostream>
using namespace std;

//call by reference ¹æ½Ä
bool TransferMoney(CBankAccount& sender, CBankAccount& receiver, int money) {
	if (sender.withdraw(money)) {
		receiver.deposit(money);
		return true;
	}
	else {
		cout << sender.m_strBankName << "ÀÇ °èÁÂÀÇ ÀÜ¾× ºÎÁ·À¸·Î ÀÌÃ¼°¡ ºÒ°¡´ÉÇÔ" << endl;
		return false;
	}
	
}

int main()
{
	CBankAccount pocketMoney("ÇÏ³ªÀºÇà", "010-0000-0000", 10000);
	CBankAccount savingMoney("Ä«Ä«¿À¹ðÅ©", "010-0000-0777", 0);

	pocketMoney.deposit(50000);
	TransferMoney(pocketMoney, savingMoney, 30000);
	pocketMoney.withdraw(15000);
	TransferMoney(savingMoney, pocketMoney, 100000);

	cout << "pocketMoneyÀÇ °èÁÂ Á¤º¸: " << pocketMoney.getAccountNum() << ", " << "[°èÁÂ ÀÜ¾×: " << pocketMoney.getBalance() << "]" << endl;
	cout << "savingMoneyÀÇ °èÁÂ Á¤º¸: " << savingMoney.getAccountNum() << ", " << "[°èÁÂ ÀÜ¾×: " << savingMoney.getBalance() << "]" << endl;
}