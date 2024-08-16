#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v) {
    cout << "size " << v.size() << endl;  // Added space after "size"
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> v; // vector of vectors with dynamic row and colom with .pushback and .popback function

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        vector<int>temp;// v.push_back(vector<int>()) kora jay
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            temp.push_back(x);// v[i].push_back(x)
           
        }
        v.push_back(temp);// tokon eita lagbe na
    }
    v[0].push_back(10);
    v.push_back(vector<int>());//empty vector pushed 

    for (int i = 0; i < v.size(); i++) {
        printVec(v[i]);
    }
   // cout<<v[0][0];// 0 number vector er 0th element kind of 2d vector where number of colom vary kore

    return 0;
}
