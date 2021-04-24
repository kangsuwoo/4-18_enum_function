#pragma once

struct Coffee
{
public:
	Coffee()
		:m_Price(1000)
	{ }
private:
	int m_Price;
public:
	int CoffeePrice() { return m_Price; }
};
struct MountainDew
{
public:
	MountainDew()
		:m_Price(1500)
	{ }
private:
	int m_Price;
public:
	int nPrice() { return m_Price; }
};
struct Coke
{
public:
	Coke()
		:m_Price(2000)
	{ }
private:
	int m_Price;
public:
	int nPrice() { return m_Price; }
};