#include <bits/stdc++.h>
using namespace std;
int maxOfArray(int arr[], int n)
{
    int max = arr[0];
    int idx=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            int idx = i;
        }
    }
    //arr[idx]= max/2;
    return max;
}
void maxIndex(int arr[], int n)
{
    int max = arr[0];
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
           max = arr[i];
            idx = i;
        }
    }
    arr[idx]= max/2;
}
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int total = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   // total = maxOfArray(arr, n);
    for (int i = 1; i <=k; i++)
    {
        total+=maxOfArray(arr,n);
        maxIndex(arr,n);
    }
    cout<<total;
    
}