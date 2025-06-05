class Solution {
public:
    bool isfreqsame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        // Count frequency of characters in s1 and first window of s2
        for (int i = 0; i < s1.length(); i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        // Slide the window over s2
        for (int i = s1.length(); i < s2.length(); i++) {
            if (isfreqsame(freq1, freq2)) return true;

            // Slide window: remove leftmost char and add new one
            freq2[s2[i - s1.length()] - 'a']--;
            freq2[s2[i] - 'a']++;
        }

        // Check last window
        return isfreqsame(freq1, freq2);
    }
};
