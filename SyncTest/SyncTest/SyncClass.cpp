#include "SyncClass.h"

SyncClass::SyncClass()
{
	processing = true;
	workerThread = std::thread(&SyncClass::work, this);
}

void SyncClass::stop()
{
	processing = false;
	workerThread.join();
}

void SyncClass::work()
{
	while (processing) {
		std::cout << "Processing..." << std::endl;
		_sleep(1000);
	}
}
