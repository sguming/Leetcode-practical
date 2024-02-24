#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        if (n <= 2) return n;

        int left = 0, right = 0, maxlen = 0;
        unordered_map<int, int> fruitCount;

        while (right < n) {
            fruitCount[fruits[right]]++;

            while (fruitCount.size() > 2) {
                fruitCount[fruits[left]]--;
                if (fruitCount[fruits[left]] == 0) {
                    fruitCount.erase(fruits[left]);
                }
                left++;
            }

            maxlen = max(maxlen, right - left + 1);
            right++;
        }

        return maxlen;
    }
};
//hashtag




#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        if (n <= 2)
            return n;

        int left = 0, right = 0, maxlen = 0;
        unordered_map<int, int> fruitCount;

        while (right < n) {
            fruitCount[fruits[right]]++;
            while (fruitCount.size() > 2) {
                fruitCount[fruits[left]]--;
                if (fruitCount[fruits[left]] == 0) {
                    fruitCount.erase(fruits[left]);
                }
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
            right++;
        }
        return maxlen;
    }
};


