#include <iostream>
using namespace std;

// �ڵ� �ٽ� üũ�ϱ� 

void recursive(int n) {
	if (n > 7) {
		return;
	}
	else {
		cout << n << " ";
		recursive(n * 2);
		recursive(n * 2 + 1);
	}
}

int main() {
	//	freopen("input.txt", "rt", stdin);

	recursive(1);

	return 0;
}