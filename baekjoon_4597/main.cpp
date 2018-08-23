#include <iostream>
#include <string.h>
using namespace std;

char i1[32];
int c;
int main() {
	cin >> i1;
	while (i1[0] != '#') {
		for (int i = 0; i < strlen(i1) - 1; i++) {
			cout << i1[i];
			c += i1[i] - '0';
		}
		if (i1[strlen(i1) - 1] == 'e') cout << (c % 2 == 0 ? 0 : 1) << endl;
		else cout << (c % 2 == 0 ? 1 : 0) << endl;
		cin >> i1;
		c = 0;
	}
	return 0;
}