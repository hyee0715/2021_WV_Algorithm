#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // ����� ũ��
	cin >> n;
	vector<vector<int>> block(n, vector<int>(n));
	int blockCount = 0; // ����� �� ���� 

	vector<int> front(n);
	for (int i = 0; i < n; i++) {
		cin >> front[i];
	}

	vector<int> right(n);
	for (int i = 0; i < n; i++) {
		cin >> right[i];
	}

	// ������ ���� �ش��ϴ� ��� ���� �ִ´�. 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			block[j][i] = front[i];
		}
	}

	// ������ ������ ������ �� �迭�� ���� �� ũ�� ������ ���� ������ ��ü 
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < n; j++) {
			if (block[i][j] > right[(n - 1) - i]) { // n�� 4��� i�� 3,2,1,0 ������ �پ���,
				block[i][j] = right[(n - 1) - i]; // right�� �ε����� 0,1,2,3 ������ �þ�� �Ѵ�. 
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			blockCount += block[i][j];
		}
	}

	cout << blockCount;

	return 0;
}

