#include <Arduino.h>

struct DataInput
{
    int valA;
    int valB;
} myInput;

struct DataOutput
{
    int result1 = 0;        // A + B
    int result2 = 0;        // B - A
    int result3 = 0;        // B + B
    float result4 = 0;        // A + A
} myOutput;

// set valA & B ( 7, 10)
// setVal A&B (int A, int B, *DataInput)
// process (DataInput, *DataOutput)
// printData value

void setup()
{
    Serial.begin(9600);
    setVal_AB (7, 10, &myInput);
    process (myInput, &myOutput);
    print(myOutput);
}

void loop()
{

}

void setVal_AB (int A, int B, DataInput *input)
{
    input->valA = A;
    input->valB = B;
}

void process (DataInput input, DataOutput *output)
{
    output->result1 = input.valA + input.valB;
    output->result2 = input.valB - input.valA;
    output->result3 = input.valB + input.valB;
    output->result4 = input.valA + input.valA;

}

void print (DataOutput output)
{
    Serial.println (output.result1);
    Serial.println (output.result2);
    Serial.println (output.result3);
    Serial.println (output.result4);
}






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

