#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	cout << "이은석의 행복한 VC++\n\n";
	char c = '_';
	while (true)
	{
		cout << "command>";
		c = _getch();
		cout << c;
		switch (c) {
		case 'q':
			cout << " qwer 화이팅\n";
			break;
		case 'w':
			cout << " 과제 너무 좋다\n";
			break;
		case 'e':
			cout << " 담주부턴 과제량 3배다\n";
			break;
		case 'r':
			cout << " 행복합니다\n";
			break;
		case 27 :
			return 0;
		default:
			cout << " error\n";
			break;
		}
	}
}
