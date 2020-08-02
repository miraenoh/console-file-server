#include "stdafx.h"
#include <iostream>
#include "UserMode.h"

int UserMode::run()
{
	system("cls");

	cout << "USER MODE" << endl;
	cout << user.id << endl;

	util.closeWithInput();
	return 0;
}
