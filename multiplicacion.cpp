#include <iostream>
#include<stdlib.h>
using namespace std;

int multi(int x, int y)
{

    if (y==1) 
    {
      return x;
    }
    else 
    {
        return x+multi(x,y-1);
    }
    
}

int main()
{
    int x, y, result;
    cout << "Introduzca el primer numero natural: ";
    cin >> x;
    cout << "Introduzca el segundo numero natural: ";
    cin >> y;
    if (x <= 0 || y <=0 )
    {
      cout << "ERROR" << endl;
    }
    result = multi(x,y);
    cout << "El resultado es: " << result << endl;

}
