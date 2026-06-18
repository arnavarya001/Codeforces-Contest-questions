#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
while (t--) {
        int n;
        cin >> n;
vector<int> h(n);
     for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
   int mn = *min_element(h.begin(), h.end());
int mx = *max_element(h.begin(), h.end());
 cout << mx - mn + 1 << endl;
    }

    return 0;
}