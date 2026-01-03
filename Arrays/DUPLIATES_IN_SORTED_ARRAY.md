# My DSA Journey

## Purpose
This repo is my personal documentation of DSA problems, solutions, and insights.  
Goal: In the future, I can revisit my solutions, understand my thought process, and track progress, Learn Along!!.

```markdown
## Problem
- Name:
- Platform / Source:
- Link: https://takeuforward.org/plus/dsa/problems/remove-duplicates-from-sorted-array?tab=description

## Key Idea
(One sentence describing the core insight)
adjacent comparisions or 2 pointer method

## Invariant
(The rule that must hold true during solution)


m1: scan all elements and keep pushing in set daat structure(does not allow the repetetion of elements)

m3; 2 pointer where if the forward pointer changes then the prev pointer ka next value is changed to the new element and both pointers are increased
opt 
## Common Trap
(Mistakes I made or almost made)
for vectors its vector.size() 

int* i = nums.data(); === nums[0] nums.data()returns a empty pointer pointing to first element

int* i = nums.data() + nums.size(); // rep the pointer pointing to 1 + last element

int* i =.  nums.data() + 1 === nums[1]
return 0 to i so ==> i + 1 - nums.data()


## Solution
(Code    snippet here, clean and commented)
in .cpp

## Recode Check
- [ Y ] Can I re-code this in < 20 minutes? Y/N
