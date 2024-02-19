class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int spacex = 0;
        int spacey = 0;
        int indexx = s.length() - 1;
        int indexy = t.length() - 1;
        while (1) {
            while (indexx >= 0) {
                if (s[indexx] == '#') {
                    spacex++;

                } else {
                    if (spacex > 0) {
                        spacex--;
                    } else {
                        break;
                    }
                }
                indexx--;
            }
            while (indexy >= 0) {
                if (t[indexy] == '#') {
                    spacey++;

                } else {
                    if (spacey > 0) {
                        spacey--;
                    } else {
                        break;
                    }
                }
                indexy--;
            }
            if (indexx < 0 || indexy < 0) {
                break;
            }
            if (s[indexx] != t[indexy]) {
                return false;
            }
            indexx--;
            indexy--;
        }
        if (indexx == -1 && indexy == -1) {
            return true;
        }
        return false;
    }
};