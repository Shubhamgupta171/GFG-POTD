//Array Pair Sum Divisibility Problem(medium)

bool canPair(vector<int> nums, int k)
{
int n=nums.size();
unordered_map<int,int> mp;

for(int i=0;i<n;i++)
mp[nums[i]%k]++;

for(auto x: mp)
{
int r1= x.first;
int r2= k- r1;

if( r1*2== k || r1== 0){
if(mp[r1]%2 != 0) return false;
}
else{
if(mp[r2] != mp[r1]) return false;
}
}
return true;
}
