//
//  main.cpp
//  Week2 Challenge
//
//  Created by 林子喬 on 2020/11/14.
//

#include <iostream>
using namespace std;

// This class Pair has already been defined for you.
// (You may not change this definition.)
class Pair {
public:
  int first, second;
  void check() {
    first = 5;
    cout << "Congratulations! The check() method of the Pair class \n has executed. (But, this isn't enough to guarantee \n that your code is correct.)" << endl;
  }
};

// Insert your declaration and implementation of the function pairFactory()
// below, by replacing "..." with proper C++ code. Be sure to declare the
// function type to return a pointer to a Pair.

Pair *pairFactory() {
  // ...
  // (You can use as many lines as you want.)
    Pair pair;
//    pair.check();
  return &pair;
}

// Your function should be able to satisfy the tests below. You should try
// some other things to convince yourself. If you have a bug in this problem,
// the usual symptom is that after you submit, the grader will crash with a
// system error. :-)
int main() {
  Pair *p = new Pair;
    Pair *q=p;
//    cout<<q<<endl;
    p= pairFactory();
    
  // This function call should work without crashing:
//  p->check();
  // Deallocating the heap memory. (Assuming it was made on the heap!)
  delete q;
//    cout<<q<<endl;
  cout << "If you can see this text, the system hasn't crashed yet!" << endl;

  return 0;
}
