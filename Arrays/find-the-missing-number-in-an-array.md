# My DSA Journey

## Purpose
This repo is my personal documentation of DSA problems, solutions, and insights.  
Goal: In the future, I can revisit my solutions, understand my thought process, and track progress, Learn Along!!.

```markdown
## Problem
- Name:
- Platform / Source:
- link: https://takeuforward.org/plus/dsa/problems/move-zeros-to-end
## Key Idea
(One sentence describing the core insight)


bruteforce: for each element index wala perform linear search and check if in the array or not basically index comparision also can do index + 1 and value equal ho gaye to, if difference between elements are constant or not
better approach:  creating hashmap and storing and checking jispe 0 aaye

optimal: calculating the sum of elements in array and calc sum from max ap sequence;
optimal 2 ; xor1 and xor2 and dono ka xor;



## Invariant
(The rule that must hold true during solution)





final is sorted and does not have duplicates,
pointer on either array incease regardless of duplicate or not(if not duplicate then push )
## Common Trap
(Mistakes I made or almost made)
think problems in terms of invariants
for vectors its vector.size() 
nums[nums.size()- 1] = last element



always try to 1.dry run the code on pen and paper so can clearly think about cases, then 2. actual run 
and thinkn in terms of invariants.




## Solution
(Code    snippet here , clean and commented)
in .cpp

## Recode Check
- [ Y ] Can I re-code this in < 20 minutes? Y/N
yes coded 