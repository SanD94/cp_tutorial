/* 
 * originally from https://github.com/RemoveOil/cses/blob/master/_utils.cpp
 * (Co)Authors:
 * - Orbay Altuntoprak (https://github.com/oal55)
 * - Safa Andac (me)
*/

#ifndef __UTILS__
#define __UTILS__

#include<bits/stdc++.h>

// compile command
// g++ -std=c++11 -O2 -Wall filename.cpp -o filename

using namespace std;

// code shortening
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair 
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define SQ(a) (a)*(a)
#define II istream_iterator
#define OI ostream_iterator
#define VBI back_inserter

// utils
#define DEBUG(name) print(#name, name)
#define DEBUGN(name) print(#name, name, true)

template<typename>
struct is_std_vector : std::false_type {};

template<typename T, typename A>
struct is_std_vector<std::vector<T,A>> : std::true_type {};
// typedef integral_constant<bool,false> false_type;

template<class T>// T = vector<int>
ostream& operator<<(ostream& os, const vector<T> &v) {
    if (!v.size())
        return os;

    char sep = ' ';
    typename vector<T>::const_iterator it = v.begin(), end = prev(v.end());
    while (it != end) {
        os << *it;
        if (!is_std_vector<T>::value)
            os << sep;
        ++it;
    }

    os << *it << endl;
    return os;
}

template<class T>
void print(string var_name, T var, bool newline=false) {
    cout << var_name << ':' << (newline ? '\n' : ' ') << var; 
}

void init() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
}

#endif
