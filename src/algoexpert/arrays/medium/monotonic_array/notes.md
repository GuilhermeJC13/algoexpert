# MONOTONIC ARRAY

  ## Prompt

  Write a function that takes in an array of integers and returns a boolean
  representing whether the array is monotonic.

  An array is said to be monotonic if its elements, from left to right, are
  entirely non-increasing or entirely non-decreasing.

  Non-increasing elements aren't necessarily exclusively decreasing; they simply
  don't increase. Similarly, non-decreasing elements aren't necessarily
  exclusively increasing; they simply don't decrease.

  Note that empty arrays and arrays of one element are monotonic.

  ## Solutions
  ### Solution 1
  The solution is very simple. We create to variables that store if the array is increasing and if the array is decreasing, if both are true, the array is not monotonic. Go trough the array, and check if the next element is higher than the current one, if it is, the array is increasing, then make the same comparation but checking if the array is decreasing.

  Time Complexity: O(n)