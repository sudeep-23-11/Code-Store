# String Approaches
* LongestCommonPrefix - sort array, compare first and last string
* LongestSubstringWithoutRepeatingCharacters - use set instead of map, iterate i instead of jump, deleting elements from set while iteration
* MinimumInsertionsForPalindrome - iterate i from end, at each index check for palindrome by expanding i to left and j to right, if i==-1 return N-j