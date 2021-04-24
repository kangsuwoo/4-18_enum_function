#pragma once
class CharacterInfo
{
public:
	CharacterInfo();
	~CharacterInfo();


private:
	int m_Money;

public:
	void Print();

	int GetMoney() { return m_Money; }
	void SetMoney(int price) {
		m_Money -= price;
	}
};

