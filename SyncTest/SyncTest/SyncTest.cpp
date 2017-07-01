#include <iostream>
#include <thread>
#include "SyncClass.h"

int main()
{
	SyncClass b;

	_sleep(5000);
	b.stop();

	system("pause");
    return 0;
}

