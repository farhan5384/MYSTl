#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v) {
    cout << "size " << v.size() << endl;  // Added space after "size"
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main() {
   // vector<pair<int, int>> v = {{1, 3}, {3, 4}, {2, 3}};  // Initialize vector with pairs
   // printVec(v);
   // i can also take input 
   vector<pair<int, int>> v;
   int n;
   cin>>n;
   for (int i = 0; i <n; i++)
   {
      int x,y;
      cin>>x>>y;
      v.push_back({x,y});
      // other syntax might be like this  v.push_back(make_pair(x,y));

   }
   printVec(v);
}
