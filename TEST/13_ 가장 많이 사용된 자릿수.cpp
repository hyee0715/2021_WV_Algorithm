#include <iostream>
#include <string>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	string inputNum;
	int numCount[10]; // 0-9 ������ �󵵸� ��Ÿ���� �迭 
	int max = 0, maxIndex;

	getline(cin, inputNum);

	// numCount �迭 �ʱ�ȭ 
	for (int i = 0; i < 10; i++) {
		numCount[i] = 0;
	}

	// inputNum �Է� ���� �ش��ϴ� �ε����� ���� 1�� ������Ŵ 
	for (int i = 0; i < inputNum.length(); i++) {
		numCount[inputNum[i] - 48]++;
	}

	// ���� ���� ���� ���ڿ� �ε��� ã��. 
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			max = numCount[i];
			maxIndex = i;
		}

		if (max < numCount[i]) {
			max = numCount[i];
			maxIndex = i;
		}
		else if (max == numCount[i]) {
			// ���� ���� ���� ��� (�ڿ� ������ ���̰ų�) ���� ū ���� ����Ѵ�. 
			if (maxIndex <= i) {
				maxIndex = i;
			}
		}
	}

	cout << maxIndex;

	return 0;
}