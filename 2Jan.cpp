//Largest Sum Subarray of Size at least K(medium)--based on Kadaanes algo. and sliding windows..
class Solution {
public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long ksum = 0;
        for (int i = 0; i < k; i++)
            ksum += a[i];

        long long maxsum = ksum;
        long long sum = ksum;

        for (int i = k; i < n; i++) {
            ksum = ksum + a[i] - a[i - k];
            sum = max(sum + a[i], ksum);
            maxsum = max(sum, maxsum);
        }

        return maxsum;
    }
};
