#include <iostream>
using namespace std;

void recursive(int n) {
	if (n == 0) {
		return;
	}
	else {
		recursive(n - 1);
		cout << n << " ";
	}
}

int main() {
	//	freopen("input.txt", "rt", stdin);

	int n;
	cin >> n;

	recursive(n);

	return 0;
}