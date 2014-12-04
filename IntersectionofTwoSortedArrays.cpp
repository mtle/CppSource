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
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <memory>
#include <cstdlib>
#include <vector>
#include <new>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <bitset>
#include <stdexcept>
#include <cassert>

typedef unsigned int uint;
using namespace std;

template<typename T> void printArray(const vector<T> &v, int lo=0, int hi=0) const;
template<typename T> void printVector(const vector<T> &v, int lo=0, int hi=0) const;
template<typename T> void printMatrix(const vector<vector<T>>&, int row=0, int col=0) const;

///////////////////////////////////////////////////////////////////////

template<typename T> T Max(T x, T y)
{
	return (x >= y) ? x : y;
}

template<typename T> void printMatrix(const vector<vector<T>>& v, int row, int col) const
{
	for( auto j=0; j<col; ++j ) {
   	 cout<<endl;
   	 for ( auto i=0; i<row; ++i ) {
   		 cout<<v[j][i]<<" ";
   	 }
	}
}

template<typename T> void printArray(const vector<T> &v, int lo, int hi) const
{
	cout<<"\n[";
    if ( 0==lo && 0==hi ) {
   	 for ( auto x : v ) {
   		 cout<<x<<", ";
   	 }
    } else if ( lo>=0 && hi>0 ) {
   	 for (auto x=lo; x<=hi; ++x) {
   		 cout<<v.at(x) << ", ";
   	 }
    } else {
    	return;
	}
	cout<<"]"<<endl;
}

template<typename T> void printVector(const vector<T> &v, int lo, int hi) const
{
	cout<<"\n[";
    if ( 0==lo && 0==hi ) {
   	 for ( auto x : v ) {
   		 cout<<x<<", ";
   	 }
    } else if ( lo>=0 && hi>0 ) {
   	 for (auto x=lo; x<=hi; ++x) {
   		 cout<<v.at(x) << ", ";
   	 }
    } else {
    	return;
	}
	cout<<"]"<<endl;
}

/*****************************************************************************/
int main()
{
  
}
