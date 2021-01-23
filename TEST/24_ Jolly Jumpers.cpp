#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // ������ ����

	cin >> n;

	vector<int> jollyJumpers(n); // �Է� ���� ���� 
	vector<int> subtraction(n - 1); // �յ� ������ ��
	vector<int> check(n - 1); // 1���� n-1������ �� �迭 
	bool isEqual = false;

	for (int i = 0; i < n; i++) {
		cin >> jollyJumpers[i];
	}

	// ������ ���� ���Ѵ�. 
	for (int i = 1; i < n; i++) {
		subtraction[i - 1] = abs(jollyJumpers[i] - jollyJumpers[i - 1]);

	}

	// 1���� n-1������ ���� ���� �迭 ���� 
	for (int i = 1; i <= n - 1; i++) {
		check[i - 1] = i;
	}

	// ����� ��ġ�ϴ��� üũ
	for (int i = 0; i < n - 1; i++) {
		isEqual = false;

		for (int j = 0; j < n - 1; j++) {
			if (check[i] == subtraction[j]) {
				isEqual = true;
				break;
			}
		}

		if (!isEqual) {
			cout << "NO";
			break;
		}

	}

	if (isEqual)
		cout << "YES";

	return 0;
}