#ifndef DRIVETYPE_H
#define DRIVETYPE_H

#include <stdio.h>

typedef enum {
    HDD_DRIVE,
    SDD_DRIVE,
    ERR_ACCESS,
} DriveType;

DriveType detect_drive_type(char* drive_acronym) {
    char drive_type_path[1024];
    DriveType drive_type;

    sprintf(drive_type_path, "/sys/block/%s/queue/rotational", drive_acronym);
    FILE* f = fopen(drive_type_path, "r");
    if (!f) return ERR_ACCESS;
    fscanf(f, "%d", &drive_type);

    return drive_type;
}

#endif
