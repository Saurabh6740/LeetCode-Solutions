#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        if( n <= 2) return 0;
        //Sieve of Eratosthenes Algorithm
       vector<bool>prime(n, true);
       prime[0] = false;
       prime[1] = false;
       for(int  i = 2; i*i < n; i++){
        if(prime[i]){
            for(int j  = i*i; j<n; j +=i ){
                prime[j] = false;
            }
        }
       } 
       int count  = 0;
       for(int  i = 2; i<n; i++){
        if(prime[i]) count++;
       }
       return count;
    }
};

// //Dry Run (n = 10)

// Initial:

// 2 3 4 5 6 7 8 9
// T T T T T T T T

// i = 2, ka multiple remove kar do

// 4 6 8

// False.

// 2 3 4 5 6 7 8 9
// T T F T F T F T

// i = 3

// 9

// False.

// 2 3 4 5 6 7 8 9
// T T F T F T F F

// Final primes:

// 2 3 5 7

// Count = 4 