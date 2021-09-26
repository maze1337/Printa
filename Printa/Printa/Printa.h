#pragma once



HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

namespace Colors
{
#define BLACK			0
#define BLUE			1
#define GREEN			2
#define CYAN			3
#define RED				4
#define MAGENTA			5
#define BROWN			6
#define LIGHTGRAY		7
#define DARKGRAY		8
#define LIGHTBLUE		9
#define LIGHTGREEN		10
#define LIGHTCYAN		11
#define LIGHTRED		12
#define PURPLE      	13
#define YELLOW			14
#define WHITE			15
}


class Printa
{
public:
	const char* SetWhite()
	{
		SetConsoleTextAttribute(h, 15);
		return "";
	}
	const char* SetGreen()
	{
		SetConsoleTextAttribute(h, 10);
		return "";
	}
	const char* SetBlue()
	{
		SetConsoleTextAttribute(h, 9);
		return "";
	}
	const char* SetPurple()
	{
		SetConsoleTextAttribute(h, 13);
		return "";
	}
	const char* SetRed()
	{
		SetConsoleTextAttribute(h, 4);
		return "";
	}

	void Arrow(int color)
	{
		SetConsoleTextAttribute(h, color);
		std::cout << "-> ";
		SetWhite();
	}
	void Title(const char* text)
	{
		std::cout << std::endl;
		SetPurple();
		std::cout << "    " << text << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	void OK(const char* text)
	{
		SetWhite();
		std::cout << " [";
		SetGreen();
		std::cout << "+";
		SetWhite();
		std::cout << "] ";
		std::cout << text << std::endl;
		SetWhite();
	}
	void Input(const char* text)
	{
		SetWhite();
		std::cout << " [ ";
		SetBlue();
		std::cout << "->";
		SetWhite();
		std::cout << " ] ";
		std::cout << text << "";
		std::cout << std::endl;
		SetWhite();
	}
	void Loading(const char* text)
	{
		SetWhite();
		std::cout << " [";
		SetPurple();
		std::cout << "<-->";
		SetWhite();
		std::cout << "] ";
		std::cout << text << std::endl;
		SetWhite();

	}
	void Fail(const char* text)
	{
		SetWhite();
		std::cout << " [";
		SetRed();
		std::cout << "-";
		SetWhite();
		std::cout << "] ";
		std::cout << text << std::endl;
		SetWhite();
	}

	void Print(const char* text)
	{
		std::cout << text << std::endl;
	}
	void PrintCol(const char* text, int color)
	{
		SetConsoleTextAttribute(h, color);
		std::cout << text << std::endl;
	}
	void Custom(const char* symbol, int symbolColor, const char* text, int textColor)
	{
		SetWhite();
		std::cout << " [ ";
		SetConsoleTextAttribute(h, symbolColor);
		std::cout << symbol;
		SetWhite();
		std::cout << " ] ";
		SetConsoleTextAttribute(h, textColor);
		std::cout << text << std::endl;
	}

	void Endl()
	{
		std::cout << std::endl;
	}
}Printa;


