#include "webscaledb.h"

#include <stdio.h>
#include <string.h>

FILE * webscaledb_fopen(char const* db_root, char const* relative_path, char const* mode) {
    char * path[strlen(db_root) + strlen(relative_path)];
    sprintf(path, "%s%s", db_root, relative_path);
    return fopen(path, mode);
}

/*
size_t webscaledb_fread(void * ptr, size_t size, size_t nmemb, FILE * stream);
size_t webscaledb_fwrite(void const* ptr, size_t size, size_t nmemb, FILE * stream);
int webscaledb_fclose(FILE * fp);
*/


