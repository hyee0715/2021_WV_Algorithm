#include <iostream>
using namespace std;

int reverse(int x) {
	int rev = 0;

	while (x > 0) {
		rev = rev * 10 + (x % 10);
		x = x / 10;
	}

	return rev;
}

bool isPrime(int x) {
	if (x == 1) // 1�̸� false ���� 
		return false;

	// 2���� x���� ������ �������� ���� �ִٸ� �Ҽ��� �ƴϹǷ� false ���� 	
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // �ڿ����� ����
	int input[100]; // �Է��� �ڿ���
	int reverseArr[100]; // ������ �ڿ��� 

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input[i];
		reverseArr[i] = reverse(input[i]);
	}

	for (int i = 0; i < n; i++) {
		if (isPrime(reverseArr[i])) {
			cout << reverseArr[i] << " ";
		}
	}

	return 0;
}