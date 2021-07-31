//Noah Tola nat2eh 10/21/19
#include "hashTable.h"
#include <iostream>
#include <list>
using namespace std;

hashTable::hashTable() {
  int x=500*500;
  sizeOf = getNextPrime(x);
  Dict= new list<string>[sizeOf];
}

hashTable:: ~hashTable() {
  delete [] Dict;
}

bool hashTable:: checkprime(unsigned int p) {
    if ( p <= 1 ) // 0 and 1 are not primes; the are both special cases
        return false;
    if ( p == 2 ) // 2 is prime
        return true;
    if ( p % 2 == 0 ) // even numbers other than 2 are not prime
        return false;
    for ( int i = 3; i*i <= p; i += 2 ) // only go up to the sqrt of p
        if ( p % i == 0 )
            return false;
    return true;
}

int hashTable:: getNextPrime (unsigned int n) {
    while ( !checkprime(++n) );
    return n; // all your primes are belong to us
}

bool hashTable:: find(const string x) {
  std::list<string>::iterator it;
  for (it = Dict[hashFunc(x)].begin(); it != Dict[hashFunc(x)].end(); it++){
    if (x == *it){
      return true;}}
  
    return false;
  }

  
unsigned int hashTable:: hashFunc(const string x) {
  unsigned int num = 37;
  for (int i = 0; i < x.length();i++) {
    num = int(x[i]) + num;
  }
  num = num % sizeOf;
  return num;
  
}

void hashTable:: insert( string x) {
  if (x .length() >=3){
  Dict[hashFunc(x)].push_back(x);
  }}

