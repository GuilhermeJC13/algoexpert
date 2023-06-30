# MISSING NUMBER

  ## Prompt

    You're given an unordered list of unique integers "nums" in the range [1, n] where n represents the length of nums + 2. This means that two numbers in this range are missing from the list.

    Write a function that takes in this list and returns a new list with the two
    missing numbers, sorted numerically.
  
  

  ## Solutions
  ### Solution 1
  As we know what the input should be, we can find the missing numbers by first calculating the sum of the number missing, I calculated with AP (((x1 + xn) * n) / 2) and then subtracting the sum in the actual list, then took the mean of it (divided by 2), doing that, I now know that one of the numbers is in the left side of the mean and the other one is in the right side. With that information I used the same logic from the first part and calculated the expected sum on both sides and subtracted for the actual sum found, with that, i was able to get the missing values.

  Time Complexity: O(n)