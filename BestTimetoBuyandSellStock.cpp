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

template<typename T> void printArray(const vector<T> &v, int lo=0, int hi=0);
template<typename T> void printVector(const vector<T> &v, int lo=0, int hi=0);
template<typename T> void printMatrix(const vector<vector<T>>&, int row=0, int col=0);

///////////////////////////////////////////////////////////////////////
template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
    for (auto& el : vec) {
        os << "[" << el << "] ";
    }
    return os;
}
typedef vector<vector<int>> Matrix;
void print(const Matrix& m)
{
    for (auto it=m.begin(); it!=m.end(); ++it) {
		cout<<endl;
		for (auto itr=it->begin(); itr!=it->end();++itr)
			cout<<*itr <<" ";
		}
	cout<<endl;
}

template<typename T> T Max(T x, T y)
{
	return (x >= y) ? x : y;
}

template<typename T> void printMatrix(const vector<vector<T>>& v, int row, int col)
{
	for( auto j=0; j<col; ++j ) {
   	 cout<<endl;
   	 for ( auto i=0; i<row; ++i ) {
   		 cout<<v[j][i]<<" ";
   	 }
	}
}

template<typename T> void printArray(const vector<T> &v, int lo, int hi)
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

template<typename T> void printVector(const vector<T> &v, int lo, int hi)
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
int buySell(vector<int>& v)
{
	int max_profit=0;
	int cur_profit;
	int buy=v[0];
	
	// v = 12, 7, 8, 15, 16, 11, 9, 10
	for (size_t x=1; x<v.size(); ++x) {
		cur_profit = v[x] - buy;
		if (cur_profit >= max_profit) {
			max_profit = cur_profit;
		} else {
			buy = v[x];
			max_profit = 0;
		}
	}
	return max_profit;
}

int main()
{
    
}

