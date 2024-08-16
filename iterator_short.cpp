#include <bits/stdc++.h>
using namespace std;
// range based loop and auto key word

int main(){
   vector<int>v={2,3,4,5,6};
   
   cout<<endl;
   //vector<int>::iterator it=v.begin();// ei line na lkeheu loopm cholte auto use kora hoy
//    cout<<*it<<endl;
//    cout<<*(it+1);
   for ( auto it = v.begin(); it!=v.end() ;it++)
   {
      cout<<(*it)<<endl;
   }
//    for(int value : v){
//     cout <<value<<" ";
//    }
//  for(int &value : v){
//     value++;}
//   for(int value : v){
//     //value++;
//     cout <<value<<" ";// oporer loop er jonne ei loop e impact felbe na impact felte hole reference use korte hbe
  // }
vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    //vector<pair<int,int>>::iterator it;
 
    //  for(pair<int,int> value : v_p){ // auto value lekha jay
    // //value++;
    //  cout <<value.first<<" "<<value.second;
    //  }
      for(auto value : v_p){ // auto value lekha jay
       // value++;
     cout <<value.first<<" "<<value.second;
     }
    auto a=100;
    cout<<a;

}