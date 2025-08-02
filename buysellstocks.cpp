class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int n = prices.size();
    int profit = 0;
    int mini = prices[0];
    for (int i = 1; i < n; i++)
    {
      int cost = prices[i] - mini;
      profit = max(profit, cost);

      mini = min(mini, prices[i]);
    }
    return profit;

    //     int maxProfit=INT_MIN;
    //     int n=prices.size();
    //     if(n==0 || n==1){
    //         return 0;
    //     }
    //    vector<int> ans(n);
    //    int value=0;
    //    for(int i=n-1;i>=0;i--){
    //      ans[i]=value;
    //      if(value<prices[i]){
    //         value=prices[i];
    //      }
    //    }

    //    for(int i=0;i<n-1;i++){
    //     int profit=ans[i]-prices[i];
    //     if(profit<0){
    //         profit=0;
    //     }
    //     maxProfit=max(maxProfit,profit);
    //    }
    //    return maxProfit;
  }
};
