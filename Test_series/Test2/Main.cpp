#include "CBankAccount.h"
#include <iostream>
using namespace std;

//call by reference ���
bool TransferMoney(CBankAccount& sender, CBankAccount& receiver, int money) {
	if (sender.withdraw(money)) {
		receiver.deposit(money);
		return true;
	}
	else {
		cout << sender.m_strBankName << "�� ������ �ܾ� �������� ��ü�� �Ұ�����" << endl;
		return false;
	}
	
}

int main()
{
	CBankAccount pocketMoney("�ϳ�����", "010-0000-0000", 10000);
	CBankAccount savingMoney("īī����ũ", "010-0000-0777", 0);

	pocketMoney.deposit(50000);
	TransferMoney(pocketMoney, savingMoney, 30000);
	pocketMoney.withdraw(15000);
	TransferMoney(savingMoney, pocketMoney, 100000);

	cout << "pocketMoney�� ���� ����: " << pocketMoney.getAccountNum() << ", " << "[���� �ܾ�: " << pocketMoney.getBalance() << "]" << endl;
	cout << "savingMoney�� ���� ����: " << savingMoney.getAccountNum() << ", " << "[���� �ܾ�: " << savingMoney.getBalance() << "]" << endl;
}