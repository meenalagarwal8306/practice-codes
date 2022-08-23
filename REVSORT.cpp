#include <bits/stdc++.h>
using namespace std;

/*int countfrequency(vector <int> &a){
    map <int, int>m;
    int max1;
    pair<int,int>max={0,0};
    for(int i=0;i<a.size();i++){
        if(m.find(a[i])==m.end()){
            m[a[i]]=1;
        }else{
            m[a[i]]++;
        }
    }
    cout << "Reached" << endl;
    /*auto max=*std::max_element(m.begin(),m.end(),[](auto &x,auto &y){
        return x.second<y.second;
    });

    map<int, int>::iterator currentEntry;
    for (currentEntry = m.begin();currentEntry != m.end();++currentEntry) {
 
        // If this entry's value is more
        // than the max value
        // Set this entry as the max
        if (currentEntry->second > max.second) {
            max= make_pair(currentEntry->first,currentEntry->second);
        }
    }
    cout << max.second << endl;
    cout << "Reached" << endl;
    m.clear();
    return max.second;
}*/

int countfrequency(vector <int> &a){
    vector <int>m={0};
    int max;

    for(int i=0;i<a.size();i++){
        if(find(m.begin(),m.end(),a[i]) != m.end()){
            m[a[i]]++;
        }else{
            m[a[i]]=1;
        }
    }

    max=*max_element(m.begin(),m.end());
    m.clear();
    return max;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    vector <int>a;
    int n,t,freq;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        freq=countfrequency(a);
        int m=n-freq;
        cout << m << endl;
    }
    a.clear();
    return 0;

}