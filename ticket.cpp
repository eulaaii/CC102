#include <iostream>

using namespace std;

int main()
{
	int age;
	string answer;
	
	cout << "How old are you? ";
	cin >> age;
	
	if (age < 13){
		cout << "With Parent? ";
		cin >> answer;
		if (answer == ("no")) {
			cout << "G show";
		} else if (answer == ("yes")) 
			cout << "G and PG show"; {
	}
	}
	else if (age >= 13 || age < 16) {
		cout << "With Parent? ";
		cin >> answer;
		if (answer == ("no")) {
			cout << "G and PG show";
		} else if (answer == ("yes")) 
			cout << "G, PG and R show"; {
	}
	} 
	else 
		cout << "G, PG R show";

	return 0;
}
