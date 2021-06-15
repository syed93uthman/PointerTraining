// set valA & B ( 7, 10)
// setVal A&B (int A, int B, *DataInput)
// process (DataInput, *DataOutput)
// printData value

#pragma once

class pointer
{
private:
    struct Data
    {
        //Input
        int valA;
        int valB;

        //Output
        int result[4] = {0};

    } myData;

    void setVal_AB(int A, int B, Data *setIn)
    {
        setIn->valA = A;
        setIn->valB = B;
    }

    void process(Data proIn, Data *out)
    {
        out->result[0] = proIn.valA + proIn.valB;
        out->result[1] = proIn.valB - proIn.valA;
        out->result[2] = proIn.valB + proIn.valB;
        out->result[3] = proIn.valA + proIn.valA;
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

public:
    pointer(){};

    void init(int a, int b)
    {

        setVal_AB(a, b, &myData);
    }

    void inproces()
    {
        process(myData, &myData);
        displayResult(myData);
    }
};
