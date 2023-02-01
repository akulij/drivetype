#include <stdio.h>
#include <assert.h>
#include "drivetype.h"

#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(int argc, char* argv[]) {
    assert(detect_drive_type("sda") == 0 || detect_drive_type("sda") == 1);
    assert(detect_drive_type("doesnotexists") == 2);
    printf(ANSI_COLOR_CYAN "Tests passed!" ANSI_COLOR_RESET "\n");
}
