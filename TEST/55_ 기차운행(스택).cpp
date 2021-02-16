#include <iostream>
#include <vector> 
#include <stack>
using namespace std;

// �ڵ� �ٽ� üũ�ϱ� 

int main() {
	//	freopen("input.txt", "rt", stdin);

	int n, m, j = 1; // j: str�迭 ��ġ 
	stack<int> s;
	cin >> n;
	vector<int> arr(n + 1);

	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	vector<char> str;

	for (int i = 1; i <= n; i++) {
		cin >> m;
		s.push(m);
		str.push_back('P');

		while (1) {
			if (s.empty())
				break;

			if (arr[j] == s.top()) {
				s.pop();
				j++;
				str.push_back('O');
			}
			else
				break;
		}
	}

	if (!s.empty())
		cout << "impossible";
	else {
		for (int i = 0; i < str.size(); i++)
			cout << str[i];
	}
	return 0;
}