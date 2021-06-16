#pragma once

struct In_Out //struct combine input and output 
    {
        int valA; //Input A
        int valB; //Input B

        int result[4] = {0,0,0,0}; //Output use array of 4 cell, initial output is 0 for all 4 cell
    } DataSet;

class formula2
{
private:

public:
    formula2()
    {
        
    };

    void setValA_B(int A, int B, In_Out *input)
    {
        input->valA = A;
        input->valB = B;
    }

    void equation(In_Out in, In_Out *out)
    {
        out->result[0] = in.valA + in.valB;
        out->result[1] = in.valB - in.valA;
        out->result[2] = in.valB + in.valB;
        out->result[3] = in.valA + in.valA;
    }

    void printData(In_Out out)
    {
        for (int i = 0; i < 4; i++) // i++, execute value 1st then increament
        {
            Serial.println(out.result[i]); // i=4, exit for loop and continue next fx
        }
    }
};