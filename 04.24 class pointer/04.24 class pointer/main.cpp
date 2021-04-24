#include "pch.h"
#include "character/Character.h"

int Add(int x, int y);
void Add(int* x, int number);
void Minus(int* m, int number);

int main()
{
	
	// 디버깅 시작은 F5
	// 중단점 F9

	// 디버깅 실행 상태에서
	// 한 라인씩 코드 실행 F10, 해당 라인 안까지 F11
	//Character c;
	//cout << " 클래스 생성!" << endl;
	

	// pointer
	// 2. 숙제 (알아오기)
	// Heap, stack 메모리 알아보기
	// C++ new, delete 알아보기 (alloc, free "C 메모리 할당 방법"(X))
	
	int value = 0;

	int* pValue = &value;

	Add(pValue, 10);

	Minus(pValue, 6);
	
	c.Print();

	return 0;
}

int Add(int x, int y) { return x + y; }
void Add(int* x, int number) 
{ 
	// int* -> int 형식 주소값
	// *int -> int 형식의 주소값을 값으로 변경 (치환한다)
	(*x) += number; 

}
void Minus(int* m, int number)
{
	(*m) -= number;

}
