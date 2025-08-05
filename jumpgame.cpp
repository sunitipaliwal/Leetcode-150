class Solution
{
public:
  bool canJump(vector<int> &nums)
  {
    int n = nums.size();
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
      if (i > maxi)
      { // agar hum us position pe hein jo aa hi nhi skti
        return false;
      }
      maxi = max(maxi, nums[i] + i);
      if (maxi >= n - 1)
      { // agar hum last index pr pohoch paye ya exceed kr paye
        return true;
      }
    }
    return false;
  }
};