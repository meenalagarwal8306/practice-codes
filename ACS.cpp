#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int t,p;

    cin >> t;
    while(t--){
        cin >> p;
        if(p==0){
            cout << "0" << endl;
            continue;
        }
        int ans=0;
        ans+=p/100;
        ans+=p%100;

        if(ans>10){
            cout << "-1" << endl;
        }else{
            cout << ans << endl;
        }

        
    }

}