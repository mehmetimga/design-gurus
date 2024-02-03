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

        for (int i = 0; i < arr.size(); i++)
        {
            if (m.find(targetSum - arr[i]) != m.end())
            {
                result.push_back(m[targetSum - arr[i]]);
                result.push_back(i);
                return result;
            }
            else
            {
                m[arr[i]] = i;
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