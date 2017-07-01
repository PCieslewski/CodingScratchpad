#pragma once
#include <thread>
#include <iostream>

class SyncClass {

public:
	SyncClass();
	void stop();

private:
	bool processing;
	void work();
	std::thread workerThread;

};