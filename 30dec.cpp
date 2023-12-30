//Winner of an election(easy)


class Solution{
  public:
  //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
         map<string,int>mp;
        string winnerN="";
        int max_vote=-1;
        for(int i=0;i<n;i++){
       mp[arr[i]]++;
        }
        for(auto val:mp){
            if(val.second>max_vote){
                max_vote=val.second;
                winnerN=val.first;
            }
        }
         return {winnerN,to_string(max_vote)};      
    }
};
