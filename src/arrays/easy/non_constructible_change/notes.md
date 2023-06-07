# NON-CONSTRUCTIBLE CHANGE

  ## Prompt

  Given an array of positive integers representing the values of coins in your
  possession, write a function that returns the minimum amount of change (the
  minimum sum of money) that you cannot create. The given coins can have
  any positive integer value and aren't necessarily unique (i.e., you can have
  multiple coins of the same value).

  For example, if you're given coins = [1, 2, 5], the minimum amount of change that you can't create is 4. If you're given no coins, the minimum amount of change that you can't create is 1.

  ## Solutions
  ### Solution 1
  This was one of the hardest problems I got so far, the logic is really tricky. Basically the first thing we do is sorting the array, and this is the operation which dominates the complexity on the algorithm. Then we create a variable to store where can we go with the coins we have, for example, if the variable got 6, we know we can build 1, 2, 3, 4, 5, and 6 with the coins. So what we do is go trough the array and make a comparasion, if the current value is higher that this number (that starts with 0) +1, we can return the number +1, because we can't form it. Some examples to make clear. [6, 7, 12] would return 1, because 6 > 0+1. [1, 2, 4, 5] would return 6. [1, 2, 5] would return 4.

  Time Complexity: O(nlogn)