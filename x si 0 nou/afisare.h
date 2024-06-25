#ifndef AFISARE_H_INCLUDED
#define AFISARE_H_INCLUDED
using namespace std;

const string albastru="\033[31m";
const string verde="\033[32m";
const string normal ="\033[0m";
const string clra="\033[33m";
using namespace std;
void afisare (char mat[3][3])
{
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            if(mat[i][j]=='X')cout << albastru<<mat[i][j]<<normal << " | ";
            else
                cout << verde<<mat[i][j]<<normal << " | ";
        }
        cout << "\n-------------\n";
    }
}
void afisarespl(char mat[3][3],int x1,int y1,int x2,int y2,int x3,int y3)
{cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            if(mat[i][j]=='X')
            {
                if((i==x1&&j==y1)||(i==x2&&j==y2)||(i==x3&&j==y3))
                      cout<<clra<<mat[i][j]<<normal<<"|";
                    else cout << albastru<<mat[i][j]<<normal << " | ";
            }
            else
              {
                  if((i==x1&&j==y1)||(i==x2&&j==y2)||(i==x3&&j==y3))
                      cout<<clra<<mat[i][j]<<normal<<" |";
                      else cout << verde<<mat[i][j]<<normal << " | ";
              }
        }
        cout << "\n-------------\n";

}

#endif // AFISARE_H_INCLUDED
