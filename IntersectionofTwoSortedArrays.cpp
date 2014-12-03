/*** 
Finding intersection of two sorted arrays

We can have two index, which both starts at zero. Compare the two first 
elements of A and B. If A[0] is greater than B[0], we increase index of 
B by one. If B[0] is greater than A[0], we increase index of A by one. If 
they are equal, we know an intersection has occurred, so add it to the list 
and increment index of A and B by one. Once either index reaches the end of 
A or B, we have found all the intersections of A and B.

The complexity of this approach is still O(m+n), but it does not requires 
any extra space that a hash table requires. The complexity is O(m+n) because 
in the worse case, there would be no intersection between the two arrays, and 
we need to increment first index a total of m times and increment second index 
a total of n times, which is a total of m+n times.
*/
