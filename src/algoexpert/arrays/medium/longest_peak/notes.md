# LONGEST PEAK

  ## Prompt

  Write a function that takes in an array of integers and returns the length of
  the longest peak in the array.

  A peak is defined as adjacent integers in the array that are strictly increasing until they reach a tip (the highest value in the peak), at which point they become strictly decreasing. At least three integers are required to form a peak.

  ## Solutions
  ### Solution 1
  As we know, a peak has to have a part that increases over time, another part that decreases and need to have 3 elements minimum. That been said, the algorithm traverse the array counting the current peak size, and check if it actually a peak, if all the requirements are ok, we check if the current peak is higher than the longest peak.

  Time Complexity: O(n)