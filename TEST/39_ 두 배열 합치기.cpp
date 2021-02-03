#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n, m;
	cin >> n;
	vector<int> nArr(n);

	for (int i = 0; i < n; i++) {
		cin >> nArr[i];
	}

	cin >> m;
	vector<int> mArr(m);

	for (int i = 0; i < m; i++) {
		cin >> mArr[i];
	}

	// nArr �迭�� mArr �迭�� ��ģ resultArr �迭 ���� 
	vector<int> resultArr(n + m);

	for (int i = 0; i < n; i++) {
		resultArr[i] = nArr[i];
	}

	for (int i = 0; i < m; i++) {
		resultArr[n + i] = mArr[i];
	}

	// ��������
	int key, keyIndex;

	for (int i = 1; i < n + m; i++) {
		key = resultArr[i];
		keyIndex = i;

		for (int j = i - 1; j >= 0; j--) {
			if (key < resultArr[j]) {
				int temp = resultArr[j];
				resultArr[j] = resultArr[keyIndex];
				resultArr[keyIndex] = temp;

				keyIndex = j;
			}
		}
	}

	for (int i = 0; i < n + m; i++) {
		cout << resultArr[i] << " ";
	}

	return 0;
}