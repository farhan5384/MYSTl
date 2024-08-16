#include<bits/stdc++.h>
using namespace std;
int main(){
  pair<int,string>p;
  p=make_pair(2,"abc");
  //cout<<p.first<<" "<<p.second;
  //pair<int,string>p1=p;
  //p1.first=3;// change hbe na cz jdt copy hoise 
  cout<<p.first<<" "<<p.second<<endl;
  //cout<<p1.first<<" "<<p1.second;// p1 e change hbe shudu
  pair<int,string>&p1=p;// eita korar jonne p1 e change anle p e chnage asbe
   p1.first=5;

  cout<<p.first<<" "<<p.second<<endl;//reference use koray duitai chnage hoise

  cout<<p1.first<<" "<<p1.second<<endl;
  int a[]={1,4,5};
  int b[]={3,56,67};
  pair<int,int>p_array[3];
  p_array[0]={1,3};
  p_array[1]={4,56};
  p_array[2]={5,67};
  for (int i = 0; i <3; i++)
  {
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
  }
  swap(p_array[0],p_array[2]);
  cout<<"swapped array"<<endl;
  for (int i = 0; i <3; i++)
  {
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
  }
  

// i can also take input for pairs;
pair<int,string>p3;
cin>>p3.first>>p3.second;
cout<<p3.first<<" "<<p3.second;



}