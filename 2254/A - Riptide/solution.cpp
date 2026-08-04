#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
 
        int ans = 0;
 
        while (true) {
            sort(a, a + 3);
 
            if (a[0] == a[1] || a[1] == a[2])
                break;
 
            a[0]++;  
            a[2]--;  
 
            ans++;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}