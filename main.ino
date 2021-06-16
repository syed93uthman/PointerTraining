/////////////////////////// Simplify /////////////////////////////

#include "src/formula2.h"

formula2 run;

void setup()
{
    Serial.begin(9600);
    run.setValA_B (7 , 10, &DataSet);
    run.equation(DataSet,&DataSet);
    run.printData(DataSet);
}

void loop()
{
}

/*
////////// Non-Simplify ///////////////

 #include "src/formula1.h"

formula1 run;

void setup()
    {
        Serial.begin(9600);
        run.begin(7, 10);
    }

void loop() //empty, only run once
    {

    }
*/