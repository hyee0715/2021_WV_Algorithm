#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, arr[11], ch[11], sameCount = 0;

void dfs(int x) {
	int sum = 0;

	if (x == n + 1) {
		for (int i = 1; i <= n; i++) {
			if (ch[i] == 0) { // ch�� ���� 0�̸� ���ϱ� 
				sum += arr[i];
			}
			else if (ch[i] == 1) { // ch�� ���� 1�̸� ���� 
				sum -= arr[i];
			}
		}

		if (sum == m)
			sameCount++;
	}
	else {
		ch[x] = 0; // ch�� ���� 0�̸� ���ϱ� 
		dfs(x + 1);
		ch[x] = 1; // ch�� ���� 1�̸� ���� 
		dfs(x + 1);
		ch[x] = 2; // �ƹ��͵� ���� ���� 
		dfs(x + 1);
	}
}

int main() {
	//	freopen("input.txt", "rt", stdin);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dfs(1);

	if (sameCount == 0)
		cout << "-1";
	else
		cout << sameCount;

	return 0;
}