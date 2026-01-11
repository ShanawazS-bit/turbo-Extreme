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
brute: every 9 encountered, swap with the next non 0 
optimal: define the invariant, define the line before which all non-0 
and for each element in vector, if non0, put in behind j(or in place and increase j )


## Invariant
(The rule that must hold true during solution)
all elements before j is non 0, maintain that for all elements

## Common Trap
(Mistakes I made or almost made)
think problems in terms of invariants
for vectors its vector.size() 
nums[nums.size()- 1] = last element

## Solution
(Code    snippet here , clean and commented)
in .cpp

## Recode Check
- [ Y ] Can I re-code this in < 20 minutes? Y/N
yes coded 