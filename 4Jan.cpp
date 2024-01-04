//Find element occuring once when all other are present thrice

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        unordered_map<int,int>freq;
        for(int i=0;i<N;i++){
            freq[arr[i]]++;
        }
        for(auto it:freq){
            if(it.second==1){
                return it.first;
            }
        }
    }
};
