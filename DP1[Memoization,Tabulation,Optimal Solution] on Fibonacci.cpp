#include<bits/stdc++.h>
using namespace std;
//memoization- i.e storing the values in a 1d vector to reduce the calls 
//tc- linear sc- o(n)(stack space)+O(n) (dp vector);
int fibm(int n, vector<int>&dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibm(n-1,dp) + fibm(n-2,dp);
}
//Tabulation- i.e no need of vector we can calculate it throughout the values.
//tc->linear sc->O(n);, we have eliminated stack space here.
//We still have a dp vector, do we need it ?? in precalculation of values ?? No we may just do it some varaiables
int fibt(int n,vector<int>&dp){
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;++i){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
//Optimal Space solution for Fibonacci 
//tc->linear s.c-constant , just making use of variables
int fib(int n){
    int prev=1;
    int prev2=0;
    int curi;
    for(int i=2;i<=n;++i){
        curi=prev+prev2;
        prev2=prev;
        prev=curi;//prev will have our answer as loop just ends here
    }
    return prev;
}


int main(){
        int n=8;
        vector<int>dp(n+1,-1);
        cout<<fib(n);
        return 0;
}