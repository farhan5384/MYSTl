/* given  n strings ,print unique strings in lexographical order with their frequency 
N= 10^5
S<=100  */


#include <bits/stdc++.h>
using namespace std;
void print( const map<string ,int>&m){
    cout<<m.size()<<endl;
    for (auto &r : m)
    {
        cout << r.first << " " << r.second<<endl;  // n*log(n)  complexity 
    }

}
int main()
{
    map< string, int >m;
     int N;
     cin >>N;
     for (int i = 0; i < N; i++)
     { 
       // int ct=0;
        string s;
        cin>>s;
      m[s]=m[s]+1;
     }
     print(m);
   

}