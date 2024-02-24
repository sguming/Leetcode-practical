class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> need(1122, 0);
        vector<bool> tag(1122, false);
        for (int i = 0; i < t.size(); i++) {
            tag[t[i]] = true;
            need[t[i]]++;
        }
        int count = 0;
        int left = 0;
        int min = 0;
        int minisize = 101122;
        for (int i = 0; i < s.size(); i++) {
            if (tag[s[i]]) {
                need[s[i]]--;
                if (need[s[i]] >= 0) {
                    count++;
                }
                while (count == t.size()) {
                    if (i - left + 1 < minisize) {
                        minisize = i - left + 1;
                        min = left;
                    }
                    if (tag[s[left]] && ++need[s[left]] > 0) {
                        count--;
                    }
                    left++;
                }
            }
        }
        if (minisize >=101122) {
            return "";
        }
        return s.substr(min, minisize);
    }
};
// bilibili:https://www.bilibili.com/video/BV1rC4y1Y748/?spm_id_from=333.880.my_history.page.click
////if (tag[s[left]]) {
//  ++need[s[left]];
//   if (++need[s[left]] > 0) {
//      count--;
//   }      25行代码