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
	string tablicaImion[5] = {"Jan", "Anna", "Piotr", "Maria", "Krzysztof"}; // deklaracja tablicy o nazwie tablicaImion, która może przechowywać 5 elementów typu string
	tablicaImion[0] = "Janek"; // przypisanie wartości "Janek" do pierwszego elementu tablicy
	int i = 0; // deklaracja zmiennej i, która będzie używana jako licznik w pętli for
	/*
	for (; ; ) // pętla for, która iteruje od 0 do 4 (łącznie 5 iteracji)
	{
		cout << "Imię ucznia nr " << i + 1 << ": " << tablicaImion[i] << endl; // wyświetlenie imienia ucznia nr i + 1 (bo indeksowanie w tablicy zaczyna się od 0)
		i++; // zwiększenie wartości zmiennej i o 1 po każdej iteracji pętli
		if (i < 5);
		else break; // jeśli nie, to kontynuowanie pętli
	}
	*/
	while (i < 5) // pętla while, która iteruje dopóki i jest mniejsze od 5
	{
		cout << "Imię ucznia nr " << i + 1 << ": " << tablicaImion[i] << endl; // wyświetlenie imienia ucznia nr i + 1 (bo indeksowanie w tablicy zaczyna się od 0)
		i++; // zwiększenie wartości zmiennej i o 1 po każdej iteracji pętli
	}
	i = 0; // resetowanie wartości zmiennej i do 0, aby można było ponownie użyć jej w pętli do-while
	do 
	{
		cout << "Imię ucznia nr " << i + 1 << ": " << tablicaImion[i] << endl; // wyświetlenie imienia ucznia nr i + 1 (bo indeksowanie w tablicy zaczyna się od 0)
		i++; // zwiększenie wartości zmiennej i o 1 po każdej iteracji pętli
	} 
	while (i < 5); // pętla do-while, która iteruje dopóki i jest mniejsze od 5)
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
