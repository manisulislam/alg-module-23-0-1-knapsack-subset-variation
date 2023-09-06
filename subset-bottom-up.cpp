#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int s;
    cin>>s;

    int dp[n+1][s+1];
    dp[n][s]=true;
    for(int i=1; i<=s; i++){
        dp[0][i]= false;
    }

    for(int i=1; i<=n; i++){
        for( int j=0; j<=s; j++){
        if(a[i-1]<= j){
        
        bool op1= dp[i-1] [j-a[n-1]];
        bool op2= dp[i-1][j];
        dp[i][j]= op1 || op2;

        }
        else {
            dp[i][j]= dp[i-1] [j];
        }

        
        }
    }

    //print yes or no;
    if(dp[n][s]){
        cout<< "YES"<<endl;
    }
    else{
        cout<< "NO"<<endl;
    }

    //print full dp array with true or false
    for(int i=0; i<=n; i++){
        for(int j=0; j<=s; j++){
            if(dp[i][j]) cout<<"T ";
            else cout<<"F ";
        }
        cout<<endl;
    }
    return 0;
}