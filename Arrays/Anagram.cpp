class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        int count = 0;
        int num = 0;
        int n = strs.size();
        for (int i = 0; i < n; i++) {
            count = strs[i].size();

            bool found = false;

            for (int m = 0; m < ans.size(); m++) {
                for (int p = 0; p < ans[m].size(); p++) {
                    if (ans[m][p] == strs[i]) {
                        found = true;
                    }
                }
            }
            if (found) {
                continue;
            }
            for (char ch : strs[i]) {
                freq1[ch - 'a']++;
            }
            ans.push_back({strs[i]});
            num = ans.size() - 1;

            for (int j = n - 1; j >= i + 1; j--) {
                if (strs[j].size() == count) {
                    for (char ch : strs[j]) {
                        freq2[ch - 'a']++;
                    }

                    if (freq1 == freq2) {
                        ans[num].push_back(strs[j]);
                    }
                }
                for (int k = 0; k < freq2.size(); k++) {
                    freq2[k] = 0;
                }
            }
            for (int l = 0; l < freq1.size(); l++) {
                freq1[l] = 0;
            }
        }
        return ans;
    }
};