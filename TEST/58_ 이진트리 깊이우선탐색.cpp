#include <iostream>
using namespace std;

// �ڵ� �ٽ� üũ�ϱ� 

void recursive(int n) {
	if (n > 7) {
		return;
	}
	else {
		// ������ȸ ��� : 1 2 4 5 3 6 7 
		cout << n << " ";
		recursive(n * 2);
		recursive(n * 2 + 1);

		// ������ȸ ��� : 4 2 5 1 6 3 7
//		recursive(n * 2);
//		cout << n << " ";
//		recursive(n * 2 + 1);

		// ������ȸ ��� : 4 5 2 6 7 3 1
//		recursive(n * 2);
//		recursive(n * 2 + 1);
//		cout << n << " ";
	}
}

int main() {
	//	freopen("input.txt", "rt", stdin);

	recursive(1);

	return 0;
}
