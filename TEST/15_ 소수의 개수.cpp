#include <iostream>
using namespace std;

// �ڵ� �ٽ� üũ�ϱ�

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	cin >> n;

	int primeCount = 0;  // �Ҽ� ���� 
	bool flag; // �Ҽ������� ���� 

	for (int i = 2; i <= n; i++) {
		flag = true;
		for (int j = 2; j * j <= i; j++) { // i�� �����ٱ����� �ݺ� 
			if (i % j == 0) {
				flag = false;
				break; // �Ҽ� �ƴ�
			}
		}
		if (flag == true)
			primeCount++;
	}

	cout << primeCount;
	return 0;
}