#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long > a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long l=0,r=0,maxLen=0;
        while(r<n){
            if(a[r]==0){
                maxLen=max(maxLen,r-l+1);
                r++;
            }else{
                r++;
                l=r;
            }
        }
        cout<<maxLen<<endl;
    }
    return 0;
}
