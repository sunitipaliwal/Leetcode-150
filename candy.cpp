class Solution
{
public:
  int candy(vector<int> &ratings)
  {
    int n = ratings.size();
    vector<int> left(n, 1);
    vector<int> right(n, 1);
    int i = 1;

    while (i < n)
    {

      if (ratings[i] > ratings[i - 1])
      {
        left[i] = left[i - 1] + 1;
      }
      i++;
    }
    int j = n - 2;
    while (j >= 0)
    {

      if (ratings[j] > ratings[j + 1])
      {
        right[j] = right[j + 1] + 1;
      }
      j--;
    }
    int sum = 0;
    for (int k = 0; k < n; k++)
    {
      sum = sum + max(left[k], right[k]);
    }
    return sum;
  }
};