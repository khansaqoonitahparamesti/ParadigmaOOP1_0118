#pragma once
#ifndef ANAK_H
#define ANAK_H

#include<iostream>

using namespace std;

class anak {
public:
	string nama;
	anak(string pNama) :nama(pNama) {
		cout << "anak\"" << nama << "\"ada\n";
	}
};