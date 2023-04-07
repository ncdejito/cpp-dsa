class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        if (nums.empty())
            return 0;

        // sort and deduplicate using a set
        set<int> st(nums.begin(), nums.end());
        vector<int> nums2(st.begin(), st.end());

        int max_consecutive = 1;
        int running_count = 1;
        for (int i = 0; i < nums2.size() - 1; ++i)
        {
            // if next item is +1, add to running_count
            if (nums2[i + 1] == nums2[i] + 1)
            {
                ++running_count;
                cout << running_count << " ";
            }
            else
            {
                max_consecutive = max(max_consecutive, running_count);
                running_count = 1; // reset
            }
        }
        max_consecutive = max(max_consecutive, running_count);
        return max_consecutive;
    }
};