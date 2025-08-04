class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    unordered_map<int, int> mpp;

    int n = nums.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
      if (mpp[nums[i]] < 2)
      {
        nums[j] = nums[i];
        j++;
        mpp[nums[i]]++;
      }
    }
    return j;
  }
};