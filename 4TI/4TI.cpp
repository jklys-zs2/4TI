// 4TI.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

/*
 Komentarz w bloku.
*/

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

int main()
{
	// Ustawienie kodowania konsoli na UTF-8, aby poprawnie wyświetlać polskie znaki
#ifdef _WIN32
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
#endif
	setlocale(LC_ALL, "Polish");
	int wiekUczniaLata = 0; // nie stosuje nazwy typu int wiek = 15; bo nie wiadomo czy to wiek w latach czy w miesiącach
	float wagaUczniaKg = 50.5; // nie stosuje nazwy typu float kg = 50.5; bo nie wiadomo czy to waga w kg czy funtach
	double wzrostUczniaM = 1.75; // nie stosuje nazwy typu double m = 1.75; bo nie wiadomo czy to w metrach czy w stopach
	// zmienna double jest zmienną podwójnej precyzji, czyli może przechowywać liczby zmiennoprzecinkowe z większą dokładnością niż zmienna float
	char plecUcznia = 'M'; // nie stosuje nazwy typu char p = 'M'; bo nie wiadomo czy to płeć czy coś innego
	string imieUcznia = "Jan"; // nie stosuje nazwy typu string i = "Jan"; bo nie wiadomo czy to imię czy coś innego
	bool czyUczenJestPelnoletni = false; // nie stosuje nazwy typu bool b = false; bo nie wiadomo czy to jest zmienna logiczna czy coś innego
	cout << "Podaj wiek ucznia w latach: "; // << to operator przesunięcia bitowego w lewo, ale w tym przypadku jest używany do wyświetlania tekstu na ekranie
	cin >> wiekUczniaLata; // >> to operator przesunięcia bitowego w prawo, ale w tym przypadku jest używany do wczytywania danych z klawiatury
	if (wiekUczniaLata >= 18)czyUczenJestPelnoletni = true; // jeśli wiek ucznia jest większy lub równy 18 lat, to zmienna czyUczenJestPelnoletni przyjmuje wartość true
	else czyUczenJestPelnoletni = false; // jeśli wiek ucznia jest mniejszy niż 18 lat, to zmienna czyUczenJestPelnoletni przyjmuje wartość false
    if (czyUczenJestPelnoletni) 
	{
		cout << "Uczen jest pelnoletni.\n"; // \n to znak nowej linii, czyli przejście do nowego wiersza
	}
	else
	{
		cout << "Uczen nie jest pelnoletni." << endl; // endl to znak nowej linii, czyli przejście do nowego wiersza
	}
	// cout << "Imie ucznia: " << imieUcznia << endl;
	imieUcznia[0] = 'K'; // zmiana pierwszej litery imienia ucznia na 'K'
	for (int i = 0; i < 3; i++)cout << imieUcznia[i]; // pętla for, która wykonuje się 3 razy
	cout << endl; // przejście do nowego wiersza
    cout << "Koniec działania programu" << endl;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
