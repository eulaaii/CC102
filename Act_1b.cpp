#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 9; i++) {
		for (int y = 9 - i; y > 0; y--)
			cout << "#";
		cout << endl;
	}	
	return 0;
}