//Binary Search  concept used krenge..
// Arranging and Evaluating Possibilities: Pehle, aapko decide karna hoga ki aapke paas kitne subarrays ho sakte hain aur kaise aap inhe ek se zyada subarrays mein divide kar sakte hain.
// Aapka lakshya hoga ek aise subarray sum ka minimum nikalna jo division se utpann hone wale sabse bade subarray sum ko kam kar sake.

// 1 .Using Binary Search:  Aap binary search ka istemal karenge ek possible subarray sum ke range ko dhoondhne ke liye.
//          Aap slowly-slowly is range ko kam karte jayenge jab tak aap apne lakshya ke paas na pahunch jaayein.

// 2.Check Possibilities:  Har bar, aap diye gaye subarray sum ke saath kitne subarrays banaye ja sakte hain, iska check karenge.
//    Aapki isValid function dekhegi ki yeh possible hai ya nahi. Agar haan, toh aap range ko baar-baar ghataayenge taaki aap apne lakshya ke pass aa sakein,
//    aur agar nahi, toh aap range ko badhayenge taaki aap adhik value ki or badh sakein.

// 3.Return : the Answer: Jab aapki range dono seemaon ke beech mein aa jaye, aapka uttar woh maan hoga jo aapke liye possible minimum subarray sum hai.

// Is tarah, aap binary search ka istemal karke sabse kam subarray sum ko nikal sakte hain.
class Solution {
public:
    bool isValidSplit(int *arr, int size, int sum, int k) {
        int currentSubarraySum = 0;
        int count = 0;
       for (int i = 0; i < size; ++i) {
            if (currentSubarraySum + arr[i] <= sum) {
                currentSubarraySum += arr[i];
            } else {
                count++;
                if (count >= k || arr[i] > sum) {
                    return false;
                }
                currentSubarraySum = arr[i];
            }
        }
      return true;
    }
    int splitArray(int arr[], int N, int K) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += arr[i];
        }
        int s = 1;
        int e = sum;
        int ans = INT_MAX;
      while (s <= e) {
            int mid = s + (e - s) / 2;
            if (isValidSplit(arr, N, mid, K)) {
                ans = std::min(ans, mid);
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
      return ans;
    }
};
