#using <System.dll>

using namespace System;

int main()
{
	int i = 50;
	double a = 3.14159;
	// Printing to screen
	Console::WriteLine("Execution Completed!");
	// Color control
	Console::ForegroundColor = ConsoleColor::Red;
	// Formatted printing
	do
	{
		Console::SetCursorPosition(10, 10);
		Console::WriteLine("{0, 12:D}              {1, 12:F3}", i++, a);
	} while (!Console::KeyAvailable);
	Console::ForegroundColor = ConsoleColor::White;

	// wait for a keypress
	Console::ReadKey();
	Console::ReadKey();
	return 0;
}