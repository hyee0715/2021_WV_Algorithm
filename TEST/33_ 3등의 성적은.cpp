#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	int min, minIndex, rankCount, rank;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// �������� 
	for (int i = 0; i < n; i++) {
		min = arr[i];

		for (int j = i + 1; j < n; j++) {
			if (arr[j] < min) {
				min = arr[j];
				minIndex = j;
			}
		}

		if (min != arr[i]) {
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}

	// �� �ڿ������� 1������ �Ͽ� ���� ���� ���ö����� rankCount�� +1 �Ͽ� 3���� ã�´�. 
	rank = arr[n - 1];
	rankCount = 1;

	for (int i = n - 2; i >= 0; i--) {
		if (rank > arr[i]) {
			rank = arr[i];
			rankCount++;
		}

		if (rankCount == 3) {
			break;
		}
	}

	cout << rank;

	return 0;
}