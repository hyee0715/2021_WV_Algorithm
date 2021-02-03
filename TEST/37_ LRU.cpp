#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int s; // ĳ���� ũ�� 
	cin >> s;

	int n; // �۾��� ���� 
	bool isHit; // hit ����

	cin >> n;

	vector<int> cache(s); // ĳ�� �޸� 
	vector<int> task(n); // �۾� 

	for (int i = 0; i < n; i++) {
		cin >> task[i];
	}

	for (int i = 0; i < n; i++) { // ĳ�� Hit ���� Ȯ�� 
		isHit = false;

		for (int j = 0; j < s; j++) { // ĳ�ø޸� 
			if (task[i] == cache[j]) { // Cache hit
				int temp = cache[j];
				int tempIndex = j;

				for (int k = j - 1; k >= 0; k--) { // ���� �۾� �ű��
					cache[k + 1] = cache[k];
				}
				cache[0] = task[i]; // ���õ� �۾� �� ������ �ű�� 

				isHit = true;
				break;
			}
		}

		//Cache miss
		if (!isHit) {
			for (int j = s - 1; j >= 1; j--) {
				cache[j] = cache[j - 1]; // ĳ�ÿ� �ִ� �۾��� �� �� ĭ��  �ڷ� �ű�� 
			}
			cache[0] = task[i]; // �� �տ� �۾� ���� 
		}
	}

	for (int i = 0; i < s; i++) {
		cout << cache[i] << " ";
	}

	return 0;
}