# Array Approaches
* 2Sum - sort array, i at 0 and j at N-1, move i and j according to difference between A[i]+A[j] and s
* FindDuplicate -
    * sort array
    * hash elements of array
* FindRepeatingAndMissing -
    * hash elements of array
    * subtract sum of elements from n*(n+1)/2, subtract sum of squares of elements from n*(n+1)*(n+2)/6
* LongestConsecutiveSequence - sort array
* MajorityElement, RemoveDuplicatesFromSortedArray - hash elements of array
* MergeTwoSortedArrays -
    * place elements of both arrays in third array, sort it, replace elements from third array to original arrays
    * compare every element of first array with first element of second array, place smaller one in first array, sort second array
* SearchInMatrix -
    * linear search across matrix
    * binary search across every row
    * binary search across matrix with e==A[m/M][m%M] only if last element of i th row is smaller than first element of i+1 th row
* SetMatrixZeroes -
    * make every element of row and column -1, change to 0
    * create row and column array, place 0 at corresponding position
* Sort012Array -
    * sort array
    * count no. of elements of each color, place each color according to their no. from starting
* UniquePathsInMatrix -
    * Recursion with j+1 for right and i+1 for down, for finding return 1, for out of bound return 0
    * Dynamic Programming