#include <iostream>
using namespace std;

int main() {
	int num = 5;
	while(num > 0) {
		cout << num << endl;
		/* num++; would work the same, but 
		 * in the oposite directiion*/
		num--;
	}
}
