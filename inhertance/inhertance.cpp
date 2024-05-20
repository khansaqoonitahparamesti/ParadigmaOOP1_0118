// inhertance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

class orang{
public:
	string nama;
	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n" << endl;

	 }
	~orang() {
		cout << "orang di hapu\n" << endl;
	}
	int jumlah(int a, int b) {
		return a + b;
	}
};

class pelajar :public orang {
public:
	string sekolah;
};