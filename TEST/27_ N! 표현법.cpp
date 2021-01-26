#include <iostream>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	cin >> n;

	int temp; // n�� ���丮�� ��
	int div; // ���μ����� �ϱ� ���� ���� �� 

	vector<int> prime(n + 1); // �Ҽ��� ���� ��Ÿ���� ��(��°�) 

	for (int i = 2; i <= n; i++) {
		div = 2; // 2�� ������ �����ؼ� ������ �������� ����������� ���� ������ �ݺ��ؼ� ������. ����������� ������ 1 ������Ų��.
		temp = i;

		while (temp > 1) {
			if (temp % div == 0) {
				prime[div]++;
				temp = temp / div;
			}
			else {
				div++;
			}
		}
	}

	cout << n << "! = ";

	for (int i = 0; i < prime.size(); i++) {
		if (prime[i] != 0)
			cout << prime[i] << " ";
	}

	return 0;
}