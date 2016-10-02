#include <iostream>

using namespace std;

int main() 
{
	double resistorValue;
	char input[4];
	double value[4];
	double multiplier;
	double tolerance;
	bool invalid = false;

	cout << "Enter the four resistor color codes: ";
	cin >> input;
	
	for(int i = 0; i < 2; ++i) {

		switch (input[i])
		{
			case 'k' : value[i] = 0;
				break;
			case 'n' : value[i] = 1;
				break;
			case 'R' : value[i] = 2;
				break;
			case 'O' : value[i] = 3;
				break;
			case 'Y' : value[i] = 4;
				break;
			case 'G' : value[i] = 5;
				break;
			case 'B' : value[i] = 6;
				break;
			case 'V' : value[i] = 7;
				break;
			case 'y' : value[i] = 8;
				break;
			case 'W' : value[i] = 9;
				break;
			case 'd' : invalid = true; break;
			case 'S' : invalid = true; break;
			case 'N' : invalid = true; break;

			default: invalid = true;
				break;
		}

	}

	switch(input[2])
	{
			case 'k' : multiplier = 1;
				break;
			case 'n' : multiplier = 10;
				break;
			case 'R' : multiplier = 100;
				break;
			case 'O' : multiplier = 1000;
				break;
			case 'Y' : multiplier = 10000;
				break;
			case 'G' : multiplier = 100000;
				break;
			case 'B' : multiplier = 1000000;
				break;
			case 'V' : multiplier = 10000000;
				break;
			case 'y' : multiplier = 100000000;
				break;
			case 'W' : multiplier = 1000000000;
				break;
			case 'd' : multiplier = 0.1;
				break;
			case 'S' : multiplier = 0.01;
				break;
			case 'N' : invalid = true; break;

			default: invalid = true;
				break;
	}

	switch(input[3])
	{
			case 'k' : 
				break;
			case 'n' : tolerance = 1;
				break;
			case 'R' : tolerance = 2;
				break;
			case 'O' : invalid = true;
				break;
			case 'Y' : invalid = true;
				break;
			case 'G' : tolerance = 0.5;
				break;
			case 'B' : tolerance = 0.25;
				break;
			case 'V' : tolerance = 0.1;
				break;
			case 'y' : tolerance = 0.05;
				break;
			case 'W' : invalid = true;
				break;
			case 'd' : tolerance = 5;
				break;
			case 'S' : tolerance = 10;
				break;
			case 'N' : tolerance = 20;
				break;
			default: invalid = true;
				break;
	}

	if(invalid)
	{
		cerr << "Error: Invalid color code entered!\n";
	} else {
		
		resistorValue = (value[0]*10 + value[1]) * multiplier;
		cout << "Resistance is " << resistorValue << " ohms " << " (+/-" << (resistorValue * 0.01 * tolerance) << " ohms tolerance)" << "\n";
	}

	

}