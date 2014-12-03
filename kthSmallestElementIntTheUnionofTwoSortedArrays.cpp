/***Find the k-th Smallest Element in the Union of Two Sorted Arrays

Given two sorted arrays A, B of size m and n respectively. Find the 
k-th smallest element in the union of A and B. You can assume that 
there are no duplicate elements.

The trivial way, O(m+n):
Merge both arrays and the k-th smallest element could be accessed 
directly. Merging would require extra space of O(m+n). The linear 
run time is pretty good, but could we improve it even further?

A better way, O(k):
There is an improvement from the above method, thanks to readers
who suggested this. (See comments below by Martin for an implementation). 
Using two pointers, you can traverse both arrays without actually 
merging them, thus without the extra space. Both pointers are 
initialized to point to head of A and B respectively, and the 
pointer that has the larger smaller (thanks to a reader for this 
correction) of the two is incremented one step. The k-th smallest 
is obtained by traversing a total of k steps. This algorithm is very 
similar to finding intersection of two sorted arrays.
*/
