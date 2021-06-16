#pragma once
class formula1 //non-simplify

{
private:
    struct DataInput //using struct
        {
             int valA; //set no value
             int valB;
        }myInput;
            
    struct DataOutput
        {
             int result1 = 0; //A+B
             int result2 = 0; //B-A
             int result3 = 0; //B+B
             int result4 = 0; //A+A
         }myOutput;
public:
    formula1()
    {

    };  

    void begin()
    {
        setValA_B (7 , 10, &myInput);
        process(myInput,&myOutput);
        printData(myOutput);
    }
     
     void setValA_B(int A, int B, DataInput *input) //step 1
    {
        input->valA = A; // access structure sebagai pointer
        input->valB = B;
    }

    void process(DataInput input, DataOutput *output) // step 2 _ input ialah object, bukan pointer '*'
    {
        output->result1 = input.valA + input.valB;
        output->result2 = input.valB - input.valA;
        output->result3 = input.valB + input.valB;
        output->result4 = input.valA + input.valA;
    }

    void printData(DataOutput output) // Step 3_ display output
    {
        Serial.println(output.result1);
        Serial.println(output.result2);
        Serial.println(output.result3);
        Serial.println(output.result4);
    }
};