#include <bits/stdc++.h>
using namespace std;

int main() {
//   int n=  [](int x,int y){return x+y;}(4,7);
//   cout<<n;
  // jodi reuse korte hoy
  auto sum=[](int x,int y){return x+y;};
  //cout<<sum(3,4);
  vector<int>v={-1,-2,-3};
 cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});// sob gula element er opor proyog hocce er function er kaj ta ekta false hoilei 0 retirn korbe 
 // lamda na diye ami oikhane user func o dite pari
 cout<<any_of(v.begin(),v.end(),[](int x){return x>0;});// ektaw jodi mathch kore taile true sob false hole then 0
 cout<<none_of(v.begin(),v.end(),[](int x){return x>0;});// kew  jodi na mane shudu tokoni true return korbe ,ekjon manlew false 
}