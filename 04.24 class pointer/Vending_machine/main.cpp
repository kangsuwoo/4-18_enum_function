#include <iostream>
#include <Windows.h>
#include "Character/Product.h"
#include "Character/CharacterInfo.h"

using namespace std;

int main()
{
	CharacterInfo c;
	Coffee resbi;
	MountainDew kka;
	Coke kya;

	int nselect;
	bool isPlaying = true;

	cout << " 나 : 어후 목말라";
	for (int i = 0; i < 3; i++)
	{
		Sleep(1000);
		cout << ". ";
	}
	cout << endl;

	Sleep(1000);
	cout << " 나 : 어, 저기 자판기다 " << endl;
	Sleep(2000);
	cout << " 나 : 뭐 좀 마실까? " << endl;
	Sleep(2000);

	while (isPlaying)
	{
		system("cls");

		cout << " 내 잔고 : " << c.GetMoney() << endl;
		cout << "            자판기            " << endl;
		cout << " ================================" << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << "|\t\t\t\t|" << endl;

			if (i == 1)
			{
				cout << "|\t" << " 레스비 :" << resbi.CoffeePrice() << " 원 " << "\t|" << endl;
			}
			if (i == 4)
			{
				cout << "|\t" << " 마운틴 듀 : " << kka.nPrice() << " 원 " << "\t|" << endl;
			}
			if (i == 7)
			{
				cout << "|\t" << " 코카 콜라 :" << kya.nPrice() << " 원 " << "\t|" << endl;
			}
		}
		cout << " ================================" << endl;

		cout << " 나 : 뭐 마실까? ( 1. 커피 , 2. 마운틴듀 , 3.콜라 : ";
		cin >> nselect;

		if (nselect == 1)
		{
			int choice;

			c.SetMoney(resbi.CoffeePrice());
			 if (c.GetMoney() < resbi.CoffeePrice())
			 {
				 cout << " 자판기 : 돈이 부족합니다." << endl;
			 }

			cout << " 나 : 으음... 레스비의 고소함 정말 최고다 " << endl;
			Sleep(2000);
			cout << " 나 : 더 마실까? ( 0. 다른걸 마신다 , 1. 그만 마신다 ";
			cin >> choice;

			 if (choice == 1)
			{
				isPlaying = false;
			}
		}
		else if (nselect == 2)
		{
			int choice;

			c.SetMoney(kka.nPrice());
			 if (c.GetMoney() < kka.nPrice())
			 {
				 cout << " 자판기 : 돈이 부족합니다." << endl;
			 }

			cout << " 나 : 키야... 이 사이다 같으면서도 사이다가 아닌 맛! " << endl;
			Sleep(2000);
			cout << " 나 : 더 마실까? ( 0. 다른걸 마신다 , 1. 그만 마신다 ";
			cin >> choice;

			 if (choice == 1)
			{
				isPlaying = false;
			
			}
		}
		else if (nselect == 3)
		{
			int choice;
			c.SetMoney(kya.nPrice());
			if (c.GetMoney() < kya.nPrice())
			{
				cout << " 자판기 : 돈이 부족합니다." << endl;
			}

			cout << " 나 : 으아... 역시 코카 콜라지.. " << endl;
			Sleep(2000);
			cout << " 나 : 더 마실까? ( 0. 다른걸 마신다 , 1. 그만 마신다 ";
			cin >> choice;
			if (choice == 1)
			{
				isPlaying = false;
			}
		}
	}

	return 0;
}
