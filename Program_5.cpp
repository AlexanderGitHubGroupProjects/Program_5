//---------------------------------------------------------------------
//
// Name(s):    
//
// Course:  CS 1430, Section 03
//
// Purpose:	This program keeps track of the transactions of a Day 
//		Trader (DT). The DT constantly buys and sells stocks. The 
//			DT can also sell a stock they don’t have (sell short). 
//			This program keeps track of all stocks: update when bought 
//			or sold, added if not on the list, and regular updates on
//			stocks. If the number of stocks become zero, it is removed.
//			There is a maximum number of stocks that can be dealt with
//			by the DT. There is a $5 transaction fee for every stock
//			bought or sold. 
//
// Input:	Single character commands
//				Q - Quit
//				T - Transaction Information
//						( Stock Name, Stock Price, Number of Shares )
//				D - Display Stock List
//				V <value type> - Display value of specified type
//						If the value type is P, then print profit.
//
// Output:  Output stock information and current profit in regards to
//			the input commands above.
//---------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	char input_command;
	cin >> input_command;
	while ( input_command != 'Q' )
	{
		if ( input_command == 'Q' )
		{
			break; // ? Will it break from just the if statement or even the while? Or could use return 0;
		}
		else if ( input_command == 'T' )
		{
			// call functions
		}
		else if ( input_command == 'D' )
		{
			//call functions
		}
		else if ( input_command == 'V' )
		{
			//call functions
		}
		cin >> input_command;
	}
   return 0;
}
