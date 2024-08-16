#include <bits/stdc++.h>
using namespace std;
void print( const map<int,string>&m){
    cout<<m.size()<<endl;
    for (auto &r : m)
    {
        cout << r.first << " " << r.second<<endl;  // n*log(n)  complexity 
    }

}
int main()
{
    map<int, string> m;
    m[1] = "abc";// o(logn)
    m[5] = "cdc";
    m[3] = "erd";
    m.insert({4, "inf"});
    //m["abcd"]="abcd"; string.size()*logn for comparison purpus karon sorted order e print hbe
   // m[6];// shudu m 6 lekhlei time complexity o(logn) so bhaloi time consume korbe 
   // map<int, string>::iterator it;
    //   for ( it = m.begin(); it!=m.end(); it++)
    //   {
    //       cout<<((*it).first)<<" "<<(*it).second<<endl;// print in sorted order auto matic
    //   }
     auto it=m.find(3);  // 3 index er iterator return korbe 
   if(it!=m.end()){
     m.erase(5);// it dilew hbe  ologn
   }
   //m.clear() // for clearing the map

  
    //  if(it==m.end()){
    //     cout<<" NO VALUE";
    //  }
    //  else
    //  {
    //     cout<<((*it).first)<<" "<<(*it).second<<endl;
    //  }
     
   print(m);
    
}