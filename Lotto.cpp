#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;


int main() {
	string input;
	cout << "Program, ktory symuluje losowanie LOTTO. " << endl;
	cout << "Aby rozpoczac losowanie wprowadz dowolny znak i zatwierdz ENTER... " << endl;
	cout << "Lub aby zakonczyc wpisz EXIT..." << endl << endl;
	cin >> input;
	system("cls");
	start:
	cout << "Oto wyniki dzisiejszego losowania: " << endl << endl;
	int liczba[6], t;

	for (int i = 1; i < 7; i++){
		srand(t = time(0));
		liczba[i] = rand() % 49;
		if(liczba[i] == 0 || liczba[i] == liczba[i-1] || liczba[i] == liczba[i-2] || liczba[i] == liczba[i-3] || liczba[i] == liczba[i-4] || liczba[i] == liczba[i-5]){
		i--;
		continue;}
		cout << "\tLiczba nr: " << i << "\tWylosowana liczba to: " << liczba[i] << endl;
		Sleep(3000);
}

cout << "\nDziekujemy za udzial w losowaniu :)" << endl;
cout << "\nPonowic losowanie? Wprowadz dowolny znak, zatwierdz ENTER'em. " << endl;
cout << "Lub jezeli chcesz wyjsc napisz EXIT. " << endl;

cin >> input;
if (input == "EXIT"){
	return 0;
}
system("cls");
goto start;

	return 0;
}
