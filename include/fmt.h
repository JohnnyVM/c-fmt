#include <stdlib.h>

#include "hash_table.h"

#define fmt hash_table

struct fmt_char {
	char* string;
	size_t length;
};

/**
 * \brief set the  key value pair
 */
int fmt_var(struct fmt* fmt, const char* key, const char* value, size_t len);

