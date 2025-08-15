class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    string ans = "";
    int n = strs.size();
    for (int i = 0; i < strs[0].size(); i++)
    {
      char ch = strs[0][i];
      bool match = true;
      // for comparing ch with rest as the strings
      for (int j = 1; j < n; j++)
      {
        // not match
        if (strs[j].size() < i || ch != strs[j][i])
        {
          match = false;
          break;
        }
      }
      if (match == true)
      {
        ans.push_back(ch);
      }
      else
      {
        break;
      }
    }
    return ans;
  }
};