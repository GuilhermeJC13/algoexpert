# FIRST DUPLICATE VALUE

  ## Prompt

  Given an array of integers between 1 and n, inclusive, where n  is the length of the array, write a function that returns the first integer that appears more than once (when the array is read from left to right).

  In other words, out of all the integers that might occur more than once in the
  input array, your function should return the one whose first duplicate value
  has the minimum index.

  If no integer appears more than once, your function should return -1.

  Note that you're allowed to mutate the input array.
  

  ## Solutions
  ### Solution 1
  The first solution uses an unordered map to store the elements we saw, in each iteration we check if we saw the current element, case we haven't, we add the value to the map, otherwise, we return the value.

  Time Complexity: O(n) Space Complexity: O(n)

  ### Solution 2
  The best solution plays with the input array. We basically take a element, lets say 4, and we say that the element 4-1 of the array (3) is going to store that we have this element, we do this by negativating it's value, if on position 3 we had element 5, now we have the element -5. and as we only change the signal we wont lose the element that was there before, because we can use the absolute value of it. This solution can only be used because the values on the array goes from 1 to n (number of elements in the array) and because we can change it's value.

  Time Complexity: O(n) Space Complexity: O(1)