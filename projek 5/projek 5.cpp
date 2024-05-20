// projek 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include"Anak.h"
#include"Ibu.h"

int main() {//agregasi
	ibu* varIbu1 = new ibu("dini");
	ibu* varIbu2= new ibu("novi");
	anak* varAnak1 = new anak("tono");
	anak* varAnak2= new anak("rini");
	anak* varAnak3 = new anak("dewi");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varIbu->tambahAnak(varAnak3);
	varIbu->tambahAnak(varAnak1);

	varIbu1->cetakAnak();
	varIbu2->cetakAnak();

	delete varIbu;
	delete varIbu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

	return 0;
}