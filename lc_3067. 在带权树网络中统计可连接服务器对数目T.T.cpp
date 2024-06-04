class Solution {
public:
    vector<int> countPairsOfConnectableServers(vector<vector<int>>& edges, int signalSpeed) {
        int n = edges.size() + 1;
        vector<int> count(n);
        vector<int> leaf(n);
        //ÕÒÒ¶×Ó½áµã
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 2; ++j) {
                leaf[edges[i][j]]++;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (leaf[i] == 1) {
                count[i] = 0;
            }
            else {

            }
        }
    }
};