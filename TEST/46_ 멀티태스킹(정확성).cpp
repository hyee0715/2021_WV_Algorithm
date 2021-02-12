#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n, k;
	cin >> n;
	vector<int> arr(n + 1);
	int arrSum = 0;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		arrSum += arr[i];
	}

	cin >> k;
	int blackoutTime = k; // �����߻��ð� 
	int restartTaskNumber; // �ٽ� �����ؾ��ϴ� �۾���ȣ (��� ��) 
	bool endFlag = false;

	if (k >= arrSum) { // ��� 1: �����߻��ð� >= �迭�� ���̸� ó���� �۾��� �����Ƿ� -1 ���. 
		restartTaskNumber = -1;
	}
	else if (k < arrSum) { // ��� 2: �����߻��ð� < �迭�� ���̸� �����ð���ŭ -1 ���ָ� ����Ѵ�. 
		while (1) {
			for (int i = 1; i <= n; i++) {
				if (arr[i] != 0) {
					if (blackoutTime == 0) {
						restartTaskNumber = i;
						endFlag = true;
						break;
					}
					else {
						arr[i] = arr[i] - 1;
						blackoutTime--;
					}
				}
			}

			if (endFlag) {
				break;
			}
		}
	}

	cout << restartTaskNumber;


	return 0;
}

