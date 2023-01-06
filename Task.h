#pragma once

#include <iostream>
#include <conio.h>

class Task
{
public:
	Task(int size, int border, bool isSecond) :
		size(size),
		border(border),
		isSecond(isSecond) 
		{};

	void setTable(int* size);
	void taskA();
	void taskB();
	void taskC();
	void taskD();
	void taskE();
	void taskF();

	int getSize() { return size; }
	int getBorder() { return border; }
	bool getSecond() { return isSecond; }

	void setSize(int value) { size = value; }
	void setBorder(int value) { border = value; }
	void setSecond(int value) { isSecond = value; }

private:
	int size = 0;
	int border = 0;
	bool isSecond = true;
};