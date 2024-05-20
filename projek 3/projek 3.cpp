// projek 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

#include "jantung.h"
#include "manusia.h"


int main() {
	manusia* varManusia = new manusia("jono");
	delete varManusia;
	return 0;
}