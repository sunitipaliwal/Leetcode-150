class Solution
{
public:
  // int findjump(vector<int>& nums,int index,int jumps){
  //     int n=nums.size();
  //     if(index>=n-1) return jumps;
  //     int mini=INT_MAX;
  //     for(int i=1;i<=nums[index];i++){
  //          mini=min(mini,findjump(nums,index+i,jumps+1));
  //     }
  //     return mini;
  // }
  // int jump(vector<int>& nums) {
  //     int index=0;
  //     int jumps=0;
  //     return findjump(nums,0,0);

  // }
  int jump(vector<int> &nums)
  {
    int jumps = 0;
    int l = 0;
    int r = 0;
    int n = nums.size();
    while (r < n - 1)
    {
      int farthest = 0;
      for (int i = l; i <= r; i++)
      {
        farthest = max(farthest, i + nums[i]);
      }
      l = r + 1;
      r = farthest;
      jumps = jumps + 1;
    }
    return jumps;
  }
};