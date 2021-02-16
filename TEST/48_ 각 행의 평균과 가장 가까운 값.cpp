#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	vector<vector<int>> arr(9, vector<int>(9));

	int sum = 0;
	int subtraction = 0; // ��հ� ����� ���� ã�� �� ���̴� ���� ��� ���� 

	vector<int> average(9);
	vector<int> nearest(9);

	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			cin >> arr[i][j];
		}
	}

	// ��� ���ϱ� 
	for (int i = 0; i < arr.size(); i++) {
		sum = 0;

		for (int j = 0; j < arr[i].size(); j++) {
			sum += arr[i][j];
			average[i] = round((double)sum / 9); // round �Լ� : �ݿø� 
		}
	}

	// ��հ� ����� �� ���ϱ�
	for (int i = 0; i < arr.size(); i++) {
		subtraction = abs(average[i] - arr[i][0]); // abs �Լ� : ���밪 
		nearest[i] = arr[i][0];

		for (int j = 0; j < arr[i].size(); j++) {
			if (subtraction > abs(average[i] - arr[i][j])) {
				subtraction = abs(average[i] - arr[i][j]);
				nearest[i] = arr[i][j];
			}
			else if (subtraction == abs(average[i] - arr[i][j])) {
				if (nearest[i] < arr[i][j]) {
					nearest[i] = arr[i][j];
				}
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		cout << average[i] << " " << nearest[i];
		cout << endl;
	}



	return 0;
}

