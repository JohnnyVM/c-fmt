#include "fmt.h"
#include "hash_table.h"

void fmt_var(struct fmt* fmt, const char* key, const char* value, size_t len) {

	struct fmt_char string = { .string = value, .length = len };
	return hash_insert_char(fmt, key, string, len);
}

