class Solution {
public:
    bool canTransform(string start, string result) {
        string a, b;

        for (char c : start)
            if (c != 'X') a += c;

        for (char c : result)
            if (c != 'X') b += c;

        if (a != b) return false;

        int i = 0, j = 0;

        while (i < start.size() && j < result.size()) {
            while (i < start.size() && start[i] == 'X') i++;
            while (j < result.size() && result[j] == 'X') j++;

            if (i == start.size() || j == result.size()) break;

            if (start[i] != result[j]) return false;

            if (start[i] == 'L' && i < j) return false;
            if (start[i] == 'R' && i > j) return false;

            i++;
            j++;
        }

        return true;
    }
};