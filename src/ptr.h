// set valA & B ( 7, 10)
// setVal A&B (int A, int B, *DataInput)
// process (DataInput, *DataOutput)
// printData value

#pragma once

class ptr
{
private:
public:
    ptr(){

    };

    struct DataInput
    {
        int valA;
        int valB;
    } myInput;

    struct DataOutput
    {
        int result1 = 0;
        int result2 = 0;
        int result3 = 0;
        int result4 = 0;
    } myOutput;

    //void displayValue(DataInput value);
    //void displayPointer(DataInput *pvalue);
    //void displayReference(DataInput &rvalue);

    void init()
    {
        //DataInput thing;
        //myInput.valA = 7;
        //myInput.valB = 10;

        setVal_AB(7, 10, &myInput);

        //displayValue(myInput);
        displayPointer(&myInput);
        process(myInput, &myOutput);
        displayResult(myOutput);
    }

    void setVal_AB(int A, int B, DataInput *setIn)
    {
        setIn->valA = A;
        setIn->valB = B;
    }

    void process(DataInput proIn, DataOutput *out)
    {
        out->result1 = proIn.valA + proIn.valB;
        out->result2 = proIn.valB - proIn.valA;
        out->result3 = proIn.valB + proIn.valB;
        out->result4 = proIn.valA + proIn.valA;
    }

    void displayResult (DataOutput out)
    {
        Serial.print("Result1 =");
        Serial.println(out.result1);
        Serial.print("Result2 =");
        Serial.println(out.result2);
        Serial.print("Result3 =");
        Serial.println(out.result3);
        Serial.print("Result4 =");
        Serial.println(out.result4);
    }

//////////////////////////////////////////////////////////////
    void displayValue(DataInput value)
    {
        Serial.print("valueA:");
        Serial.println(value.valA);
        Serial.print("valueB:");
        Serial.println(value.valB);
    }

    void displayPointer(DataInput *pvalue)
    {

        Serial.print("valuepA:");
        Serial.println(pvalue->valA);
        Serial.print("valuepB:");
        Serial.println(pvalue->valB);
    }
};
