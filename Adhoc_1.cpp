#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int t,count;
    cin>>t;
    count = 0;

    while(t--){
        string s;
        cin>>s;

        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                count++;
                
            }else{
                count = 0;
                break;
            }
        }
        //cout << s.size() << endl;

        cout << s;

    }
    return 0;
}