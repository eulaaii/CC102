#include <iostream>
using namespace std;

int main()
{
	char symbol1, symbol2, symbol3;
	
	cout << "Enter 1st symbol to use (*, ^, #, $, @): ";
	cin >> symbol1;
	cout << "Enter 2nd symbol to use (*, ^, #, $, @): ";
	cin >> symbol2;
	cout << "Enter 3rd symbol to use (*, ^, #, $, @): ";
	cin >> symbol3;
	cout << endl;
	
	cout << "You picked: " << symbol1 << " " << symbol2 << " " << symbol3 << endl;
	cout << endl;
	
	for (int i = 1; i <= 10; i++) {
		
		for (int j = 2; j <= i; j++)
			cout << symbol1;
		for (int z = 1; z == 1; z++)
			cout << " ";
		for (int y = 10 - i; y > 0; y--)
			cout << symbol1;
		cout << endl;
	}	
	cout << endl;
	
	for (int h = 1; h <= 5; h++){
		for (int r = 1; r <= 10; r++)
			cout << " " << symbol2;
		cout << endl;
		for (int z = 1; z <= 10; z++)
			cout << symbol2 << " ";
		cout << endl;
	}
	cout << endl;
	
	for (int u = 1; u <= 7; u++) {
		for (int n = 2; n <= u; n++)
			cout << symbol1;
		for (int d = 0; d >= 0; d--)
			cout << symbol2;
		cout << endl;
	}
	for (int u = 6; u >= 0; u--) {
		for (int n = 1; n <= u; n++)
			cout << symbol1;
		for (int d = 0; d >= 0; d--)
			cout << symbol2;
		cout << endl;
	}
	cout << endl;

	for (int b = 1; b <= 5; b++) {
		for (int t = 1; t <= 5; t++)
			cout << " ";
		for (int k = 2; k <= b; k++) 
			cout << symbol2;
		for (int w = 1; w <= 1; w++)
			cout << symbol3;
		cout << endl;
	}
	 for (int o = 1; o <= 2; o++) {
		 for (int a = 1; a <= 5; a++)
			 cout << symbol1;
		 for (int q = 1; q <= 5; q++)
			 cout << symbol2;
		 for (int f = 1; f <= 1; f++)
			 cout << symbol3;
		 cout << endl;
	 }
	 for (int b = 5; b >= 1; b--) {
		for (int t = 1; t <= 5; t++)
			cout << " ";
		for (int k = 2; k <= b; k++) 
			cout << symbol2;
		for (int w = 1; w <= 1; w++)
			cout << symbol3;
		cout << endl;
	 }
	return 0;
}
