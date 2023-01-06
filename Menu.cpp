#include "Helper.h"
#include "Menu.h"

int Menu::taskNumber;
Task Menu::task(0, 0, true);

void Menu::init()
{
	taskNumber = 0;
}

void Menu::update()
{
	Menu::drawMenu();
	Menu::taskSelection();

}

void Menu::drawMenu()
{
	system("cls");
	std::cout << "\nPlease, select the number of task you would like to see(1-6) or press escape to exit the program: ";
}

void Menu::taskSelection()
{
	std::cin >> taskNumber;
	Helper::isDigit(taskNumber);
	bool isInRange = Helper::inRange(1,6,taskNumber);

	if (!isInRange)
	{
		std::cout << "Please, provide a correct number of task!"; 
		_getch();
	}
	else
	{
		switch (taskNumber)
		{
			case 1:
			{
				task.taskA();
				break;
			}
			case 2:
			{
				task.taskB();
				break;
			}
			case 3:
			{
				task.taskC();
				break;
			}
			case 4:
			{
				task.taskD();
				break;
			}
			case 5:
			{
				task.taskE();
				break;
			}
			case 6:
			{
				task.taskF();
				break;
			}
			default:
				break;
		}
		std::cout << "Press any key to exit";
		_getch();
	}
}