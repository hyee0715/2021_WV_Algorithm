#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // ���� �ð�
	int m; // ����ġ �溸���� �︮�� ��
	int measure[100]; //�ʴ��� �ǽð� ����ġ 
	int time = 0; // �������� �溸���� �︰ �ð� 
	int maxTime = 0; // �ִ� �������� �溸���� �︰ �ð� 
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> measure[i];
	}


	for (int i = 0; i < n; i++) {
		if (measure[i] > m) {
			// m���� ū ����ġ�� ����ٰ� ��Ÿ���� 1�ʺ��� ���� 
			if (measure[i - 1] <= m)
				time = 1;
			else
				time++;
		}

		if (time > maxTime) { // ����ġ�� �ִ� ����ġ���� ũ�� ���� 
			maxTime = time;
		}
	}

	cout << maxTime;
	return 0;
}