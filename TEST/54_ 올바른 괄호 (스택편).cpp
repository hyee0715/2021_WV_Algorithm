#include <iostream>
#include <stack>
#include <string>
using namespace std;

// �ڵ� �ٽ� üũ�ϱ� 

int main() {
	//	freopen("input.txt", "rt", stdin);

	string str;
	stack<char> stack;
	bool isEnd = true;

	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			stack.push(str[i]);
		}
		else if (str[i] == ')') {
			if (stack.empty()) {
				cout << "NO";
				isEnd = false;
				break;
			}
			else
				stack.pop();
		}
	}

	// ������ ������� ������ ����
	if (!stack.empty() && isEnd == true)
		cout << "NO";

	else if (stack.empty() && isEnd == true)
		cout << "YES";

	return 0;
}

