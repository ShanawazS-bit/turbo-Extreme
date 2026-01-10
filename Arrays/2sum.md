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
Gentlemen, today we are going to solve the twosome classic problem using both the optimal as well as the brute force and better approach.

Brute force: this approach mainly consists of running a loop inside loop where you take one element and check if it's counter part that is target minus that element exists in the Sabara, excluding the element so so i runs from 0 to N and J runs from I plus one to N and return( i,j).
Better approach; space in this approach, we try to optimise the brute force approach by using Hash map, so we are reversing the vector ones and for each element of the array/vector. We are checking in the hash stack or hash map if the counterpart exists, if it doesn't exist, then we push the current index with the value into the stack and then move on to the next element and with the next element as well, we reduce it from the target element and check if this elements in the stack of the Hash map, and if it doesn't exist, we push it back into the stack and then move on, and this repeats for all the Elements.
## Invariant
(The rule that must hold true during solution)




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
