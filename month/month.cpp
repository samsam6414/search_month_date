
#include <iostream>
#define BOX_SIZE 20 

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int month;

	cout << "Inter the number of the month" << endl;
	cin >> month;

	if (month == 1 || month == 3 || month == 5 ||
		month == 7 || month == 8 || month == 10 ||

		month == 12) {


		cout << "The month have 31 days" << endl;
	}

	else if (month == 2) {

		cout << "The month have 28 days" << endl;
	}

	else {

		cout << "The month have 30 days" << endl;

	}

	return 0;
}