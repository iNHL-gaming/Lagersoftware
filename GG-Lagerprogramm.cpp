// GG-Lagerprogramm.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <map>
#include <unordered_map>
#include <windows.h>
#include <locale>
#include <cwchar>
#include <ctime>
#include <locale.h>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;



int load() {
	system("color 2f");
	system("color 0e");
	cout << "Initialisiere POST <Power on Self Test>";
	Sleep(1000);
	char a = 177, b = 219;
	cout << "\n\n\n\t\t\t\t\tLoading...";
	cout << "\n\n\n";
	cout << "\t\t\t\t\t";

	for (int i = 0; i <= 25; i++)
		cout << a;
		Sleep(150);
	cout << "\r";
	cout << "\t\t\t\t\t";
	for (int i = 0; i <= 25; i++) {
		cout << b;
		Sleep(200);
	}
	//system("pause>0")

	system("cls");
	Sleep(100);
	return 0;
}

int finish() {
	setlocale(LC_ALL, "de_DE.UTF-8");
	system("color 0A");

	cout << "\n";
	cout << "POST Abgeschlossen" << endl;
	cout << "Lade Hashmap..." << endl; 
	Sleep(500);

	return 0;
}

int main()
{
	load();
	finish();
	
	setlocale(LC_ALL, "de_DE.UTF-8");
	
	unordered_map<string, string> lager;
	unordered_map<string, string>::iterator cursor;
	lager["item"] = "Ort und Shelter";
	lager["item2"] = "Ort2 und Shelter2"; 

	cout << "Item\tOrt" << endl;
	cout << "----\t---" << endl;
	
	for (cursor = lager.begin(); cursor != lager.end(); cursor++)
	{
		cout << cursor->first;
		cout << "\t" << cursor->second << "\n" << endl;
	}

	Sleep(2000);
	system("cls");

	string server = "cb15";
	string const productkey = "361cf05a";


	string activate;
	cout << "Füge deine key.dat in den Selben Ordner ein wie das Programm auch und entferne diesen nicht!" << endl;

	Sleep(600);
	fstream keyfile;
	//keyfile.open("key.dat", ios::out);
	//if (!keyfile) {
	//	cout << "konnte Key nicht schreiben";
	//}
	//keyfile << productkey;
	//keyfile.close();

	keyfile.open("key.dat", ios::in);
	if (!keyfile) {

		cout << "Keyfile konnte nicht gelesen werden!";
		return 0;
	}
	cout << "Dein Key wird überprüft" << endl;
	keyfile >> activate;
	keyfile.close();

	

	if (activate == productkey) {
		cout << "Sie haben einen gültigen Key!" << endl;
		goto execfunction;
	}
	else {
		return 0;
	execfunction:
		while (true) {
			system("cls");
			cout << "Diese Software wurde von Sebastian Roz geschrieben" << endl;
			cout << "Hallo YukiHai, willkommen zurück!" << endl;
			cout << "Du befindest dich auf CB15" << endl;
			cout << "Bitte gebe den Item-Namen ein den du suchst" << endl;

			string item;
			cin >> item;

			cout << "Dursuche die Datenbank" << endl;
			cout << "\n";
			cout << "Item\tOrt" << endl;
			cout << "----\t---" << endl;

			auto it = lager.find(item);
			if (it != lager.end())
				cout << item << "\t" << it->second << endl;
			else
				cout << item << "ist zwar in der Map hat aber keinen ORT!!!" << endl;
			//cout << lager[item] << endl;
			
			
			
			cout << "----\t---" << endl;
			Sleep(1000);
			cout << "Klicke nun [ENTER] um fortzufahren!";
			system("pause>0");
		}
	}


















}

// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
