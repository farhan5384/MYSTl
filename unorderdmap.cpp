#include <bits/stdc++.h>
using namespace std;
void print( const unordered_map<int,string>&m){
    cout<<m.size()<<endl;
    for (auto &r : m)
    {
        cout << r.first << " " << r.second<<endl;  // n*log(n)  complexity 
    }

}
int main()
{
   unordered_map<int, string> m;
    m[1] = "abc";// o(1)
    m[5] = "cdc";
    m[3] = "erd";
    m.insert({4, "inf"});
  
     
   print(m);// print in random order 
    
}