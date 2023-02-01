#include <stdio.h>
#include <assert.h>
#include "drivetype.h"

int main(int argc, char* argv[]) {
    assert(detect_drive_type("sda") == 0 || detect_drive_type("sda") == 1);
    assert(detect_drive_type("doesnotexists") == 2);
}
