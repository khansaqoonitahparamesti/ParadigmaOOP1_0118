#pragma once
#ifndef MANUSIA_H
#define MANUSIA_H

#include<iostream>
using namespace std;

class manusia {
public:
	string name;
	Jantung varjantung;

	manusia(string pName)
		:name(pName) {
		cout << name << "hidup\n";

	}
};