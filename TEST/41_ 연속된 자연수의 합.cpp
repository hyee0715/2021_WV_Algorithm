#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	cin >> n;
	int sum, start, end;
	bool isMatch; // ���� n�� �Ǵ��� ���� 
	int count = 0; // �� ���� 

	for (int i = n - 1; i >= 1; i--) { // n -1���� 1���� �پ��鼭 sum�� ����. 
		sum = 0;
		isMatch = false;

		for (int j = i; j < n; j++) {
			sum += j;

			if (sum == n) {
				start = i;
				end = j;
				isMatch = true;
				break;
			}
		}

		if (isMatch) { // ���� n�̸� ��� 
			count++;

			for (int j = start; j <= end; j++) {
				if (j == start) {
					cout << j;
				}
				else {
					cout << " + " << j;
				}
			}
			cout << " = " << n;
			cout << endl;
		}
	}

	cout << count;


	return 0;
}

