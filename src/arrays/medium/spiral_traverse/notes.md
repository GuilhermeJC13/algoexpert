# SPIRAL TRAVERSE

  ## Prompt

  Write a function that takes in an n x m two-dimensional array (that can be
  square-shaped when n == m) and returns a one-dimensional array of all the
  array's elements in spiral order.

  Spiral order starts at the top left corner of the two-dimensional array, goes
  to the right, and proceeds in a spiral pattern all the way until every element
  has been visited.

  ## Solutions
  ### Solution 1
  It was a really tricky question, I had to look for the answer. Basically, we treat the spiral as multiple rectangles, one inside the other. The while loop traverse this rectangles and we add them to the solution, first the top, then the right, then the bottom and finally the left part. After that we take the next rectangle, that is contained inside the past rectangle.

  Time Complexity: O(n)