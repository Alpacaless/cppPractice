class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int display = 1;
        vector<int> ans(num_people);
        while (candies) {
            if (display <= candies) {
                ans[(display - 1) % num_people] += display;
                candies -= display;
                ++display;
            }
            else {
                ans[(display - 1) % num_people] += candies;
                candies = 0;
            }
        }
        return ans;
    }
};