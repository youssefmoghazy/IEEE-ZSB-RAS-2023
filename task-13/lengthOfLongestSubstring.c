#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int len = strlen(s);
    int maxLen = 0;
    int left = 0, right = 0;
    int charFreq[128] = {0}; // Assuming ASCII character set

    while (right < len) {
        char currentChar = s[right];
        if (charFreq[currentChar] == 0) {
            // If the character is not seen before, expand the window
            charFreq[currentChar]++;
            right++;
            int currentLen = right - left;
            if (currentLen > maxLen) {
                maxLen = currentLen;
            }
        } else {
            // If the character is already seen, contract the window from the left
            charFreq[s[left]]--;
            left++;
        }
    }

    return maxLen;
}

int main() {
    char s[] = "abcabcbb"; // Example input string
    int result = lengthOfLongestSubstring(s);
    printf(" %d\n", result);
    return 0;
}
