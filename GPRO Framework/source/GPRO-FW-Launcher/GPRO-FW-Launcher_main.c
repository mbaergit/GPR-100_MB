// GPRO-FW-Launcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int foo(int bar)
{
	return (bar + 1);
}


int main()
{
	int test = foo(9000);

	printf("\n%d", test);
}
