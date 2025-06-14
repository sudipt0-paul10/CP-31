#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll k = 0;
        for (ll i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                ll diff = abs(arr[i] - (i + 1));
                k = (k == 0 ? diff : gcd(k, diff));
            }
        }
        cout << k << '\n';
    }
    return 0;
}
