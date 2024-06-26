#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
ifstream fin ("statisticiordine.in");
ofstream out ("statisticiordine.out");
int main()
{ long long x,n,k;
fin >>n>>k;
vector <long long> V;
     for(long long i=0;i<n;i++)
    {  fin>>x;

        V.push_back(x);
    }
    sort(V.begin(),V.end());
    int i,nr=0;
   for(i=1;i<=n;i++)
   {
       if(V[i]!=V[i-1])
        nr++;
       if(nr==k)
        break;
   }
   out<<V[i];
}
