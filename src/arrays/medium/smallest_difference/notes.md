# SMALLEST DIFFERENCE

  ## Prompt
  
  Write a function that takes in two non-empty arrays of integers, finds the
  pair of numbers (one from each array) whose absolute difference is closest to
  zero, and returns an array containing these two numbers, with the number from
  the first array in the first position.

  Note that the absolute difference of two integers is the distance between
  them on the real number line. For example, the absolute difference of -5 and 5
  is 10, and the absolute difference of -5 and -4 is 1.

  You can assume that there will only be one pair of numbers with the smallest
  difference.

  ## Solutions
  ### Solution 1
  The first solution concatenates both lists into the same one, but in a map, so that we can save not only the value, but the original list that he belonged to. After that, we would sort the big list and would go trough it and check the difference between the last element on array1 and the last element of the array2, and would store the smallest one.

  Time Complexity: O(nmlogn(nm))

  ### Solution 2
  This is the solution from algoexpert, he initially sorted both arrays and the went in a while loop, inside of it, he would compare the values from the value of the 2 arrays, and he took the absolute difference from them, if the first element was smaller, he would take the next element in the next repetition, and then he would compare the difference with the min difference, taking the one with the smallest difference


  Time Complexity: O(nlog(n) + mlog(m))