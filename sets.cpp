#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s){
    // for( string value: s){
    //     cout<<value <<endl;
    // }
    for (auto it=s.begin();it!=s.end();it++)
    {
       cout << (*it)<<endl;
    }
    
}
int main(){
       set<string>s;
       s.insert("abc");//log(n)
       s.insert("dfgd");
       s.insert("bgfh");
       auto it= s.find("abc");
     //if (it!=s.end())
    //{
     //cout<<(*it);log(n)
    //}
        if (it!=s.end())
       {
         s.erase(it);
       }
       
    s.erase("bgfh");//log(n)

       print(s);


}