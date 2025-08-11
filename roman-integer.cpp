class Solution
{
public:
  unordered_map<char, int> num{
      {'I', 1},
      {'V', 5},
      {'X', 10},
      {'L', 50},
      {'C', 100},
      {'D', 500},
      {'M', 1000},

  };

  int romanToInt(string s)
  {
    int sum = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
      if (num[s[i]] < num[s[i + 1]])
      {
        sum -= num[s[i]];
      }
      else
      {
        sum += num[s[i]];
      }
    }
    sum += num[s[s.size() - 1]];
    return sum;
  }
};