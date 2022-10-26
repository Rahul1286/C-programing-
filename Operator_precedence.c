/*In C language si,ple mathematical rules like BODMAS, no longer applied.

OPERATOR PREDECENDE:-
                    The following table lists the operator priority in C,



    PRIORITY                        OPERATOR
    1st                             * , / , %
    2nd                             + , -
    3rd                              =


Operators of higher priority are evaluated first int he absence of parenthesis.

Operotors Associativity:- 
                        When operators of equal priority are present in an expression ,
the file is take are of by associativity.


        x * y / z =>  (x * y)/z
*/

#include <stdio.h>
int main(){
    int x = 2 , y = 3;
    printf("The value of 3*x - 8*y is %d\n", 3 * (x - 8*y) );
    printf("The value of 3*x - 8*y is %d\n", 8 * x - 3*y );
    return 0;
}