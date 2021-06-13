//This program is written by Sami Ullah Saleem whose roll number is BITF20M012 and email is bitf20m012@pucit.edu.pk

#include <iostream>

using namespace std;

int main()
{
    double celcius, fehrenheit, counter ;
    celcius = 0;
    
    while(celcius <= 20)
    {
        fehrenheit = (celcius + 9/5) + 32;
        cout << celcius << " in celcius | " << fehrenheit << " in Fehrenheit " << endl;
        celcius = celcius + 1;
    }

    return 0;
}
