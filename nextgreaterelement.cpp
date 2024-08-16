#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];

    }
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        brr[i]=-1;
    }
    
    for (int i = 0; i <n; i++)
    {
       for (int j = i+1; j <n; j++)
       {
          if (arr[i]<arr[j])
          {
            brr[i]=arr[j];
            break;
          }
         
       }
     
       
       
    }
    for (int i = 0; i < n; i++)
    {
       cout<<brr[i]<<" ";
    }
    
    
}