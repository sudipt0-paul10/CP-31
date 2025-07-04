#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >>t;
    while(t--){
        ll n,q;
        cin >> n>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        //total sum of array
        ll old_sum =0;
        for(int i=0;i<n;i++){
            old_sum +=a[i];
        }

        //prefix sum of array
        vector<int> prefix(n+1,0);
        for(int i=1;i<=n;i++){
            prefix[i]=prefix[i-1]+a[i-1];
        }
        //handling the queries
        while(q--){
            ll l,r,k;
            cin >> l>> r>>k;
            ll old_seg_sum = prefix[r]-prefix[l-1];
            ll new_seg_sum = k*(r-l+1);
            ll new_sum = old_sum-old_seg_sum+new_seg_sum;
            if(new_sum%2==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
