#include <iostream>
#include <cmath>
#include <string>

using namespace std;



int main() {
	int numberofYears;
	cout << "Enter the number of years in the school";
	cin.ignore();
	string stringofYears = to_string(numberofYears);
	getline(cin,stringofYears);
	for (int i = 0; i < numberofYears; i++) {
		int pupilsInYear[numberofYears];
		cout << "Enter the number of pupils in class" + i << endl;
		cin.ignore();
		string stringsinYear[numberofYears];
		stringsinYear[i] = to_string(pupilsInYear[numberofYears]);
		
	}
}


