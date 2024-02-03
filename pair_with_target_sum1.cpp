#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{

public:
    static vector<int> search(const vector<int> &arr, int targetSum)
    {
        unordered_map<int, int> m;
        vector<int> result;
        int left = 0;
        int right = arr.size() - 1;

        while (left < right)
        {
            if (arr[left] + arr[right] == targetSum)
            {
                result.push_back(left);
                result.push_back(right);
                return result;
            }
            else if (arr[left] + arr[right] < targetSum)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return result;
    }
};

int main()
{
    vector<int> arr{1, 2, 3, 4, 6};
    int target = 6;
    vector<int> result = Solution().search(arr, target);
    for (auto i : result)
        cout << i << ",";
    cout << endl;
    return 0;
}