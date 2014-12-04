/***
    Say you have an array for which the ith element is the 
    price of a given stock on day i.

    If you were only permitted to buy one share of the stock and 
    sell one share of the stock, design an algorithm to find the 
    best times to buy and sell.
    The question is equivalent to the following:
      Find i and j that maximizes Aj – Ai, where i < j.
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

#define BITCLR32(x,y) ((~(1U<<y)|(1U<<(y-1)))&x)
#define SWAPBITS(x,h,l) \
if ( ((x>>l)&1) ^ ((x>>h)&1) ) x ^= ((1U<<l)|(1U<<h)); \
else (void)0	⇐ intentionally leave out “;”
#define swapbits(x,h,l) \
do { \
if ( ((x>>l)&1) ^ ((x>>h)&1) ) x ^= ((1U<<l)|(1U<<h)); \
} while(false)  ⇐ intentionally leave out “;”
    
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

/***********************************************************************************/
int main()
{
    
}
}
