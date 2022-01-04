// Program potwierdzający czy to jesteś naprawdę ty...

#include <iostream>
#include <bits/stdc++.h>
// #include <marian.h>
using namespace std;

string imie;
string nazwisko;
long int wzrost;
string adres_mailowy;


int main()
{
  cout << "Witaj w programie!\nWpisz swoje dane...\nPodaj imię: \n";
  cin >> imie;
  cout << "Podaj nazwisko: \n";
  cin >> nazwisko;
  cout << "Podaj wzrost: \n";
  cin >> wzrost;
  cout << "Podaj swój login: \n";
  cin >> adres_mailowy;

  if(imie == "Marcin" && nazwisko == "Hesse" && wzrost == 172 && adres_mailowy == "marcinhesse@lo.bytow.pl")
  {
    cout << "Witaj Marcin Hesse, mamy potwierdzenie, że to ty!\n";
  }
  else if(imie == "Laura" && nazwisko == "Mach" && wzrost == 169 &&  adres_mailowy == "lauramach@lo.bytow.pl")
  {
    cout << "Witaj Laaaaauuuuraaaaa! Uzyskałaś dostęp do MovieStarPlanet!!!!!!\n";
  }
  else if(imie == "Marian" && nazwisko == "Huja" && wzrost == 182 && adres_mailowy == "marianhuja@lo.bytow.pl")
  {
    cout << "Witaj Marian Huja! Mamy Twoje dane! Dawaj diaxy albo dom Ci wysadze!\n";
  }
  else if(imie == "Nikodem" && nazwisko == "Niciejewski" && wzrost == 182 && adres_mailowy == "nikodemniciejewski@lo.bytow.pl")
  {
    cout << "Witaj Nikodem Niciejewski! Obiaaaaaaad!\n";
  }
  else 
  {
    cout << "Ty nie Laaaaauuuuraaaaa ani Marcin ani nawet Marian Huja ani kurwa nawet Nikodem!\n" << "Won z mojego lasu, bo ci łeb utne!\n";
  }

  return 0;
}



