// hw_15-3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Задание 3. Написать функцию, которая вставляет в строку 
// в указанную позицию заданный символ.

#include <iostream>
#include<string>
using namespace std;

void inputStr(char* mes)
{

	cout << "Enter string ";
	cin >> mes;
}

void inputPos(int& pos)
{
	cout << endl;
	cout << "Enter string position, that must be inserted ";
	cin >> pos;
	pos--;
}

void inputSym(char& sym)
{
	cout << endl;
	cout << "Enter symbol, that must be insert ";
	cin >> sym;
}
void outputStr(char* mes)
{
	cout << mes;
}

void func(char* mes, char sym, int pos, char* mes_new)
{
	int k = 0;
	for (size_t i = 0; i < strlen(mes); i++)
	{
		if (i == pos) { mes_new[k] = sym; k++; };
		mes_new[k] = mes[i];
		k++;
	}
	mes_new[k] = '\0';
}

int main()
{
	char sym;
	int pos;
	char* pmes = new char;
	char* pmes_new = new char;
	inputStr(pmes);
	inputSym(sym);
	inputPos(pos);
	func(pmes, sym, pos, pmes_new);
	outputStr(pmes_new);
}