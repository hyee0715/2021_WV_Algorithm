#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	int min, minIndex;

	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		min = arr[i];

		// ���� ���¿��� ���� ���� �� min�� ã�´�. 
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < min) {
				min = arr[j];
				minIndex = j;
			}
		}

		// arr[i] (��ȯ���� ���� �� �߿� ���� �տ� �ִ� ��)�� min�� ���� ��ȯ
		if (arr[i] != min) {
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}