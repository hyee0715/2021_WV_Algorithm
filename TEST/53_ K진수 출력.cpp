#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// �ڵ� �ٽ� üũ�ϱ� 

/* ���� ���� ����

vector<int> stack(100); int top = -1;

void push(int x) {
	stack[++top] = x;
}

int pop() {
	return stack[top--];
}
*/

int main() {
	freopen("input.txt", "rt", stdin);

	int n, k;
	stack<int> s;
	char str[20] = "0123456789ABCDEF";

	cin >> n >> k;

	while (n > 0) {
		s.push(n % k);
		// push(n % k); //���� ���� ���� �� ���		
		n = n / k;
	}

	//	while (top != -1) { //���� ���� ���� �� ��� 
	//		cout << str[pop()];
	//	}

	while (!s.empty()) { // empty()�� ������ ��������� ���� ����, ������� ������ ������ �����Ѵ�. 
		cout << str[s.top()]; // top �ڸ� �� ���� 
		s.pop(); // �� ������ 
	}

	return 0;
}

