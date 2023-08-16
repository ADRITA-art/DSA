//User function Template for C++


class Solution
{
    public:
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
       vector<int> sortedArray;
   for (int i = 0; i < arr.size(); i++) {
       for (int j = 0; j < arr[0].size(); j++) {
           sortedArray.push_back(arr[i][j]);
       }
   }
   sort (sortedArray.begin(), sortedArray.end());
   return sortedArray;
    }
};
