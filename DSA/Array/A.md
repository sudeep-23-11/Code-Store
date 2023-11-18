# Array Approaches
* 4Sum -
    * sort array, binary search
    * hash elements of array
* Duplicate, Single -
    * sort array
    * hash elements of array
* LongestConsecutiveSequence - sort array
* LongestSubarrayWithKSum - hash sums along with their respective indexes, check if sum-K is already present in hash or not  
* Majority - hash elements of array
* MatrixSearch -
    * linear search across matrix
    * binary search across every row
    * binary search across matrix with e==A[m/M][m%M] only if last element of i th row is smaller than first element of i+1 th row
* MergeTwoSortedArrays -
    * place elements of both arrays in third array, sort it, replace elements of first array with third array
    * compare every element of first array with first element of second array, if greater then swap them, sort second array
* MoveZeroesToEnd - count no. of zeroes, shift rest elements to start, place zeroes at end
* RearrangeSigns - first array contains positives, second array contains negatives, place back these elements alternatively
* RotateArrayByKPlaces - take out first K elements, shift rest elements to left by K places, place back those K elements
* SetMatrixZeroes -
    * make every element of row and column -1, change to 0
    * create row and column array, place 0 at corresponding position
* Sort012Array -
    * sort array
    * count no. of elements of each color, place each color according to their no. from starting
* TrappingRainwater -
    * min(max(left heights), max(right heights))-height
    * prefix max and suffix max arrays of heights