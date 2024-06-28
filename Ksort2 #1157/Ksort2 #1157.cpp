#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n,k,x;
    vector <int> V,B;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(i<=k)
        V.push_back(x);
        else
            B.push_back(x);
    }
    //sort(V.begin(),V.at(k));
    //sort(V.at(k),V.end());
 sort(V.begin(),V.end());
 sort(B.begin(),B.end());
 int j=B.size()-1;
  for(int i=0;i<n;i++)
    {

        if(i<=k)
        cout<<V[i]<<" ";
        else
            {cout<<B[j]<<" ";
            j--; }
    }
}
