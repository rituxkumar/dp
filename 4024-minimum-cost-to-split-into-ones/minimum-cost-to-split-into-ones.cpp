class Solution {
public:
int res = 0;
    void solve(int n){
        if(n<=1){
            return ;
        }
        res+=n-1;
        solve(n-1);

    }
    int minCost(int n) {
        // return n*(n-1)/2;

       solve(n);
       return res;
    }
};