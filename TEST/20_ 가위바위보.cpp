#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // ���� Ƚ��
	int a[100]; // A�� �� ���������� ���� 
	int b[100]; // B�� �� ���������� ���� 
	char whoIsWin[100]; // ����

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == b[i]) { // ����� ��� 
			whoIsWin[i] = 'D';
		}
		else if ((a[i] == 1 && b[i] == 3) || (a[i] == 2 && b[i] == 1) || (a[i] == 3 && b[i] == 2)) { // a�� �̱�� ���
			whoIsWin[i] = 'A';
		}
		else if ((b[i] == 1 && a[i] == 3) || (b[i] == 2 && a[i] == 1) || (b[i] == 3 && a[i] == 2)) { // b�� �̱�� ���
			whoIsWin[i] = 'B';
		}
	}

	for (int i = 0; i < n; i++) {
		cout << whoIsWin[i] << endl;
	}

	return 0;
}