# OPTIMAL FREELANCING

  ## Prompt

    You recently started freelance software development and have been offered
    a variety of job opportunities. Each job has a deadline, meaning there is no
    value in completing the work after the deadline. Additionally, each job
    has an associated payment representing the profit for completing that job.
    Given this information, write a function that returns the maximum profit that
    can be obtained in a 7-day period.
  
    Each job will take 1 full day to complete, and the deadline will be given
    as the number of days left to complete the job. For example, if a job has a
    deadline of 1, then it can only be completed if it is the first job worked
    on. If a job has a deadline of 2, then it could be started on the first or
    second day.
  
    Note: There is no requirement to complete all of the jobs. Only one job can
    be worked on at a time, meaning that in some scenarios it will be impossible
    to complete them all.
  

  ## Solutions
  ### Solution 1
  This solution is better than the algoexpert optimal solution, because there is no need to sorting algorithms. The Idea is to go each day by day, but reversly, and then look for the best option to add to our solution (with the highest payment). We need to go reversly, so that we focus on getting always the highest payment, instead of worring about the deadline

  Time Complexity: O(n)