# Array Approaches
* 2Sum -
    * sort array, binary search
    * sort array, l at 0 and r at N-1, move l and r according to difference between A[l]+A[r] and s
* 3Sum, 4Sum -
    * sort array, binary search
    * 2Sum hashing
* Duplicate -
    * sort array
    * hash elements of array
* LongestConsecutiveSequence - sort array
* Majority - hash elements of array
* MatrixSearch -
    * linear search across matrix
    * binary search across every row
    * binary search across matrix with e==A[m/M][m%M] only if last element of i th row is smaller than first element of i+1 th row
* MergeTwoSortedArrays -
    * place elements of both arrays in third array, sort it, replace elements of first array with third array
    * compare every element of first array with first element of second array, if greater then swap them, sort second array
* RepeatingAndMissing -
    * hash elements of array
    * subtract sum of elements from n*(n+1)/2, subtract sum of squares of elements from n*(n+1)*(n+2)/6
* SetMatrixZeroes -
    * make every element of row and column -1, change to 0
    * create row and column array, place 0 at corresponding position
* Sort012Array -
    * sort array
    * count no. of elements of each color, place each color according to their no. from starting
* TrappingRainwater -
    * min(max(left heights), max(right heights))-height
    * prefix max and suffix max arrays of heights