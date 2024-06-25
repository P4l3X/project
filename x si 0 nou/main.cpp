#include <iostream>
#include "afisare.h"
#include <conio.h>
#include <windows.h>
#include "verificare castigator.h"
#include  <cstring>
using namespace std;

int main()
{
    char mat[3][3] = { { ' ', ' ', ' ' },
        { ' ', ' ', ' ' },
        { ' ', ' ', ' ' }
    };
    system("cls");
    char jucator ='X';
    int rand,col;
    int mutare;
    int x1,x2,x3,y1,y2,y3;
    x1=x2=x3=y1=y2=y3=4;
    cout<<"Bine ati venit la x si zero";
    for(mutare =0; mutare<9; mutare++)
    {
        afisare(mat);
        while (true)
        {
            cout << "Jucator " << jucator<< ", alegeti  rand (0-2) si coloana (0-2): ";
            cin >> rand >> col;

            if (mat[rand][col] != ' ' || rand < 0 || rand > 2 || col < 0 || col > 2)
            {
                cout << "Mutare invalida. Incearca din nou.\n";
            }
            else
                break;
        }
        mat[rand][col]=jucator;
        if(verificare(mat,jucator))
        {
            verificaresupl(mat,jucator,x1,y1,x2,y2,x3,y3);
            afisarespl(mat,x1,y1,x2,y2,x3,y3);
            cout<<"jucatorul"<<jucator<<"a castigat \n";
            break;

        }
        if(jucator=='X')
            jucator='O';
        else
            jucator='X';




    }
    afisarespl(mat,x1,y1,x2,y2,x3,y3);
    if (mutare == 9 && !verificare(mat, 'X')
            && !verificare(mat, 'O'))
    {
        cout << "Egalitate!\n";

    }
}
