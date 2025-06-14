#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >>t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll curr_length=1,max_length=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                curr_length++;
            }else{
                max_length=max(curr_length,max_length);
                curr_length=1;
            }
        }
        max_length=max(max_length,curr_length);
        cout<<max_length+1<<endl;
    }
    return 0;
}
