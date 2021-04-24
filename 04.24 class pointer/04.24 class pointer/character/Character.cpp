#include "Character.h"
#include <iostream>

using namespace std;

Character::Character()
	: money(0) // 생성자 초기화
{
	money = 0; // 함수 초기화
	cout << " 생성자!" << endl;
}

Character::~Character()
{
	cout << " 소멸자!" << endl;
}

void Character::Print()
{
	cout <<" 비자금 :" << money << endl;
}
