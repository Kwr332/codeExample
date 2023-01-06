#include "Controller.h"

int main()
{
	Controller::init();
	
	while (true)
	{
		Controller::update();
	}
	return 0;
}