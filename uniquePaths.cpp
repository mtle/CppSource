/***
A robot is located at the top-left corner of a m x n grid (marked 
‘Start’ in the diagram below). The robot can only move either down 
or right at any point in time. The robot is trying to reach the 
bottom-right corner of the grid (marked ‘Finish’ in the diagram below). 
How many possible unique paths are there?

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
