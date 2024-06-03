#include <iostream>
#include <string>
#include "chess.h"

using namespace std;

int main()
{
    Board b;
    string s;
    bool newgame = true;
    cout << "Wpisz dowolny znak i kliknij Enter, aby zacząć" << endl;
    cin >> s;
    while(newgame){
        cout << "Czy chcesz wczytac gre? (y/n)";
        cin >> s;
        if (s == "y")
        {
            cout << "Podaj nazwe pliku: ";
            cin >> s;
            b.loadGame(s);
        }
        b.setBoard();
        while (b.playGame());
        cout << "Czy chcesz zapisac gre? (y/n)";
        cin >> s;
        if (s == "y")
        {
            cout << "Podaj nazwe pliku: ";
            cin >> s;
            b.saveGame(s);
        }
        cout << "Czy chcesz zagrać ponownie? (y/n)";
        cin >> s;
        if (s != "y")
            newgame = false;
    }


    return 0;
}