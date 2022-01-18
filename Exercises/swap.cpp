//Γράψε ενα πρόγραμμα στην C++ για να ανταλλάξεις το πρώτο και το τελευταίο ψηφίο ενός αριθμού , π.χ 123456 ... 623451

#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int num, last, first, temp, swap, count = 0;
 
    //diabazei ton arithmo apo ton xristi 
    cout<<"Enter any number:";
    cin>>num;
 
    temp = num;
    last = temp % 10;
    count = (int)log10(temp);
 
    while(temp>=10)
    {
        temp /= 10;
    }
    first = temp;
    swap = (last * pow(10, count) + first) + (num - (first * pow(10, count) + last));
 
    cout<<"Last Digit: "<<last<<endl;
 
    cout<<"First Digit: "<<first<<endl;
 
    cout<<num<<" is swapped to "<<swap;
 
    return 0;
}
