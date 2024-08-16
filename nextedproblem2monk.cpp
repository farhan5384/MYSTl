// print a sorted dictionary order with name and roll with nexted thing 
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,multiset<string>>m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       int marks;
       string name;
       cin>>name>>marks;
       m[marks].insert(name);
    }
    auto last_it=--m.end();
    while (true)
    {
        auto &students=(*last_it).second;
        int marks=last_it->first;
        for (auto &student : students)
        {
            cout<<student<<" "<<marks<<endl;
        }
        if(last_it==m.begin())break;
        last_it--; 
        
    }
    
    
}