#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // �л����� ��
	int cardNum[10]; // ī�忡 ���� �� 
	int studentAnswer[10]; // �л��� ���� ���� 
	int correctAnswer[10]; // ���� 

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cardNum[i] >> studentAnswer[i];
	}

	for (int i = 0; i < n; i++) { // ���� �迭 0���� �ʱ�ȭ 
		correctAnswer[i] = 0;
	}

	for (int i = 0; i < n; i++) { // ���� ���ϱ� 
		for (int j = 1; j <= cardNum[i]; j++) {
			correctAnswer[i] += j;
		}
	}


	for (int i = 0; i < n; i++) {
		if (correctAnswer[i] == studentAnswer[i]) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}