#include<bits/stdc++.h>
using namespace std;

void grid(int x,int y){

    for(int i=0;i<y;i++){
        cout<<i+1<<" ";
        cout<<endl;
    }

    int p=x+2;

    for(int i=1;i<x;i++){ 
        int fat=p;
        cout<<fat<<" ";
        for(int j=1;j<y;j++){
            cout<<fat+i+1<<" ";
            fat+=i+1;
        }
        p+=x+1;
        cout<<endl;
    }
}

void reverse(int x, int y){
    int p;

    for(int i=0,col=y+1;i<x;i++,col++){
        p=i+1;
        cout<<p<<" ";
        for(int j=1;j<y;j++){
            cout<<p+col<<" ";
            p+=col;
        }
        cout<<endl;
    }
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int t;
    cin>>t;

    while(t--){
        int r,c;
        cin>>r>>c;

        if(r<c){
            grid(r,c);
        }
        else{
            reverse(r,c);
        }
    }
    return 0;
}




/*  

-----------------------------------Another_Logic---------------------------------------

#include <bits/stdc++.h>
using namespace std;

void display(vector <vector<int>> &M,int &var1,int &var2){
    for(int i=0;i<var1;i++){
        for(int j=0;j<var2;j++){
            cout << M[i][j] << " " ;
        }
        cout << endl;
    }
}

void reverse(vector <vector<int>> &M,int &x,int &y){
    int p;
    p=1;
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            M[i][j]=(j+1)*p;
        }
        p+=2;
    }
    display(M,x,y);
    
}

void grid(vector <vector<int>> &M,int &x, int &y){
    int p;
    p=1;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            M[i][j]=(j+1)*p;
        }
        p+=2;
    }
    display(M,x,y); 
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    vector <vector<int>>M;
    int n,t,r,c;
    cin >> t;
    while(t--){
        cin >> r >> c;
        
        if(r==c){
            if(r%2==0){
                reverse(M,r,c);
            }else{
                grid(M,r,c);
            }
        }else if(r>c){
            grid(M,r,c);
        }else{
            reverse(M,r,c);
        }
        M.clear();
    }
    
    return 0;

}
*/