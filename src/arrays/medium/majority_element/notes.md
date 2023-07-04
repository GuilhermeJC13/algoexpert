# MAJORITY ELEMENT

  ## Prompt

    Write a function that takes in a non-empty, unordered array of positive integers and returns the array's majority element without sorting the array and without using more than constant space.

    An array's majority element is an element of the array that appears in over half of its indices. Note that the most common element of an array (the element that appears the most times in the array) isn't necessarily the array's majority element; for example, the arrays [3, 2, 2, 1] and [3, 4, 2, 2, 1] both have 2 as their most common element, yet neither of these arrays have a majority element, because neither 2  nor any other element appears in over half of the respective arrays' indices.
  
    You can assume that the input array will always have a majority element.
 
  ## Solutions
  ### Solution 1
  This solution only works because the problem always have a majority element. Basically, we first create 2 important variables, the majority element, that stores the return of the function (that starts with any value), and the majority counter that stores the number of times the current majority element appears in the subarrays. Then we traverse the array checking if the count reached 0 (because if it did, there is no majority element in the arrays we checked so far, so we can just forget them), if it is 0, we change the majority element to the current number, then, we check if the current element is equal to the majority element, if it is, we increase the counter, if its not, we decrease it.

  Time Complexity: O(n) and Space Complexity: O(1) 