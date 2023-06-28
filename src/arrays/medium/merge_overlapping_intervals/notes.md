# MERGE OVERLAPPING INTERVALS

  ## Prompt

  Write a function that takes in a non-empty array of arbitrary intervals,
  merges any overlapping intervals, and returns the new intervals in no
  particular order.

  Each interval "interval" is an array of two integers, with "interval[0]"  as the start of the interval and "interval[1]" as the end of the interval.

  Note that back-to-back intervals aren't considered to be overlapping. For example, [1, 5] and [6, 7] aren't overlapping; however, [1, 6] and [6, 7] are indeed overlapping.

  Also note that the start of any particular interval will always be less than or equal to the end of that interval.
  
  

  ## Solutions
  ### Solution 1
  This solution is acctually better than the one presented by algoexpert, the first thing to do is sorting the array based on the begin of the interval, so that we can compare them based on proximity. Then in a for loop we check for overlaping cases (end of a interval is higher then the begin of the next interval) and if the interval is totally contained by other interval. In the end, add the merged intervals in a new array

  Time Complexity: O(nlog(n)) and Space Complexity: O(n) 