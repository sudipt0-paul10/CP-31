#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >>t;
    while(t--){
        long long n;
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long tot_cnt=0,cnt=0;
        long long ans=-1;
        for(int i=0;i<n;i++){
            if(a[i]==2){
                tot_cnt++;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==2){
                cnt++;
            }
            if(cnt==(tot_cnt-cnt)){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
