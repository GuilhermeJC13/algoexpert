# THREE NUMBER SUM

  ## Prompt
  Write a function that takes in a non-empty array of distinct integers and an
  integer representing a target sum. The function should find all triplets in
  the array that sum up to the target sum and return a two-dimensional array of
  all these triplets. The numbers in each triplet should be ordered in ascending
  order, and the triplets themselves should be ordered in ascending order with
  respect to the numbers they hold.

  If no three numbers sum up to the target sum, the function should return an
  empty array.

  ## Solutions
  ### Solution 1
  The solution is very similar to the two number sum. First, we sort the array, so that it returns sorted automatically. We have an unordered map and we save the values of each item in it, so that we can search with O(1) complexity later on. Then we can pass trough the array with 2 loops, and with that, we can get the number we need so that we would have the ideal sum (Ideal_number = target_number - first_number - second_number). Then we add the possible solutions to the solution.

  Time Complexity: O(n²)