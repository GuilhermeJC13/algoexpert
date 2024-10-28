# MOVE ELEMENT TO END

  ## Prompt

  You're given an array of integers and an integer. Write a function that moves
  all instances of that integer in the array to the end of the array and returns
  the array.

  The function should perform this in place (i.e., it should mutate the input
  array) and doesn't need to maintain the order of the other integers.

  ## Solutions
  ### Solution 1
  The solution is very simple. Go trough the array, if we find the specific element we want, we remove it with erase and push back to the end. After that, as we messed the indexes of the array, we need to subtract current position (Because we will need to check the new current position) and the size (because we don't want to check the final elements again)

  Time Complexity: O(n)