#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    // if (a > b)
    //     return true;
    // return false;

    // if(a.first!=b.first){
    //     if (a.first>b.first)
    //     {
    //        return true;// cmp calate false 
    //     }
    //     else return false;  // spb gula ulta korte hbe
        
    // }
    // else{
    //     if (a.second<b.second)
    //     {
    //        return true;

    //     }else return false;
        
    // }

    // cmp ke as it is use korte
    if(a.first!=b.first){
       return a.first<b.first;
        
    }
    else
       return a.second>b.second;
}
bool sorting(int a,int b){
    return a>b;// for printing decresing order
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (cmp(a[i], a[j])) // eikhanei amra comparator functa bosabo
    //         {
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }
    sort(a.begin(),a.end(),cmp);// my godness decresing order e print hocce


    cout << "final output";
     for (int i = 0; i < n; i++)
    {
        cout << a[i].first <<" "<< a[i].second<<endl;
    }


}