#pragma once

#include "Task.h"

class Menu
{
public:
	static void init();
	static void update();

	static void drawMenu();
	static void taskSelection();

private:
	static Task task;

	static int taskNumber;
};

