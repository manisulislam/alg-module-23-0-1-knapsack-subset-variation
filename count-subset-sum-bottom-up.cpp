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
    dp[n][s]=1; 
    
    for(int i=1; i<=s; i++){
        dp[0][i]= 0;
    }

    for(int i=1; i<=n; i++){
        for( int j=0; j<=s; j++){
        if(a[i-1]<= j){
        
        int op1= dp[i-1] [j-a[n-1]];
        int op2= dp[i-1][j];
        dp[i][j]= op1 + op2;

        }
        else {
            dp[i][j]= dp[i-1] [j];
        }

        
        }
    }

    

    //print array
    for(int i=0; i<=n; i++){
        for(int j=0; j<= s; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}