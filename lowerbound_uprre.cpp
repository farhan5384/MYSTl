#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the size of the array
    int a[n];

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort the array
    sort(a, a + n);

    // Print the sorted array++
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Find the lower bound of the element 5
    int *ptr_1 = lower_bound(a, a + n, 5);// olog(n)   restricted range o hote pare 
    int *ptr_2 = upper_bound(a, a + n, 5);//olog(n)


    // Check if the lower bound was found within the array bounds
    if (ptr_1 != (a + n)) {
        cout << (*ptr_1) << endl;
    } else {
        cout << "Element 5 not found" << endl;
    }
    if (ptr_2 != (a + n)) {
        cout << (*ptr_2) << endl;
    } else {
        cout << "Element 5 not found" << endl;
    }

    return 0;
}
//  for vector
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  // Read the size of the vector
//     vector<int> a(n);

//     // Read the elements of the vector
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     // Sort the vector
//     sort(a.begin(), a.end());

//     // Print the sorted vector
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     // Find the lower bound of the element 5
//     auto ptr = lower_bound(a.begin(), a.end(), 5);

//     // Check if the lower bound was found within the vector bounds
//     if (ptr != a.end()) {
//         cout << (*ptr) << endl;
//     } else {
//         cout << "Element 5 not found" << endl;
//     }

//     return 0;
// }
// set
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  // Read the number of elements
//     set<int> s;

//     // Read the elements and insert them into the set
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         s.insert(x);
//     }

//     // Print the elements of the set (automatically sorted)
//     for (auto it = s.begin(); it != s.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;

//     // Find the lower bound of the element 5
//     auto it = s.lower_bound(5);

//     // Check if the lower bound was found within the set bounds
//     if (it != s.end()) {
//         cout << (*it) << endl;
//     } else {
//         cout << "Element 5 not found" << endl;
//     }

//     return 0;
// }

// same for map
#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n;
//     cin >> n;  // Read the number of elements
//     map<int, bool> m;

//     // Read the elements and insert them into the map
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         m[x] = true;  // Insert element with value true
//     }

//     // Print the keys of the map (automatically sorted)
//     for (auto it = m.begin(); it != m.end(); ++it) {
//         cout << it->first << " ";
//     }
//     cout << endl;

//     // Find the lower bound of the element 5
//     auto it = m.lower_bound(5);

//     // Check if the lower bound was found within the map bounds
//     if (it != m.end()) {
//         cout << it->first << endl;
//     } else {
//         cout << "Element 5 not found" << endl;
//     }

//     return 0;
// }

