#include <iostream>
#include <string>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	string input, word = "";

	getline(cin, input);

	// ���� ���� 
	for (int i = 0; i < input.length(); i++) {
		if (input[i] != ' ')
			word += input[i];
	}

	// �빮�ڸ� �ҹ��ڷ� ���� 
	for (int i = 0; i < word.length(); i++) {
		if (word[i] >= 'A' && word[i] <= 'Z')
			word[i] = word[i] + 32;
	}

	cout << word;

	return 0;
}