#pragma once
#ifndef IBU_H
#define IBU_H
#include<iostream>
#include<vector>
#include <string>


using namespace std;
class ibu {
public:
	string nama;
	vector<Anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "ibu\"" << nama << "\"ada\n";
	}
	~ibu() {
		cout << "ibu\"" << nama<<"\"tidak ada";
	}
	void tambahAnak(Anak*);
	void cetakAnak();

};
void ibu::tambahAnak(Anak* pAnak) {
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