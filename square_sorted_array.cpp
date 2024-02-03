using namespace std;
#include <iostream>
#include <vector>

class Solution
{
public:
    static vector<int> makeSquares(const vector<int> &arr)
    {
        vector<int> squares;
        int center = arr.size() - 1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] >= 0)
            {
                center = i;
                break;
            }
        }
        int left = center - 1;
        int right = center;

        while (left >= 0 && right < arr.size())
        {
            int left2 = arr[left] * arr[left];
            int right2 = arr[right] * arr[right];

            if (left2 < right2)
            {
                left--;
                squares.push_back(left2);
            }
            else
            {
                right++;
                squares.push_back(right2);
            }
        }
        while (left >= 0)
        {
            squares.push_back(arr[left] * arr[left]);
            left--;
        }
        while (right < arr.size())
        {
            squares.push_back(arr[right] * arr[right]);
            right++;
        }
        return squares;
    }
};