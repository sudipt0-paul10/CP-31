#include <bits/stdc++.h>
using namespace std;
int dx[4]={-1,+1,-1,+1},dy[4]={-1,-1,+1,+1};
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a>>b;
        long long x_king,y_king;
        cin >> x_king>>y_king;
        long long x_queen,y_queen;
        cin >> x_queen>>y_queen;
        set<pair<int,int> > king_hits,queen_hits;
        for(int i=0;i<4;i++){
            king_hits.insert({x_king+dx[i]*a,y_king+dy[i]*b});
            king_hits.insert({x_king+dx[i]*b,y_king+dy[i]*a});
            
            queen_hits.insert({x_queen+dx[i]*a,y_queen+dy[i]*b});
            queen_hits.insert({x_queen+dx[i]*b,y_queen+dy[i]*a});
        }
        int cnt=0;
        for(auto it:king_hits){
            if(queen_hits.find(it)!=queen_hits.end()){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
