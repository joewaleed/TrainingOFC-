#include <iostream> // input/output library
#include <array>    //array library

using namespace std; //we use this instead of using (std::cout)
int main()
{
   int num1 = 0;
int num2 = 0;
int result = 0;
int code = 0;

cout << "=============================\n";
cout << "code   |    the Operation\n";
cout << " 1     |        \"+\"\n"; 
cout << " 2     |        \"-\"\n";
cout << " 3     |        \"*\"\n";
cout << " 4     |        \"/\"\n";
cout << "=============================\n\n";
cout << "Enter Operation code: ";
cin >> code;
if(code == 1 || code == 2 || code == 3 || code ==4)
{
    cout << "Enter the first number: ";
cin >> num1;

cout << "Enter the second number: ";
cin >> num2;

switch (code)
{
case 1: //case 1 is the case of sum
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result;
    break;

case 2: //case 2 is the case of difference
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result;
    break;

case 3://case 3 is the case of multiplacation 
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result;
    break;

case 4://case 4 is the case of division
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result;
    break;
}
}
else
{
cout << "Error : number " << code <<" is not an operation code";
}

return 0;
}

/*void Agecalc()
{
cout << "PLease Enter Your Age \n";
int age;
cin >> age;
int AgeInDays = age * 356;
int AgeInHours = AgeInDays * 24;
int AgeInMinutes = AgeInHours * 60;
int AgeInSeconds = AgeInMinutes * 60;
cout << "You Have "<< AgeInDays << " Days ,And "<<AgeInHours<<" Hours. \n";
cout << "Also You Have "<< AgeInMinutes << " Minutes ,And "<<AgeInSeconds<<" Seconds.";
}*/

/*void kbToByteAndBit()
{
int kb;
    cout << "number kilobytes : \n";
    cin >> kb;
    int byte = kb*1024;
    int bit = byte *8;
    cout << "the number kilobytes is "<<kb<<" kbs\n";
    cout << "Number of bytes equal "<<byte<<" bytes\n";
    cout << "Number of bits equal "<<bit<<" bits\n";
}*/

/*void ASCIIDetector()
{
char letter;
    cout << "Please enter the letter \n";
    cin >> letter;
    cout << "ASCII of that letter is "<<int(letter)<<"\n\n";

    int number;
    cout << "Please enter the number \n";
    cin >> number;
    cout << "ASCII of that number is "<<char(number)<<"\n\n";
}*/

/*void EvenOrOdd()
{
int num ;
    cout << "enter a number!\n"; 
    cin >> num;
    if(num %2 == 0)
    {
        cout << "number "<< num <<" is even";
    }
    else
    {
        cout << "number "<< num <<" is odd";
    }
}*/

/*void GreatestNumber()
{
    int num1;
    int num2;
    int num3;
    
    cout << "Enter first number\n";
    cin >> num1;

    cout << "Enter second number\n";
    cin >> num2;

    cout << "Enter third number\n";
    cin >> num3;


    if(num1 >= num2)
    {
        if(num1 >= num3)
        cout << num1 <<" is the greatest number";

        else if (num3 >= num1 && num3 >= num2)
    {
        cout << num3 <<" is the greatest number";
    }
    }
    else if (num2 >= num3)
    {
        cout << num2 <<" is the greatest number";
    }
    else if (num3 >= num1 && num3 >= num2)
    {
        cout << num3 <<" is the greatest number";
    }
}*/

/*void CommaNumber()
{
int num;
cout << "Please enter a six digit number: ";
cin >> num;
int BComma = num/1000;
int AComma = num %1000;
cout << "The Number with comma here : " << BComma << "," <<AComma; 
}
*/

/*void SimpleCalculatorUsingIf()
{
int num1 = 0;
int num2 = 0;
int result = 0;
int code = 0;

cout << "=============================\n";
cout << "code   |    the Operation\n";
cout << " 1     |        \"+\"\n"; 
cout << " 2     |        \"-\"\n";
cout << " 3     |        \"*\"\n";
cout << " 4     |        \"/\"\n";
cout << "=============================\n\n";
cout << "Enter Operation code: ";
cin >> code;
if(code == 1 || code == 2 || code == 3 || code ==4)
{
    cout << "Enter the first number: ";
cin >> num1;

cout << "Enter the second number: ";
cin >> num2;

switch (code)
{
case 1:
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result;
    break;

case 2:
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result;
    break;

case 3:
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result;
    break;

case 4:
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result;
    break;
}
}
else
{
cout << "Error : number " << code <<" is not an operation code";
}
}
*/

/*void SimpleCalculatorUsingSwitch()
{
int num1 = 0;
int num2 = 0;
int result = 0;
int code = 0;

cout << "=============================\n";
cout << "code   |    the Operation\n";
cout << " 1     |        \"+\"\n"; 
cout << " 2     |        \"-\"\n";
cout << " 3     |        \"x\"\n";
cout << " 4     |        \"/\"\n";
cout << "=============================\n\n";
cout << "Enter Operation code: ";
cin >> code;

if(code == 1 || code == 2 || code == 3 || code ==4)
{

cout << "Enter the first number: ";
cin >> num1;

cout << "Enter the second number: ";
cin >> num2;

switch (code)
{
case 1 :
result = num1 + num2;
cout << num1 << " + " << num2 << " = " << result;
break;
case 2 :
result = num1 - num2;
cout << num1 << " - " << num2 << " = " << result;
break;
case 3 :
result = num1 * num2;
cout << num1 << " x " << num2 << " = " << result;
break;
case 4 :
result = num1 / num2;
cout << num1 << " / " << num2 << " = " << result;
break;
default:
cout << "unknown error";
}
}
else 
{
cout << "Error : Wrong Operation Used!";
}
}*/

/*void SequenceGame()
{
int Questions[4] [5]
    {
        {1,1,2,3,5},
        {20,15,10,5,0},
        {2,4,6,8,10},
        {2,5,7,9,11}
    };
    int answers[4];
    int points;

    cout <<"Solve the following Questions \n";
    cout <<"Question 1: 1|1|2|3|?? \n";
    cout << "your answer : ";
    cin >> answers[0];
    cout <<"Question 2: 20|15|10|5|?? \n";
    cout << "your answer : ";
    cin >> answers[1];
    cout <<"Question 3: 2|4|6|8|?? \n";
    cout << "your answer : ";
    cin >> answers[2];
    cout <<"Question 4: 2|5|7|9|?? \n";
    cout << "your answer : ";
    cin >> answers[3];
    if(answers [0] == Questions [0][4])
    {
        points++;
    }
    if(answers [1] == Questions [1][4])
    {
        points++;
    }
    if(answers [2] == Questions [2][4])
    {
        points++;
    }
    if(answers [3] == Questions [3][4])
    {
        points++;
    }

    cout <<"\n\nyour total points are "<<points<<" from 4\n";

    cout<<"\nsolution:\n";
    cout <<"Question 1: 1|1|2|3|?? \n";
    cout<<"your answer : "<<answers[0]<<"   correct answer : "<<Questions[0][4]<<"\n\n";

    cout <<"Question 2: 20|15|10|5|?? \n";
    cout<<"your answer : "<<answers[1]<<"   correct answer : "<<Questions[1][4]<<"\n\n";

    cout <<"Question 3: 2|4|6|8|?? \n";
    cout<<"your answer : "<<answers[2]<<"   correct answer : "<<Questions[2][4]<<"\n\n";

    cout <<"Question 4: 2|5|7|9|?? \n";
    cout<<"your answer : "<<answers[3]<<"   correct answer : "<<Questions[3][4]<<"\n\n";
}
*/