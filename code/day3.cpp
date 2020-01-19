#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    /*
    Given an integer, , perform the following conditional actions:
        If  is odd, print Weird
        If  is even and in the inclusive range of 2 to 5, print Not Weird
        If  is even and in the inclusive range of 6 to 20, print Weird
        If  is even and greater than 20, print Not Weird
    */

    cout<<((N%2==1)?"Weird":((N>=2 && N<=5)?"Not Weird":(N>=6 && N <=20)?"Weird":"Not Weird"));

    return 0;
}
