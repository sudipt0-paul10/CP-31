#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long length = n;
        long long left=0,right=n-1;
        while(left<=right){
            if(s[left]!=s[right]){
                length=length-2;
            }else{
                break;
            }
            left++;
            right--;
        }
        cout<<length<<endl;
    }
    return 0;
}
