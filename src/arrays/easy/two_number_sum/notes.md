# TWO NUMBER SUM

  ## Prompt
  Write a function that takes in a non-empty array of distinct integers and an
  integer representing a target sum. If any two numbers in the input array sum
  up to the target sum, the function should return them in an array, in any
  order. If no two numbers sum up to the target sum, the function should return
  an empty array.


  Note that the target sum has to be obtained by summing two different integers
  in the array; you can't add a single integer to itself in order to obtain the
  target sum.

  You can assume that there will be at most one pair of numbers summing up to
  the target sum.

  ## Solutions
  ### Solution 1
  The first solution was the most basic one, I just went through the array with a loop and create another loop with some basic optimizations, like starting the second loop with the index i+1, so that it wouldn't do the same expression again

  Time Complexity: O(n²)

  ### Solution 2
  I needed to look at the hints to make this one, basically, I first created a hash_map, where I would store the values I have on the list (So that I could search easily), then I went trough the list again, but this time finding the "ideal value", the ideia is that I know what value would be true in the sentence, if x + y = Result, and I know x and result, I know the ideal value for Y, so it's easy to search for it in constant time complexity in the hash map.

  Time Complexity: O(n)