class Solution {
  public:
    long long trappingWater(vector<int> &arr) {
        int ans = 0;
        int n = arr.size();
        int left[n],right[n];
        left[0] = arr[0];
        right[n - 1] = arr[n - 1];
        for(int i = 1; i < n; i++){
            left[i] = max(left[i-1], arr[i]); 
        }
        
        for(int i = n-2; i >= 0; i--){
            right[i] = max(right[i+1], arr[i]); 
        }
        
        for(int i = 0; i< n; i++){
            ans += min(left[i],right[i]) - arr[i];
        }
        return ans;
    }
};