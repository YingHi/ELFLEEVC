#include <iostream>
#include <conio.h>
#include <vector>
#include <chrono>

using namespace std;
vector<int> Combo;
chrono::duration<double> sec;
chrono::system_clock::time_point start;
bool Stacking;

vector<int> Combo1 = { 80,77,75 }; // 아래 오른쪽 왼쪽
vector<int> Combo2 = { 80,72,80 }; // 아래 위 아래
vector<int> Combo3 = { 75,72,77 }; // 좌측 위 오른쪽

void Reset() {
	Stacking = false;
	Combo.clear();
}

void ComboAct() {
	if (Combo == Combo1) {
		cout << "아도겐! =o\n";
	}
	else if (Combo == Combo2) {
		cout << "내려찍기! (대충 개패는 소리)\n";
	}
	else if (Combo == Combo3) {
		cout << "지건! =>> \n";
	}
	else {
		cout << "콤보를 제대로 넣으세요\n";
	}
	Reset();
}

void ComboStack() {
	if (_kbhit()) {
		if (_getch() == 224) {
			Combo.push_back(_getch());
		}
	}
	sec = chrono::system_clock::now() - start;
	if (sec >= chrono::milliseconds(300)) {
		ComboAct();
		return;
	}
	
	
}

int main() {
	Reset();
	while (1) {
		if (Stacking) {
			ComboStack();
		}
		else {
			if (_kbhit()) {
				if (_getch() == 224) {
					Combo.push_back(_getch());
					start = std::chrono::system_clock::now();
					Stacking = true;
				}
			}
		}
	}
	
	


	return 0;
}
