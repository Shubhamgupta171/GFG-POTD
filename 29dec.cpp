//Check if a string is repetition of its substring of k-length(medium)
int kSubstrConcat (int n, string s, int k)
    {
        map<string,int> mp;
        if(n%k != 0)
            return 0;
        if(n%k == 0 && n/k == 2)
            return 1;
        else 
        {
            string temp = "";
            for(int i = 0; i<s.size(); i=i+k)
            {
                temp = "";
                int j = 0; 
                while(j < k)
                {
                    temp+=s[i];
                    j++;
                }
                mp[temp]++;
            }
            for(auto itr = mp.begin(); itr != mp.end(); itr++)
            {
                if(itr->second >= (n/k) - 1)
                    return true;
            }
        }
        return false;
        // Your Code Here
    }

