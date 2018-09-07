# Fantesy-League

Fantasy cricket league is a type of game where we can earn points by selecting best 11 players from two playing cricket team. Let us assume that we need to develop an application which can select best 11 players to score maximum points. The application will select the best players after completion of a match.  The rules are mentioned below. 
    a. Each cricket team will have 5 players (2 batsmen, 2 bowlers and 1 wicket keeper) only. (For two teams total 10 players)
    b. 1 Run means 1 point.  1 wicket means 50 points. Wicketkeepers points will be depend on bowlers. If two bowlers score 100  total points then the points of wicketkeeper will be 50. (50%).
    c. One batsman can score in between 0 to 100 and one bowler can take maximum 3 wickets.
    d. All out is not necessary.  Bowlers cannot score runs.
    e. Points of captain of the fantasy team will be double. That means 1 run = 2 points and 1 wicket = 100 points. The application will automatically select the captain.
    f. One fantasy cricket team can have only one captain. 
    g. One can select maximum three players from a team.
    h. Fantasy team can score maximum 200 runs and can take maximum 4 wickets.




1. First create two link lists of two cricket teams (Say team A and team B). Total 5 nodes. The structure of the list is as mentioned below. Put the runs scored by the batsman and wicket taken by the bowler in data field. The points of wicket keepers will be counted automatically as mentioned earlier.

Batsman(1)  
Batsman(2)
Wicketkeeper
Bowler(1)
Bowler(2)


2. Create a new linklist from above two lists. The data field will represent the team name from where the player belongs. This list will select the best possible 5 players to get the maximum points.  

3. Display the fantasy points earn by your selected team.
    
4. Select the highest run scoring batsman (Select the team) and maximum wicket taking player (Select the team). Select the best valuable wicketkeeper (Select the team). These players may not be present in the selected fantasy cricket team. 



# Test Cases:
Input:
Enter runs score by team ‘A’ batsmen followed by team ‘B’:
29, 81, 79, 35
Enter wicket taken by team ‘A’ bowlers followed by team ‘B’:
1, 3, 2, 2
Output:
Question 1: Display the two link lists.
Question 2: A->B->B->A->A (Result: 81+79+100+150+50) (Captain is a bowler from team A)
Question 3: Points: 81+79+100+300+50=610
Question 4: Highest run scoring batsman is from team A. Highest wicket taking bowler is from team A. Valuable wicketkeeper is from team B.
