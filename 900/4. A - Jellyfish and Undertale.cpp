#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin >>t;
    while(t--){
        ll a,b,n;
        cin >>a>>b>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        ll max_time=b;
        for(int i=0;i<n;i++){
            max_time+=min(arr[i],a-1);
        }
        cout<<max_time<<endl;
    }
    return 0;
}
