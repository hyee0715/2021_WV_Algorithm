#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//	freopen("input.txt", "rt", stdin);

	int n, k;
	cin >> n >> k;
	vector<int> arr(n + 1, 1);

	int count = 0;
	int princeNumber = n; // ������ �� 
	int finalPrince; // ���ָ� ���� ���� 

	// ������ ���� 1�� �� ������ �ݺ��Ͽ� ���Ѵ�. 
	while (princeNumber > 1) {
		for (int i = 1; i <= n; i++) {
			if (arr[i] == 1) {
				count++;

				// ���� 1�� �迭���� count ���� �������� k���� ������ �ش� ĭ�� ���� 0���� �����. 
				if (count == k) {
					arr[i] = 0;
					count = 0;
					princeNumber--;
				}

				// ������ ���� 1�� �Ǹ� �ݺ��� ������.				
				if (princeNumber == 1) {
					break;
				}
			}
		}
	}

	// ������ ���� ���� ã��
	for (int i = 1; i <= n; i++) {
		if (arr[i] == 1) {
			finalPrince = i;
		}
	}

	cout << finalPrince;

	return 0;
}

