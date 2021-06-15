#include <Arduino.h>
//#include "src/ptr.h"
#include "src/pointer.h"

pointer mypointer;

void setup()
{
    Serial.begin(9600);

    mypointer.init(7, 10);
    mypointer.inproces();
}

void loop()
{
}

/*  #include "ptr.h"
ptr mypointer;

void setup()
{
    Serial.begin(9600);
    mypointer.init();
    
}

void loop()
{
}
*/

/* pass by reference - &result = dia akan samakan dgn nama diberi di atas result1

int add(int A, int B, int &result )         // pass by reference - &result = dia akan samakan dgn nama diberi di atas result1
{
    int result = A+B;
    return result;
}
*/

/* pass by pointer - *result = dia akan go to dkt poin yg kita assiggnkan &result1
int add(int A, int B, int *result )         // pass by reference - &result = dia akan samakan dgn nama diberi di atas result1
{
    *result = A+B;
    
}

void setup()
{
    Serial.begin(9600);

    operasi (valA,valB, &result1, &result2, &result3, &result4);
    
    Serial.println(result1);
    Serial.println(result2);
    Serial.println(result3);
    Serial.println(result4);
}

int operasi(int A, int B, int *ops1, int *ops2, int *ops3, int *ops4 )         // pass by reference - &result = dia akan samakan dgn nama diberi di atas result1
{
    *ops1 = A+B;
    *ops2 = B-A;
    *ops3 = B+B;
    *ops4 = A+A;
}
*/
