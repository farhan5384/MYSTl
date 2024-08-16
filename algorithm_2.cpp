#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
       cin>>v[i];
    }

    auto it=min_element(v.begin(),v.end());// jototukl eer modde khujo
    auto it_2=max_element(v.begin(),v.end());
    int sum =accumulate(v.begin(),v.end(),0);// initial sum =0
    int ct =count(v.begin(),v.end(),5);// jar count print korte caci
    auto element=find(v.begin(),v.end(),9);// jake find korbo
    reverse(v.begin(),v.end());// not copy oi jinishtai reverse hbe 
    string s="abhjjahdbwu";
    reverse(s.begin(),s.end());
    cout<<*it<<endl;
    cout<<*it_2<<endl;
    cout<<sum<<endl;
    cout<<ct<<endl;
    cout<<*element<<endl;
    for(auto val : v){
        cout<<val <<" "<<endl;
    }
    cout<<s;
    // sob o(n) e kaj kore ,count and find vector or array te o(n)  but maps or sets a log(n) operation e kaj kore 
    
}