//
//  main.cpp
//  CS
//
//  Created by 林子喬 on 2020/11/11.
//  Copyright © 2020年 林子喬. All rights reserved.
//
#include <iostream>
using namespace std;
//define Pair
class Pair
{
public:
    double a;
    double b;
    double sum();
private:
};

double Pair::sum() {
    return a+b;
}

int main() {
 
    Pair p;
    p.a=100;
    p.b=200;
    if(p.a +p.b == p.sum()) {
        cout<<"success!"<<endl;
    }
    else{
        cout<<"p.sum() returns "<<p.sum()<<"instead of"<<(p.a+p.b)<<endl;
    }
    return 0;
}
