//Count possible ways to construct buildings(medium)-binary search fibnocci concept
class Solution{
	public:
	int TotalWays(int N)
	{
	    const int M=1000000007;
	    vector<long long>dp(N+1);
	    dp[1]=2;
	    dp[2]=3;
	    for(int i=3;i<=N;i++){
	        dp[i]=dp[i-1]+dp[i-2];
	        dp[i]=dp[i]%M;
	   }
	    return ((dp[N]%M)*(dp[N]%M))%M;
	}
};
