#include <iostream>
#include <Windows.h>
#include <string>
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
    Printa.PrintCol("Print Colored Text", LIGHTBLUE);
    Printa.Custom("(._.)", BLUE, "Text", GREEN);
    Printa.Endl();

    Printa.Rainbow("Ting and Sus loves enums");
  
    while (1) {}
}
