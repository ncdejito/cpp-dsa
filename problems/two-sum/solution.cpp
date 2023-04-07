class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> inds = {};
        int element;
        int i, j;
        vector<int>::iterator it;
        for (; nums.size() > 0;)
        {
            i = nums.size() - 1;
            element = nums.back();
            nums.pop_back();
            it = find(nums.begin(), nums.end(), target - element);
            if (it != nums.end())
            {
                inds.push_back(it - nums.begin());
                inds.push_back(i);
            }
        }
        return inds;
    }
};