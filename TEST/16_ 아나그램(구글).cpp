#include <iostream>
#include <string>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int arr[123];
	string input1, input2;

	getline(cin, input1);
	getline(cin, input2);

	for (int i = 0; i < 123; i++) { // 0���� �ʱ�ȭ 
		arr[i] = 0;
	}

	for (int i = 0; i < input1.length(); i++) {
		arr[input1[i]] += 1;
	}

	for (int i = 0; i < input2.length(); i++) {
		arr[input2[i]] += 1;
	}

	for (int i = 0; i < 123; i++) {
		if (arr[i] != 0) {
			if (arr[i] % 2 != 0) { // ¦���� �ƴϸ� �Ƴ��׷��� �ƴϹǷ� NO ��� 
				cout << "NO";
				break;
			}
		}

		if (i == 122) // ���ڿ����� ��� Ȯ������ �� ���� ��� YES ��� 
			cout << "YES";
	}

	return 0;
}