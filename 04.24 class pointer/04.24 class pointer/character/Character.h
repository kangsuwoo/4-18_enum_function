#pragma once


// 클래스!
// class, struct 둘 다 접근 제한자 라는 것이 존재한다
// 접근 제한자의 종류는 3가지

// 접근 유무		| private | protected | public
//  자신			|    O    |		O	  |    O
//  자식		    |    X    |		O	  |    O
//  외부			|    X    |		X	  |    O

// class 의 기본 접근 제한자는 private: 이다
// struct 의 기본 접근 제한자는 public: 이다
class Character
{
public: // Ctrl + . 눌러서 확인
	
	Character();	// 생성자	:  클래스가 선언함과 동시에 단 한 번만 호출됨
	~Character();	// 소멸자    :  클래스가 삭제됨과 동시에 단 한 번만 호출됨

private:
	int money;

public:
	int GetMoney() { return money; } //Getter
	void SetMoney(int money) {this->money = money; } //Setter

	void Print();
};

