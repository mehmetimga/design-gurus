using namespace std;

#include <iostream>
#include <vector>

class Solution
{
public:
    int remove(vector<int> &arr)
    {
        int curr = 0;
        for (int i = 1; i < arr.size(); i++)
            if (arr[i - 1] != arr[i])
                curr++;

        return curr + 1;
    }
};