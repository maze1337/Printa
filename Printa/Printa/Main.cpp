#include <iostream>
#include <Windows.h>
#include "Printa.h"






int main()
{
	//title stuff
	SetConsoleTitleA("Hacc");
	Printa.Title("Printa 2.0");
	
	//main point of project
	Printa.OK("Hello World");
	Printa.Input("Input");
	Printa.Loading("Loading...");
	Printa.Fail("Error!");

	// used for input
	Printa.Arrow(BLUE);

	// Extra
	Printa.Endl();
	Printa.Print("Print Normal Text");
	Printa.PrintCol("Print Colored Text", YELLOW);
	Printa.Custom("Custom Symbol Here", BLUE, "Text", GREEN);
	while (1){}
}