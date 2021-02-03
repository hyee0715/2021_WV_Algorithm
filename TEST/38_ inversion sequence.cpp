#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	cin >> n;

	vector<int> inversionSequence(n + 1);
	vector<int> arr(n + 1); // ������ �迭

	int count, plus;

	for (int i = 1; i <= n; i++) {
		cin >> inversionSequence[i];
	}

	for (int i = 1; i <= n; i++) { // inversionSequence
		count = 1;
		plus = 0;

		if (inversionSequence[i] == 0) { // inversionSequence[i]�� 0�̸� arr�迭�� ���� �տ� �ִ� 0 �ڸ��� �� 
			for (int j = 1; j <= n; j++) { // arr
				if (arr[j] == 0) {
					arr[j] = i;
					break;
				}
			}
		}
		else {
			for (int j = 1; j <= n; j++) { // arr
				if (arr[j] == 0) { // arr �迭�� �ڸ��� 0���� ��������� count ����. 
					count++;

					if (count == inversionSequence[i] + 1) // ������ ���� inversionSequence[i] + 1 �ڸ��� ����. ���� count�� ���� �������� break 
						break;
				}
				else if (arr[j] != 0) {
					plus++;
				}
			}

			if (arr[count + plus] == 0)
				arr[count + plus] = i;
			else {
				while (arr[count + plus] != 0) // arr �迭�� �̹� ���� ������ �� ���� �ڸ��� ���� �־�� �ϹǷ� 0�� ���ö����� count�� 1 ������Ŵ. 
					count++;

				arr[count + plus] = i;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}