#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int inputNum; // �Է� �� 
	int count = 0; // �Է� ���� �ڸ��� 
	int inputSum = 0; // ������ �� ���� (��� ��) 

	cin >> inputNum;
	int num = inputNum;

	// �Է� ���� �ڸ��� ���ϱ� 
	while (num > 0) {
		num = static_cast<double>(num) / 10;
		count++;
	}

	// �ڸ�����ŭ �ݺ����� ���鼭 ������ �� ������ ���Ѵ�. 
	for (int i = 1; i <= count; i++) {
		if (i < count) {
			inputSum += i * 9 * pow(10, (i - 1));
		}
		else if (i == count) {
			inputSum += i * ((inputNum - pow(10, (i - 1))) + 1);
		}
	}

	cout << inputSum;

	return 0;
}