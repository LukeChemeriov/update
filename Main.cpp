/////////////////
// Update Tool //
/////////////////
// A simple updating tool

// Pre-processors
#include <iostream>
#define NZ_KILL_CURRENT_FUNCTION(x) return x;

void Update()
{
	try{
		std::cout << "Welcome to update tool!" << std::endl;
		std::cout << "==============================\n\n" << std::endl;
		std::cout << "Updating... ";
		system("sudo apt-get update -y > /dev/null");
		std::cout << "done" << std::endl;
		std::cout << "Upgrading... ";
		system("sudo apt-get upgrade -y > /dev/null");
		system("sudo apt-get dist-upgrade -y > /dev/null");
		std::cout << "done" << std::endl;
		std::cout << "Cleaning up... ";
		system("sudo apt-get dist-upgrade -y > /dev/null");
		system("sleep 6");
		std::cout << "done" << std::endl;
		NZ_KILL_CURRENT_FUNCTION()
	}
	catch (...)
	{
		std::cout << "ERROR!" << std::endl;
		NZ_KILL_CURRENT_FUNCTION()
	}
}



int main(int argc, char const *argv[])
{
	Update();
	NZ_KILL_CURRENT_FUNCTION(0)
}