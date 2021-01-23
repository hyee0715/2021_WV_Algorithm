#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // �л��� ��
	cin >> n;

	vector<int> mathScore(n); // �� �л����� ���� ���� 
	vector<int> rank(n, 1); // ���
	int score;

	for (int i = 0; i < n; i++) {
		cin >> mathScore[i];
	}

	// ���� ���Ͽ� ������ �� ������ �ش� �ε����� rank ���� 1 �߰��Ѵ�. 
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (mathScore[i] > mathScore[j]) {
				rank[j]++;
			}
			else if (mathScore[i] < mathScore[j]) {
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << rank[i];
	}

	return 0;
}