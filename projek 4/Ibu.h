#pragma once
#ifndef IBU_H
#define IBU_H
#include<iostream>
#include<vector>
#include <string>
#include "Anak.h"


using namespace std;
class ibu {
public:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "ibu\"" << nama << "\"ada\n";
	}
	~ibu() {
		cout << "ibu\"" << nama<<"\"tidak ada";
	}
	void tambahAnak(anak*);
	void cetakAnak();

};
void ibu::tambahAnak(anak* pAnak) {
	daftar_anak.push_back(pAnak);
}
void ibu::cetakAnak() {
	cout<<"daftar anak dari ibu \""<<this->nama<<
	for (auto& a : daftar_anak) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
#endif