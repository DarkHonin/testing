#include "libtest.h"

int main(void)
{
    int a = 20;
    int b = 20;
    int c = 10;

    char *str1 = "Hello";
    char *str2 = "Hello";
    char *str3 = "NOT Hello";

    test("INT::Is equals", MK_T_INT(a), MK_T_INT(b));
    test_n("INT::Is not equals", MK_T_INT(a), MK_T_INT(c));
    test("STR::Is equals", MK_T_PNTR(str1, 6), MK_T_PNTR(str2, 6));
    test_n("STR::Is not equals", MK_T_PNTR(str1, 5), MK_T_PNTR(str3, 5));
}