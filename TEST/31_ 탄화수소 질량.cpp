#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int c, h; // ź�ҿ� ���� ���� 
	string strC = "";
	string strH = "";
	string hydrocarbon; // ȭ�չ� 
	int indexH = 0; // 'H'�� �ε��� ��ġ 

	getline(cin, hydrocarbon);

	if (hydrocarbon[1] == 'H') {
		strC = '1';
		indexH = 0;
	}
	else {
		for (int i = 1; hydrocarbon[i] != 'H'; i++) {
			strC += hydrocarbon[i];
			indexH++; // 'H' �ε��� ��ġ - 1 
		}
	}

	c = stoi(strC);
	indexH += 2; // 'H' �ε��� ��ġ + 1 

	if (hydrocarbon[hydrocarbon.length() - 1] == 'H') {
		strH = '1';
	}
	else {
		for (int i = indexH; i < hydrocarbon.length(); i++) {
			strH += hydrocarbon[i];
		}
	}

	h = stoi(strH);
	cout << 12 * c + 1 * h;

	return 0;
}