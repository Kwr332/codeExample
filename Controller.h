#pragma once

#include "Menu.h"

class Controller
{
public:
	static void init();
	static void update();

private:
	static Menu menu;
	static Task task;

};
