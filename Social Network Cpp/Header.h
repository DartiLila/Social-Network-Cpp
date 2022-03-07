#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <sstream>
using namespace std;

void registerUser();
void enterUser();
void menuKryesore();
void menuUser();
void Menu4();
int main();

class User {

	string Name;
	string Password;

public:

	User(string N, string P) {

		Name = N;
		Password = P;


	};

	string getName() {
		return Name;
	}
	void setName(string N) {
		Name = N;
	}
	string getPass() {
		return Password;
	}
	void setPass(string P) {
		Password = P;
	}

};
