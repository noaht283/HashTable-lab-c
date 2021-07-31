//Noah Tola nat2eh 10/21/19
#ifndef HASHTABLE
#define HASHTABLE

#include <string>
#include <iostream>
#include <vector>
#include <list>

using namespace std;
class hashTable{
 public:
  hashTable();
  ~hashTable();

  void insert(string x);
  
  unsigned int hashFunc(string x);

  bool find(const string x);

  bool checkprime(unsigned int p);

  int getNextPrime(unsigned int n);

 private:
  list<string> *Dict;


  int sizeOf;

  
};

#endif

 

  
  

