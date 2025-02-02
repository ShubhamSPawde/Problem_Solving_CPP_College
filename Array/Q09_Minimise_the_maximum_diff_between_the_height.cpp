class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
       sort(arr.begin(), arr.end());
       
       int n = arr.size();
       int maxi, mini;
       
       int ans = arr[n-1] - arr[0];
       
       int smallest = arr[0] + k;
       int largest = arr[n-1] - k;
       
       for(int i = 0; i<arr.size()-1; i++){
           mini = min(smallest, arr[i+1]-k);
           maxi = max(largest, arr[i]+k);
           if(mini < 0) continue;
           ans = min(ans, (maxi-mini) );
       }
       return ans;
    }
};