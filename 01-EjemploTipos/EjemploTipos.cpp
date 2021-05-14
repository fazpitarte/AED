#include <iostream>
#include <cassert>
#include <string>

//using namespace std::string_literals;
using namespace std::literals;

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
    
    //Tipo Unsigned int

    assert (10U==10U);
    assert (10U!=50U);
    assert (10U<=50U);
    assert (50U>=10U);
    assert (10U+50U == 60U);
    assert (50U-10U == 40U);
    assert (10U*50U==500U);
    assert (50U/10U==5U);
    assert (50U%3U==2U);

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

    assert (std::string("casa")==std::string("casa"));
    assert (std::string("casa")!=std::string("perro"));
    assert (std::string("casa")<= std::string("perro"));
    assert (std::string("perro")>=std::string("casa"));
    assert (std::string("casa") + std::string("perro") == std::string ("casaperro"));
    assert (std::string ("casa").length () == 4);

    //Ejemplo sufijos y notacion cientifica

    assert ("casa"s.length()==4);   
    assert (10U==10U);
    assert (1.82E-5<=1.94E7);
    
}
