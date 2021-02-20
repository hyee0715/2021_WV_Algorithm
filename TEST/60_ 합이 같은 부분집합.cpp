#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, arr[11], ch[11];
bool isSameSum = false;

void dfs(int x) {
	int sum1 = 0, sum0 = 0;

	if (x == n + 1) {
		for (int i = 1; i <= n; i++) {
			if (ch[i] == 1) { // ch�� ���� 1���� 0������ ���� ���� �հ� ��� 
				sum1 += arr[i];
			}
			else {
				sum0 += arr[i];
			}
		}

		if (sum1 == sum0) // ���� ���� ������ YES ��� 
			isSameSum = true;
	}
	else {
		ch[x] = 1;
		dfs(x + 1);
		ch[x] = 0;
		dfs(x + 1);
	}


}

int main() {
	//	freopen("input.txt", "rt", stdin);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dfs(1);

	if (isSameSum) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}