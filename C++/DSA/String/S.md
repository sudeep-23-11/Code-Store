# String Approaches
* LongestCommonPrefix - sort array, compare first and last string
* LongestPalindromicSubstring - Dynamic Programming, check for all 1 and 2 length substrings, i at start and j at end of other substrings, if dp[i+1][j-1]==true and s[i]==s[j] then dp[i][j]=true