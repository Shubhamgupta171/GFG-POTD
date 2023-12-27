//Buy Maximum Stocks if i stocks can be bought on i-th day-24 december(medium)

class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>>p;
        
        for(int i=0;i<n;i++){
            p.push_back(make_pair(price[i],i+1));
        }
        
        sort(p.begin(),p.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(p[i].first<=k){
                int j=p[i].second;
                while(j-- &&  p[i].first<=k){
                    count++;
                    k=k-p[i].first;
                }
            }
        }
        return count;
    }
};
