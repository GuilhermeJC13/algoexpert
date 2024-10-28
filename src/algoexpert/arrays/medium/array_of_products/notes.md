# ARRAY OF PRODUCTS

  ## Prompt

  Write a function that takes in a non-empty array of integers and returns an
  array of the same length, where each element in the output array is equal to
  the product of every other number in the input array.

  In other words, the value at output[i] is equal to the product of every number in the input array other than input[i].

  Note that you're expected to solve this problem without using division.

  ## Solutions
  ### Solution 1
  The obvious solution is to traverse the array one time and for each element, multiply the others with other loop, but it's not efficient.

  Time Complexity: O(n²)

  ### Solution 2
  The best solution is to basically calculate the multiplication of the left and right elements separately, so we would have a loop for the left and another one for the right. If we multiply the product of the left elements for the right, we will get the total product for the element.

  Time Complexity: O(n)