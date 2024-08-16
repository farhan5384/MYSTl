#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>&v){
    cout<< "size"<< v.size()<<endl;
    for (int i = 0; i <v.size(); i++)
    {
         cout <<v[i]<<" ";//o(1)
    }
    v.push_back(56);
    cout<<endl;
    
}
int main(){
    // vector<int>v;// size 0
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //    int x;
    //    cin>>x;
    //     printVec(v);
    //    v.push_back(x);
    // }
    // printVec(v);
    vector<int>v(10,3);// vector size 3 and all  index filled with 3
     v.push_back(7);//o(1)
     printVec(v);//
     v.pop_back();// last value ber kore o(1)
     printVec(v);
     vector<int>v2=v;// v ke v1 er modde copy kore dibe v2 change korle v change hbe na 
      // o(n) complexity// ar jodi copy na kore v2 er maddome v er cng korte chaw
     // vector<int>&v2=v;
   v2.push_back(67);// eigula sob pass by value
//    printVec(v2);
//    printVec(v2);// func e kora push back er kono dam nai
   // but jodi oitar effect dekhte hoy taile amar reference pass korte hbe jmn 
   // function er parameter sign dite hbe 
     printVec(v2);//56 nai 
   printVec(v2);// 56 ache 

    
}