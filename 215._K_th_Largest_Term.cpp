#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    vector <int>nums;
    int k,n,t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            nums.push_back(x);
        }

        sort(nums.begin(),nums.end(),greater<int>());

        cout << nums[k-1] << endl;

    }
    

}