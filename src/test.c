#include <stdio.h>
#include <string.h>

void f(char const* db_root, char const* relative_path) {
    const char path[strlen(db_root) + strlen(relative_path) ];
    sprintf(path, "%s%s", db_root, relative_path);
    printf("%s\n", path);
}

int main() {
    f("/var/db", "foo/bar");

    return 0;
}
