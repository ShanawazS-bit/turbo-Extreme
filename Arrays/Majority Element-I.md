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

 brute force; this approach mainly considers two for loop, and for each element, you would travel the entire and check the number of occurrences.
Optimised;
Use a hash map to store the key value pair for the element, number of occurrences and keep pushing it in.
Optimal; 
here we originally consider the count to be zero, and then we pick the first element, and then we set the count to 1 and then begin itearting the array.

this approach considers the usage of moore's decision algorithm, where you considered initial variables count and element. Whenever the count becomes zero, you choose the current element and you traverse to the entire arrayuntil 0 again whle while adding if the elements match and subtracting if the elements don't match from the count.
In this approach, multiple arrays are created as as soon as the count reaches zero a new element respect and the process begins again. This means that the previous array did not have any majority element as it got cancelled by the non-majority elements as it would be greater than N by two. The number of appearence would be more than other elements, and so The count would not become zero for the particular array.


## Invariant
(The rule that must hold true during solution)

## Common Trap
(Mistakes I made or almost made)


## Solution
(Code    snippet here , clean and commented)
in .cpp

## Recode Check
- [ Y ] Can I re-code this in < 20 minutes? Y/N
yes coded 