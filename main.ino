
struct DataInput
{
    int valA;
    int valB;
};

struct DataOutput
{
    int result1 = 0; // A+B
    int result2 = 0; // B-A
    int result3 = 0; // B+B
    int result4 = 0; // A+A
} myOutput;

// set valA & B   ( 7 , 10)
// setValA&B (int A,int B,*DataInput)
// prcoess(DataInput , *DataOutput)
// printData value

DataInput myInput1;
DataInput myInput2;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
}

void setValA_B(int A, int B, DataInput *input)
{
    input->valA = A;
    input->valB = B;
}

void process(DataInput input, DataOutput *output)
{
    output->result1 = input.valA + input.valB;
    //
}

void printData(DataOutput output)
{
    Serial.println(output.result1);
    //
}