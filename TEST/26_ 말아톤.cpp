#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // ������ ��
	int lowerRankCount; // ���� �յ�������� �� ���� ������ ���� ��� �� 

	cin >> n;

	vector<int> ability(n + 1); // �������� ��ҽǷ� (�ε��� 1���� ����) (�ε����� ����� ��Ÿ���� ������ 1���� ��������) 
	vector<int> possibleRank(n + 1); // �ּ��� ���

	for (int i = 1; i <= n; i++) {
		cin >> ability[i];
	}

	possibleRank[1] = 1; // 1���� �տ� �ƹ��� ���� ������ 1���� ������ �����Ƿ� ���Ƿ� 1�� ����. 

	for (int i = 2; i <= n; i++) { // 2����� ��� �����Ѵ�. 
		lowerRankCount = 0;

		for (int j = i - 1; j >= 1; j--) { // �տ� �ִ� ���� ����Ѵ�. 
			if (ability[i] > ability[j]) {
				lowerRankCount++;
			}
		}

		possibleRank[i] = i - lowerRankCount; // �ּ��� ��� = ���� ��� - ���� �յ�������� �� ���� ������ ���� ��� �� 
	}

	for (int i = 1; i <= n; i++) {
		cout << possibleRank[i] << " ";
	}



	return 0;
}