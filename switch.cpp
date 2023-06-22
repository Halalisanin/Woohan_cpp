#include <iostream>
using namespace std;

int main() {
	int choice = 2;
	cout << endl;
	switch(choice) {
		case 1:
			cout << "Coffee" << endl;
			break;
		case 2:
			cout << "Tea" << endl;
			break;
		case 3:
			cout << "Water" << endl;
			break;
		default:
			cout << "Invalid choice" << endl;
	}
}
