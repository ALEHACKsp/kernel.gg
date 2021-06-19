#include <iostream>
#include "kernelinterface.hpp"

int main()
{
	KernelInterface Driver = KernelInterface("\\\\.\\kernelgg");

	ULONG address = Driver.GetClientAddress();

	std::cout << " ClientAdress:  " << address << std::endl;

	std::cout << "Seja bem-vindo ao Kernel.gg!\n";

	while (true)
	{

	}
}
