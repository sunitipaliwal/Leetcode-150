class Solution
{
public:
  // prefix max
  // void leftmax(vector<int>& height, vector<int>& lmax) {
  //     lmax[0] = height[0];
  //     for (int i = 1; i < height.size(); i++) {
  //         lmax[i] = max(lmax[i - 1], height[i]);
  //     }
  // }

  // // suffix max
  // void rightmax(vector<int>& height, vector<int>& rmax) {
  //     int n = height.size() - 1;
  //     rmax[n] = height[n];
  //     for (int i = n - 1; i >= 0; i--) {
  //         rmax[i] = max(rmax[i + 1], height[i]);
  //     }
  // }

  // int trap(vector<int>& height) {
  //     int n = height.size();
  //     if (n == 0) return 0;

  //     vector<int> lmax(n), rmax(n);  // directly declared with required size

  //     leftmax(height, lmax);
  //     rightmax(height, rmax);

  //     int total = 0;
  //     for (int i = 0; i < n; i++) {
  //         if (height[i] < lmax[i] && height[i] < rmax[i]) {
  //             total += min(lmax[i], rmax[i]) - height[i];
  //         }
  //     }
  //     return total;
  // }

  int trap(vector<int> &height)
  {
    int n = height.size();
    int leftMax = 0, rightMax = 0, total = 0;
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
      if (height[l] < height[r])
      {
        if (leftMax > height[l])
        {
          total += leftMax - height[l];
        }
        else
        {
          leftMax = height[l];
        }
        l = l + 1;
      }
      else
      {
        if (rightMax > height[r])
        {
          total += rightMax - height[r];
        }
        else
        {
          rightMax = height[r];
        }
        r = r - 1;
      }
    }
    return total;
  }
};

// class Solution {
// public:

//   // prefix max

//     void leftmax(vector<int>&height){
//         leftmax[0]=height[0];
//         for(int i=1;i<height.size();i++){
//             leftmax[i]=max(leftmax[i-1],height[i]);
//         }
//     }

//   // suffix max
//     void rightmax(vector<int>&height){
//         int n=height.size()-1;
//         rightmax[n]=height[n];
//         for(int i=n-1;i>=0;i--){
//             rightmax[i]=max(rightmax[i+1],height[i]);
//         }
//     }

//     int trap(vector<int>& height) {
//         int totalUnit=0;
//         for(int i=0;i<height.size();i++){
//             if(height[i]<leftmax())&& height[i]<rightmax()){
//                 total+=min(leftmax,rightmax)-height[i];
//             }
//         }
//         return total;
//     }
// };