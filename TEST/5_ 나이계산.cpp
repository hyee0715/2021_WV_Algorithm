#include <iostream>
#include <string>
using namespace std;

int main() {
	string privateNumber;
	getline(cin, privateNumber);

	int realAge, year;

	// �¾ ���� ���ϱ� (���ڴ� �ƽ�Ű�ڵ�� �νĵǹǷ� -48�� ���־�� �Ѵ�.) 
	if (privateNumber[0] != '0')
		year = 1900 + ((privateNumber[0] - 48) * 10 + (privateNumber[1] - 48));
	else
		year = 2000 + (privateNumber[0] - 48) * 10 + (privateNumber[1] - 48);

	// ���� ���ϱ� 
	realAge = 2019 - year + 1;

	if (privateNumber[7] == '1' || privateNumber[7] == '3') {
		cout << realAge << " M";
	}
	else if (privateNumber[7] == '2' || privateNumber[7] == '4') {
		cout << realAge << " W";
	}


	return 0;
}