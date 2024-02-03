
using namespace std;
#include <iostream>
#include <vector>

class Solution
{
public:
    static vector<int> makeSquares(const vector<int> &arr)
    {
        vector<int> squares(arr.size());
        int left = 0;
        int right = arr.size() - 1;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            if (arr[left] * arr[left] < arr[right] * arr[right])
            {
                squares[i] = arr[right] * arr[right];
                right--;
            }
            else
            {
                squares[i] = arr[left] * arr[left];
                left++;
            }
        }
        return squares;
    }
};

int main()
{
    vector<int> arr{-2, -1, 0, 2, 3};
    int target = 6;
    vector<int> result = Solution().makeSquares(arr);
    for (auto i : result)
        cout << i << ",";
    cout << endl;
    return 0;
}