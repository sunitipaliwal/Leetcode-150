class Solution
{
public:
  int hIndex(vector<int> &citations)
  {
    int n = citations.size();
    vector<int> v(n + 1, 0); // Buckets for 0 to n

    // Fill the bucket
    for (int c : citations)
    {
      if (c >= n)
      {
        v[n]++;
      }
      else
      {
        v[c]++;
      }
    }

    int total = 0;
    for (int i = n; i >= 0; i--)
    {
      total += v[i];
      if (total >= i)
      {
        return i;
      }
    }

    return 0;
  }
};
