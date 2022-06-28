# String Approaches
* AnagramCheck - sort strings, check equality
* LongestCommonPrefix - sort array, compare first and last string
* LongestPalindromicSubstring - Dynamic Programming, check for all 1 and 2 length substrings, i at start and j at end of other substrings, if dp[i+1][j-1]==true and s[i]==s[j] then dp[i][j]=true
* LongestSubstringWithoutRepeatingCharacters - use set instead of map, iterate i instead of jump, deleting elements from set while iteration
* MakePalindrome - iterate i from end, at each index check for palindrome by expanding i to left and j to right, if i==-1 return N-j