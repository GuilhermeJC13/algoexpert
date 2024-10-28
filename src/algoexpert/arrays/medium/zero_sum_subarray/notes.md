# ZERO SUM SUBARRAY

  ## Prompt

    You're given a list of integers "nums". Write a function that
    returns a boolean representing whether there exists a zero-sum subarray of "nums".
    
    A zero-sum subarray is any subarray where all of the values add up to zero.
    A subarray is any contiguous section of the array. For the purposes of this
    problem, a subarray can be as small as one element and as long as the original array.
  

  ## Solutions
  ### Solution 1
  The first and second solution are very similar, but the first has a lot of useless operations. The first one stores the sum from 0 to i in a unordered map, then he checks if the sum is already on the map, if it is, return true.

  Time Complexity: O(n)

  ### Solution 2
  The second solution is way more simple. We store the sums from 0 to i in a set, check if the current sum is already in the sum, if it is, we return true (when there is repeated numbers in the array, we know that we can sum up to 0)

  Time Complexity: O(n)