#include <iostream>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // �ڿ��� n �Է�
	cin >> n;

	int temp; // n ���簪 
	int div; // ���μ����� �ϱ� ���� ������ �Ҽ� 
	int count2 = 0, count5 = 0;

	for (int i = 2; i <= n; i++) {
		temp = i;
		div = 2;

		// 2*5�� ������ 10�� ����̹Ƿ� 2*5�� ���� ���� �ȴ�. 
		while (temp > 1) {
			if (temp % div == 0) {
				if (div == 2) {
					count2++;
				}
				else if (div == 5) {
					count5++;
				}

				temp = temp / div;
			}
			else {
				div++;
			}
		}
	}

	if (count2 > count5)
		cout << count5;
	else
		cout << count2;

	return 0;
}