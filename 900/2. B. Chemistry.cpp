#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int> mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        long long odd_cnt=0;
        for(auto it:mpp){
            if(it.second%2==1){
                odd_cnt++;
            }
        }
        if(odd_cnt>k+1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
