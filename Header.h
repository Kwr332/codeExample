#pragma once

#include <iostream>

class zadanie
{
public:
	zadanie(int size, int border, bool isSecond) :
		size(size),
		border(border),
		isSecond(isSecond) 
		{};

	void setTable(int* size);
	void zadanieA();
	void zadanieB();
	void zadanieC();
	void zadanieD();
	void zadanieE();
	void zadanieF();

	int getSize() { return size; }
	int getBorder() { return border; }
	bool getSecond() { return isSecond; }

	void setSize(int value) { size = value; }
	void setBorder(int value) { border = value; }
	void setSecond(int value) { isSecond = value; }


protected:

private:
	int size = 0;
	int border = 0;
	bool isSecond = true;

};