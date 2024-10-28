# MERGE SORT

  ## Prompt

  Write a function that takes in an array of integers and returns a sorted
  version of that array. Use the Merge Sort algorithm to sort the array.

  If you're unfamiliar with Merge Sort, we recommend watching the Conceptual
  Overview section of this question's video explanation before starting to code.
  

  ## Solutions
  ### Solution 1
  On merge sort we make a divide to conquer algorithm, where we first divide the big array into small versions of it, until there are only one element by array. Then, we compare the smaller arrays, sorting them, in this process, when we go back to the root of the problem, we will have evreything sorted.

  Time Complexity: O(nlogn)