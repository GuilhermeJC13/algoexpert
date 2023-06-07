# SORTED SQUARED ARRAY

  ## Prompt
  Write a function that takes in a non-empty array of integers that are sorted
  in ascending order and returns a new array of the same length with the squares
  of the original integers also sorted in ascending order.

  ## Solutions
  ### Solution 1
  The first solution was the most basic one, I just went trough the array, took the square and in the final part, I sorted again, it was a really bad solution, but the obvious one.

  Time Complexity: O(n²logn)

  ### Solution 2
  I needed to look at the hints to make this one, basically, I got 2 variables that stored the index of the max and min number from the array, it's pretty easy to do that, because at first he is already sorted. Than I wen trough the array, checking wich one is the biggest absolute value, the max or the min (This part is used to prevent bad sorting due to negative values). if the min value was the bigger one, it would be inserted on result[i], else, the max value would (Always updating the max and min values). This solution works because we went trought the array by inverse, so that we could always insert the max value on the high positions.

  Time Complexity: O(n)