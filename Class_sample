/* int valA;
int valB;
int result1 = 0;
int result2 = 0;
int result3 = 0;
int result4 = 0;

void setup()
{
    Serial.begin(9600);
    int out = add(5,4); //create new variable to pass output. out= 5+4=9
    Serial.print(out); 
}

void loop()
{
}

int add(int A,int B)
{
    int result = A + B;
    return result;
}
*/
/*
int valA;
int valB;
int result1 = 0;
int result2 = 0;
int result3 = 0;
int result4 = 0;

void setup()
{
    Serial.begin(9600);
    add(5,4, result1); //pass by reference
    Serial.print(result1); 
}

void loop()
{
}

void add(int A,int B,int &result)
{
    result = A + B;
    
}

*/

/*

int valA = 5;
int valB = 9;
int result1 = 0; //A+B
int result2 = 0; //B-A
int result3 = 0; //B+B
int result4 = 0; //A+A

void setup()
{
    Serial.begin(9600);
    process(valA,valB, &result1,&result2,&result3,&result4);     //pass by pointer use &result, jimat memori (performance wise)
    Serial.println(result1);
    Serial.println(result2);
    Serial.println(result3);
    Serial.println(result4); 

}

void loop()
{
}

void process(int valA,int valB, int *result_1, int *result_2, int *result_3, int *result_4) //
{
    *result_1 = valA + valB; //*result - dereference, tunjuk value kat address result, then execute
    *result_2 = valB - valA;
    *result_3 = valB + valB;
    *result_4 = valA + valA;
}

*/

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

// set valA and valB ,example (7,10) , set by pointer
// setValA&B (int A, int B, *Datainput) , pass value
// process input(DataInput , DataOutput) 
// prinData value
// buat dalam class

void setup()
{
    Serial.begin(9600);
    setValA_B (7 , 10, &myInput);
    process(myInput,&myOutput);
    printData(myOutput);
}

void loop()
{
}

void setValA_B(int A, int B, DataInput *input)
{
    input->valA = A; // access structure sebagai pointer
    input->valB = B;
}

void process(DataInput input, DataOutput *output) // input ialah object, bukan pointer '*'
{
    output->result1 = input.valA + input.valB;
    output->result2 = input.valB - input.valA;
    output->result3 = input.valB + input.valB;
    output->result4 = input.valA + input.valA;
}

void printData(DataOutput output)
{
    Serial.println(output.result1);
    Serial.println(output.result2);
    Serial.println(output.result3);
    Serial.println(output.result4);
}