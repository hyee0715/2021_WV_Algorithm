#include <iostream>
using namespace std;

int main() {
	// �迭�� 101���� ��� (1����� ����) ���� ��ü�� �迭�� ����.
	// �迭�� 0���� �ʱ�ȭ�Ѵ�. 
	int count, age, lowestAge, highestAge;
	int arr[101];

	for (int i = 0; i < 101; i++) {
		arr[i] = 0;
	}

	// �Է¹��� ������ �ε����� ���̸� �ִ´�. 
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> age;
		arr[age] = age;
	}

	// ���� � ���� ���ϱ�. 0�� �ƴ� �� �߿� ���� �տ� �ִ� ���ڰ� ���� �. 
	for (int i = 0; i < 101; i++) {
		if (arr[i] != 0) {
			lowestAge = arr[i];
			break;
		}
	}

	// ���� ���� ���� ���ϱ�. 0�� �ƴ� �� �߿� ���� �ڿ� �ִ� ���ڰ� ���� ���� ����. 
	for (int i = 100; i >= 0; i--) {
		if (arr[i] != 0) {
			highestAge = arr[i];
			break;
		}
	}

	// �������� ���ϱ� 
	cout << highestAge - lowestAge;

	return 0;
}