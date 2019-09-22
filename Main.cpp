#include <stdio.h>
#include <iostream>
#include <conio.h>
#include "MyLib.h";
using namespace std;

int menu();
int main()
{
	setlocale(LC_ALL, "Russian");
	int answer = menu();
	switch (answer)
	{
	case 0: case_5(); break;
	case 1: case_7(); break;
	case 2: case_10(); break;
	case 3: case_14(); break;
	case 4: case_15(); break;
	case 5: for_10(); break;
	case 6: for_15(); break;
	case 7: for_20(); break;
	case 8: for_30(); break;
	case 9: for_40(); break;
	case 10: while_5(); break;
	case 11: while_10(); break;
	case 12: while_20(); break;
	case 13: while_25(); break;
	case 14: while_30(); return 0;
	}
	system("pause");
	return 0;
}

int menu() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 15) % 15;
		if (key == 0) cout << "-> Case 5" << endl;
		else  cout << "   Case 5" << endl;
		if (key == 1) cout << "-> Case 7" << endl;
		else  cout << "   Case 7" << endl;
		if (key == 2) cout << "-> Case 10" << endl;
		else  cout << "   Case 10" << endl;
		if (key == 3) cout << "-> Case 14" << endl;
		else  cout << "   Case 14" << endl;
		if (key == 4) cout << "-> Case 15" << endl;
		else  cout << "   Case 15" << endl;
		if (key == 5) cout << "-> For 10" << endl;
		else  cout << "   For 10" << endl;
		if (key == 6) cout << "-> For 15" << endl;
		else  cout << "   For 15" << endl;
		if (key == 7) cout << "-> For 20" << endl;
		else  cout << "   For 20" << endl;
		if (key == 8) cout << "-> For 30" << endl;
		else  cout << "   For 30" << endl;
		if (key == 9) cout << "-> For 40" << endl;
		else  cout << "   For 40" << endl;
		if (key == 10) cout << "-> While 5" << endl;
		else  cout << "   While 5" << endl;
		if (key == 11) cout << "-> While 10" << endl;
		else  cout << "   While 10" << endl;
		if (key == 12) cout << "-> While 20" << endl;
		else  cout << "   While 20" << endl;
		if (key == 13) cout << "-> While 25" << endl;
		else  cout << "   While 25" << endl;
		if (key == 14) cout << "-> While 30" << endl;
		else  cout << "   While 30" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}


