#include<iostream>
#include "process.h"
using std::cout, std::endl;

int main()
{
    cout << "planing start" << endl;
    Process pro;
    pro.planProcess();
    cout << "planning end!" << endl;

    return 0;
}
