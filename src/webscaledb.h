#ifndef WEBSCALEDB_H
#define WEBSCALEDB_H

/**
 * This is Web Scale DB API
 * for the maximum power
 */

#include <stdio.h>

FILE * webscaledb_fopen(char const* db_root, char const* relative_path, char const* mode);
/*
size_t webscaledb_fread(void * ptr, size_t size, size_t nmemb, FILE * stream);
size_t webscaledb_fwrite(void const* ptr, size_t size, size_t nmemb, FILE * stream);
int webscaledb_fclose(FILE * fp);
*/

#endif

