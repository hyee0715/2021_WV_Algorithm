#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // �л� ��
	int heights[100]; // �л����� ���� Ű ����
	int angryMakerCount = 0; // �г������� �� 

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> heights[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (heights[i] <= heights[j]) {
				break;
			}

			if (j == n - 1) {
				angryMakerCount++;
			}
		}
	}

	cout << angryMakerCount;

	return 0;
}