#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n; // �µ��� ������ ��ü ��¥�� �� 
	int k; // ���� ���ϱ� ���� �������� ��¥�� ��
	int sum = 0;
	int max = 0;
	cin >> n >> k;

	vector<int> temperature(n);

	for (int i = 0; i < n; i++) {
		cin >> temperature[i];
	}

	//�ʹ� k���� ���� sum�� �־��ش�.
	for (int i = 0; i < k; i++) {
		sum += temperature[i];
	}

	max = sum;

	// i�� 1�� �����ϸ鼭 ���� �տ� �ִ� ���� ���ְ�, i�ڸ��� ���� �����ش�.
	for (int i = k; i < n; i++) {
		sum = sum + temperature[i] - temperature[i - k];

		if (max < sum) {
			max = sum;
		}
	}

	cout << max;

	return 0;
}