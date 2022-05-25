#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string>p;
    p=make_pair(2,"abc");
    cout<<p.first<<" "<<p.second<<endl;
  pair<int,string>&p1=p;
  p1.first=5;
    cout<<p.first<<" "<<p.second<<endl;
}