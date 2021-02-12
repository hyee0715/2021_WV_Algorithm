#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// �ڵ� �ٽ� üũ�ϱ� 

int main() {
	//freopen("input.txt", "rt", stdin);

	int n, m; // �� �迭�� ũ��
	int p1 = 0, p2 = 0, p3 = 0; // �� �迭�� ������ 

	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end()); // quick sort�� �������� ����

	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(b.begin(), b.end());

	vector<int> c(n + m); // ��� �迭 

	// p1�� n���� �۰�, p2�� m���� ������ �迭 �� 
	while (p1 < n && p2 < m) {
		if (a[p1] == b[p2]) { // �������϶��� �� �迭 ��� ���� 
			c[p3++] = a[p1++];
			p2++;
		}
		else if (a[p1] < b[p2])
			p1++;
		else
			p2++;
	}

	for (int i = 0; i < p3; i++) {
		cout << c[i] << " ";
	}

	return 0;
}

