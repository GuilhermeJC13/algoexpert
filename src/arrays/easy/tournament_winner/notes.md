# TOURNAMENT WINNER

  ## Prompt

  There's an algorithms tournament taking place in which teams of programmers
  compete against each other to solve algorithmic problems as fast as possible.
  Teams compete in a round robin, where each team faces off against all other
  teams. Only two teams compete against each other at a time, and for each
  competition, one team is designated the home team, while the other team is the
  away team. In each competition there's always one winner and one loser; there
  are no ties. A team receives 3 points if it wins and 0 points if it loses. The
  winner of the tournament is the team that receives the most amount of points.

  Given an array of pairs representing the teams that have competed against each
  other and an array containing the results of each competition, write a
  function that returns the winner of the tournament. The input arrays are named
  
  It's guaranteed that exactly one team will win the tournament and that each
  team will compete against all other teams exactly once. It's also guaranteed
  that the tournament will always have at least two teams.

  ## Solutions
  ### Solution 1
  in the first solution I used an unordered map to store the scores of each team in the competition. First I initilialized the map with all teams and then I started computing the victorys, after computing everything, I went trought the map keys and got the one with the highest score. It was a linear complexity algorithm but it was running 3 diferent loops.

  Time Complexity: O(n)

  ### Solution 2
  This Solution is only an upgrade to the first one, it just has one single loop. First I created variables to store the max score and the max_score_team, and created the unordered map to store the points again. Then, in the for loop, I would check which team won, and only then I would add it to the map, after that we would check if the team that made a point has a higher score than the max_score, if it has, I would asign it to the max_score team.

  Time Complexity: O(n)