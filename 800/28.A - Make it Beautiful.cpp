#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        long long min_no = a[0];
        long long max_no=a[n-1];
        if(min_no==max_no){ //checks for distinct no 
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<max_no<<" ";
            for(int i=0;i<n-1;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
