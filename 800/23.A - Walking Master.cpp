#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long a,b,c,d;
        cin >>a>>b>>c>>d;
        if(b>d){
            cout<<-1<<endl;
            continue;
        }
        int moves=d-b;
        a+=moves;
        if(a<c){
            cout<<-1<<endl;
            continue;
        }
        moves+=(a-c);
        cout<<moves<<endl;
    }
    return 0;
}
