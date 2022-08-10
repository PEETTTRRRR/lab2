#include <iostream>
using namespace std;

int main() {
	int total = 0;
		for (int a = 1; a < 100; a++) {
			if (a % 2 == 0) {
				total = total + a;
			}
		}
		cout << "\n----------";
		cout << "\nSum =" << total;
		cout << "\n----------";
}