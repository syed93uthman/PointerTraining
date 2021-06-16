// set valA & B ( 7, 10)
// setVal A&B (int A, int B, *DataInput)
// process (DataInput, *DataOutput)
// printData value

#pragma once

struct Data
{
    //Input
    int valA;
    int valB;

    //Output
    int result[4] = {0};

} myData;

class pointer
{
private:
public:
    pointer(){};

    void setVal_AB(int A, int B, Data *myInput)
    {
        myInput->valA = A;
        myInput->valB = B;
    }

    void displayResult(Data out)
    {
        for (int i = 0; i < 4; i++)
        {
            Serial.print("Result");
            Serial.print(i);
            Serial.print("=");
            Serial.println(out.result[i]);
        }
    }

    void process(Data proIn, Data *out)
    {
        out->result[0] = proIn.valA + proIn.valB;
        out->result[1] = proIn.valB - proIn.valA;
        out->result[2] = proIn.valB + proIn.valB;
        out->result[4] = proIn.valA + proIn.valA;
    }
};
