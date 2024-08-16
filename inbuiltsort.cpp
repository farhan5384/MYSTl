#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // sort(arr+2,arr+5);// jekhan theke sort suru korbo , jekhane ses korbo tar porer digit er pointer
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // vector sort
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin()+2, arr.end()); // jekhan theke sort suru korbo , jekhane ses korbo tar porer digit er pointer nlog(n) complexity
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}