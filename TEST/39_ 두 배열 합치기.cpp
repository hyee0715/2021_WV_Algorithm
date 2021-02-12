#include <iostream>
#include <vector>
using namespace std;

// �ڵ� �ٽ� üũ�ϱ� 

int main() {
	//freopen("input.txt", "rt", stdin);

	int n, m, result;
	cin >> n;
	vector<int> nArr(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> nArr[i];
	}

	cin >> m;
	vector<int> mArr(m + 1);

	for (int i = 1; i <= m; i++) {
		cin >> mArr[i];
	}

	vector<int> resultArr(300);

	int p1 = 1, p2 = 1, p3 = 1; // ������

	while (p1 <= n && p2 <= m) {
		if (nArr[p1] < mArr[p2]) {
			resultArr[p3++] = nArr[p1++];
		}
		else {
			resultArr[p3++] = mArr[p2++];
		}
	}

	// ���� �κ��� ���� �ֱ�
	while (p1 <= n) {
		resultArr[p3++] = nArr[p1++];
	}
	while (p2 <= m) {
		resultArr[p3++] = mArr[p2++];
	}

	for (int i = 1; i < p3; i++) {
		cout << resultArr[i] << " ";
	}
	return 0;
}

