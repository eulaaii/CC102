#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 8; i++) {
		for (int y = 9 - i; y > 0; y--)
			cout << " ";
		for (int j = 1; j <= i; j++)
			cout << j;
		cout << endl;
	}	
	return 0;
}