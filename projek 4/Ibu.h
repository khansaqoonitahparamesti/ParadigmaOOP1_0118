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

};