# My DSA Journey

## Purpose
This repo is my personal documentation of DSA problems, solutions, and insights.  
Goal: In the future, I can revisit my solutions, understand my thought process, and track progress, Learn Along!!.

```markdown
## Problem
- Name:
- Platform / Source:
- link: https://takeuforward.org/plus/dsa/problems/sort-an-array-of-0's-1's-and-2's
## Key Idea
(One sentence describing the core insight)
Brute force; this consists of basically swapping all the elements like bubble shot and calculating the sorted array.

better: using a hash table and calculating the number of occurrences of each element and then filling the array, using 3 for loops separately
Optimal: the optimal approach consist of using Dutch flag algorithm, Dutch national flag algorithm in where we consider low medium high where from 0 to low-1, all the zeros are there low to medium -1 all ones are there medium to high -1, all the unsorted numbers are there and high 2N all the twos are there so for each element that we encounter in the medium we try to either stop it with the low or the high, and either increase or decrease both of them.


## Invariant
(The rule that must hold true during solution)

[ 0 0 0 ... 0 | 1 1 1 ... 1 | ? ? ? ... ? | 2 2 2 ... 2 ]
^             ^             ^             ^
0            low           med           high

## Common Trap
(Mistakes I made or almost made)

trusted that being genunine and loving others more is not 
a solution, its an attachment problem 


## Solution
(Code    snippet here , clean and commented)
in .cpp

## Recode Check
- [ Y ] Can I re-code this in < 20 minutes? Y/N
yes coded 