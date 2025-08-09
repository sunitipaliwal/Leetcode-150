// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//        int n=gas.size();

//       for(int i=0;i<n;i++){

//          int total=0;
//       int count=0;

//       int current =i;
//       bool possible= true;

//         while(count<n){
//             total+=gas[current];
//             total-=cost[current];

//         if(total<0){
//             possible=false;
//             break;
//         }

//         current =(current+1)%n;
//         count++;
//       }

//       if(possible){
//         return i;
//       }
//       }
//       return -1;
//     }
// };
class Solution
{
public:
  int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
  {
    int n = gas.size();
    int totalGas = 0, totalCost = 0;
    for (int i = 0; i < n; i++)
    {
      totalGas += gas[i];
      totalCost += cost[i];
    }
    if (totalGas < totalCost)
      return -1; // No solution possible

    int start = 0;
    int tank = 0;
    for (int i = 0; i < n; i++)
    {
      tank += gas[i] - cost[i];
      if (tank < 0)
      {
        start = i + 1; // next station is new candidate
        tank = 0;      // reset tank
      }
    }
    return start;
  }
};
