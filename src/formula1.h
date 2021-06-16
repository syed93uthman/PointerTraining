#pragma once

struct DataInput //using struct
        {
             int valA; //set no value
             int valB;
        }myInput; //nama object
            
struct DataOutput
        {
             int result1 = 0; //A+B
             int result2 = 0; //B-A
             int result3 = 0; //B+B
             int result4 = 0; //A+A
        }myOutput;

class formula1 //non-simplify
{
private:
    
public:
    formula1()
    {

    };  

    void begin(int a, int b)
    {
        setValA_B (a , b, &myInput);
        process(myInput,&myOutput);
        printData(myOutput);
    }
     
     void setValA_B(int A, int B, DataInput *input) //step 1 , dptkan value dari luar
    {
        input->valA = A; // access structure sebagai pointer , -> ialah address pointer
        input->valB = B;
    }

    void process(DataInput input, DataOutput *output) // step 2 _ input ialah object, bukan pointer '*'
    {
        output->result1 = input.valA + input.valB; //input.valA, guna . sbb xde * dan nk ambil value, kalau ada *, guna ->
        output->result2 = input.valB - input.valA;
        output->result3 = input.valB + input.valB;
        output->result4 = input.valA + input.valA;
    }

    void printData(DataOutput output) // Step 3_ display output
    {
        Serial.println(output.result1); // . ambil value sahaja, xde ganti.
        Serial.println(output.result2);
        Serial.println(output.result3);
        Serial.println(output.result4);
    }
};