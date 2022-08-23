#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    vector <int>heights;
    int brick,ladder;
    int x;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){

        cin >> x;
        heights.push_back(x);
    }

    cin >> brick;
    cin >> ladder;

    vector <int>diff;

    for(int i=0;i<n;i++){
        x=heights[i+1]-heights[i];
        if(x<0){
            diff.push_back(0);
        }else{
            diff.push_back(x);
        }
    }

    vector <int>diffs;
    diffs=diff;

    sort(diffs.begin(),diffs.end(),greater<int>());

    int count=0;
    for(int i=0;i<diff.size();i++){
        if(diff[i]==0){
            count++;
            continue;
        }else{
            if(diff[i]==diffs[0]){
                if(ladder>0){
                    diffs.pop[0];
                    
                }
            }
        }
    }

}