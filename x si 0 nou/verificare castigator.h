#ifndef VERIFICARE_CASTIGATOR_H_INCLUDED
#define VERIFICARE_CASTIGATOR_H_INCLUDED
using namespace std;
bool verificare(char mat[3][3], char jucator)
{

    for (int i = 0; i < 3; i++)
    {
        if (mat[i][0] == jucator && mat [i][1] == jucator
                && mat[i][2] == jucator)
            return true;
        if (mat[0][i] == jucator && mat[1][i] == jucator
                && mat[2][i] == jucator)
            return true;
    }
    if (mat[0][0] == jucator && mat[1][1] == jucator
            && mat[2][2] == jucator)
        return true;
    if (mat[0][2] == jucator && mat[1][1] == jucator
            && mat[2][0] == jucator)
        return true;
    return false;
}
void verificaresupl(char mat[3][3],char jucator,int &x1,int &y1,int &x2,int &y2,int &x3,int &y3 )
{
    for (int i = 0; i < 3; i++)
    {
        if (mat[i][0] == jucator && mat [i][1] == jucator
                && mat[i][2] == jucator)
        {
            x1=i;
            x2=i;
            x3=i;
            y3=2;
            y2=1;
            y1=0;
        }
        if (mat[0][i] == jucator && mat[1][i] == jucator
                && mat[2][i] == jucator)
        {
            x1=0;
            x2=1;
            x3=2;
            y3=i;
            y2=i;
            y1=i;
        }
    }
    if (mat[0][0] == jucator && mat[1][1] == jucator
            && mat[2][2] == jucator)
    {
        x1=0;
        x2=1;
        x3=2;
        y3=2;
        y2=1;
        y1=0;
    }
    if (mat[0][2] == jucator && mat[1][1] == jucator
            && mat[2][0] == jucator)
    {
        x1=0;
        x2=1;
        x3=2;
        y3=0;
        y2=1;
        y1=2;
    }
}
#endif // VERIFICARE_CASTIGATOR_H_INCLUDED
