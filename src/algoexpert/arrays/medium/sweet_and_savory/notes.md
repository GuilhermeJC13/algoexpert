# SWEET AND SAVORY

  ## Prompt

    You're hosting an event at a food festival and want to showcase the best
    possible pairing of two dishes from the festival that complement each
    other's flavor profile.

    Each dish has a flavor profile represented by an integer. A negative integer
    means a dish is sweet, while a positive integer means a dish is savory. The
    absolute value of that integer represents the intensity of that flavor. For
    example, a flavor profile of -3 is slightly sweet, one of -10 is extremely
    sweet, one of 2 is mildly savory, and one of 8 is significantly savory.
  
    You're given an array of these dishes and a target combined flavor profile.
    Write a function that returns the best possible pairing of two dishes (the
    pairing with a total flavor profile that's closest to the target one). Note
    that this pairing must include one sweet and one savory dish. You're also
    concerned about the dish being too savory, so your pairing should never be
    more savory than the target flavor profile.

    All dishes will have a positive or negative flavor profile; there are no
    dishes with a 0 value. For simplicity, you can assume that there will be at
    most one best solution. If there isn't a valid solution, your function
    should return [O, O]. The returned array should be sorted,
    meaning the sweet dish should always come first.
  

  ## Solutions
  ### Solution 1
  The solution first devide the full array in 2 arrays, the sweet array and savory array, based on their values. Then we sort both arrays, but the sweet decresently. Finally we use a while loop to iterate both arrays, making comparasions. We first check if the current sweet dish plus the current savory dish is less then the target, then we see if this solution in the best we have, if it is, we replace with a new solution.

  Time Complexity: O(nlog(n))
  Space Complexity: O(n)