#include <iostream>
#include <string>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	string input;
	int number[30];
	int count = 0;

	getline(cin, input);

	//number �迭 ��� 0���� �ʱ�ȭ 
	for (int i = 0; i < 30; i++) {
		number[i] = 0;
	}

	// '('���� �����ϰ� ')'�� ������ ���ڿ��� �ٷ��. 
	if (input[0] != ')' && input[input.length() - 1] != '(') {

		for (int i = 0; i < input.length(); i++) {
			// '('�� 1, ')'�� -1�� �����Ͽ� �� �հ谡 0�� �Ǹ� YES. 0�� �ƴϸ� NO 
			if (input[i] == '(') {
				number[i] = 1;
			}
			else if (input[i] == ')') {
				number[i] = -1;
			}
		}

		for (int j = 0; j < 30; j++) {
			count += number[j];
		}

		if (count == 0)
			cout << "YES";
		else
			cout << "NO";
	}
	else {
		cout << "NO";
	}

	return 0;
}