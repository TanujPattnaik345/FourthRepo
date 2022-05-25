#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair< int,int > > vp={{1,3},{5,4}};
    for (auto it:vp)
    {   it.second++;
          
        cout<<it.first<<"   "<<it.second<<endl;
    }
    return 0;
}