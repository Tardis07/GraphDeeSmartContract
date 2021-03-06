#include "vntlib.h"

 
KEY uint16 count = 0;
KEY uint256 max = 65535;

constructor For4(){
}

MUTABLE
uint16 test1() {

    Require(max <= 65535, "max < 65535");
    for(uint16 i = 0; i < max; i++) {
        count++;
        PrintStr("uint32:", "uint32 > 1000000000");
    }

    return count;
}

MUTABLE
void test2() {
    PrintUint256T("count:", count);
    test3();
}

MUTABLE
uint16 test3() {

    uint16 res = test1();

    while(res != 0) {
        res--;
        count += res;
    }

    return count;
}

_() {
    test3();
}