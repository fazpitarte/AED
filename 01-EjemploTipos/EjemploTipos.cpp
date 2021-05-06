#include <iostream>
#include <cassert>

using namespace std;

string palabra1 = "casa";
string palabra2 = "perro";
string palabra3 = "palindromo";

unsigned num1 = {10};
unsigned num2 = {50}; 
unsigned num3 = {3};

int main () {

    //Tipo Bool
    assert (false==false);
    assert (false!=true);
    assert (false or true);
    assert (true and true);
    assert (not false);

    //Tipo Char
    assert ('a'=='a');
    assert ('a'!='b');
    assert ('a'<='b');
    assert ('c'>='b');
    assert ('2'+'3' == 'e');
    assert ('z'-'A' == '9');
    assert ('!'*' '==1056);
    assert ('B'/'!'==2);
    assert ('}'%'!'==26);
    
    //Tipo Unsigned

    assert (num1==num1);
    assert (num1!=num2);
    assert (num1<=num2);
    assert (num2>=num1);
    assert (num1+num2 == 60);
    assert (num2-num1 == 40);
    assert (num1*num2==500);
    assert (num2/num1==5);
    assert (num2%num3==2);

    //Tipo Int

    assert (5==5);
    assert (5!=6);
    assert (5<=6);
    assert (7>=6);
    assert (5+6 == 11);
    assert (6-5 == 1);
    assert (5*2 ==10);
    assert (10/2 ==5);
    assert (50%3 ==2);

    //Tipo Double

    assert (1.8==1.8);
    assert (1.8!=1.9);
    assert (1.8<=1.9);
    assert (1.9>=1.6);
    assert (1.6+1.6 == 3.2);
    assert (1.8-1.3 == 0.5);
    assert (1.2*2.2==2.64);
    assert (2.64/2.2==1.2);
   
    //Tipo String

    assert (palabra1==palabra1);
    assert (palabra1!=palabra2);
    assert (palabra1<= palabra2);
    assert (palabra2>=palabra1);
    assert (palabra1 +palabra2 == "casaperro");
    assert (palabra1.length () == 4);
    
}