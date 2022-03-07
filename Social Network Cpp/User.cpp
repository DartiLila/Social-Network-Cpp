#include "Header.h"

void registerUser() {

	string Name;
	string Password;
	fstream database;

	cout << "\nShkruani emrin te cilin do e perdorini ne rrjet: ";
	cin >> Name;

	cout << "\nShkruani passwordin te cilin deshironi te perdorni: ";
	cin >> Password;

	database.open("database.txt", ios::app);
	if (database.is_open()) {
		database << Name << Password << endl;
		database.close();
	}
	main();
}

void enterUser() {

	string Name;
	string Password;
	fstream database;

	cout << "Shkruani emrin e llogarise tuaj: ";
	cin >> Name;

	cout << "Shkruani passwordin e llogarise tuaj: ";
	cin >> Password;

	database.open("database.txt", ios::in);
	if (database.is_open()) {
		string line;
		while (getline(database, line)) {
			
			if (Name.append(Password) == line) {
				
				menuUser();
			}
			else {
				cout << "\n Llogaria e mesiperme nuk egziston. ";
				main();
			}
		}
		database.close();
	}
}