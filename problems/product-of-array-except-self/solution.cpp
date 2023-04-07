class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {

        vector<int> answer(nums.size(), 1);
        // add prefixes
        answer[0] = 1;
        for (int i = 1; i < nums.size(); ++i)
        {
            answer[i] = answer[i - 1] * nums[i - 1];
        }
        // add suffixes
        int postfix = 1;
        for (int i = nums.size() - 2; i >= 0; --i)
        {
            postfix *= nums[i + 1];
            answer[i] *= postfix;
        }
        return answer;
    }
};