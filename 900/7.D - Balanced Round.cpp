#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        sort(a.begin(),a.end());
        ll cnt =1,maxcnt=1;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]<=k){
                cnt++;
            }else{
                cnt=1;
            }
            maxcnt=max(maxcnt,cnt);
        }
        cout<<n-maxcnt<<endl;
    }
    return 0;
}
