#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // �ڿ����� ����
	int count = 1; // ���������� ����
	int max = 0; // �ִ� ����
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// ���� ���� ���� �� ���� ũ�ų� ������ count �� 1 ���� 
	for (int i = 1; i < n; i++) {
		if (arr[i] >= arr[i - 1]) {
			count++;
		}
		// ���� ���� ���� �� ���� ������ count 1�� �ʱ�ȭ 
		else {
			count = 1;
		}

		if (count > max) {
			max = count;
		}
	}

	cout << max;

	return 0;
}