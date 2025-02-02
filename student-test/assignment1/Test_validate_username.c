#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
 * This function should:
 *   1) Call the my_username() function in autotest-validate.c to get your hardcoded username.
 *   2) Obtain the value returned from function malloc_username_from_conf_file() in username-from-conf-file.h within
 *      the assignment autotest submodule at assignment-autotest/test/assignment1/
 *   3) Use unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE to verify the two strings are equal.
 */
void test_validate_my_username()
{
    // Call my_username to get the hardcoded username
    const char *hardcoded_username = my_username();

    // Call malloc_username_from_conf_file to get the dynamically allocated username
    char *file_username = malloc_username_from_conf_file();

    // Verify that the two strings are equal
    TEST_ASSERT_EQUAL_STRING_MESSAGE(
        hardcoded_username,
        file_username,
        "The hardcoded username does not match the username from the configuration file."
    );

    // Free the allocated memory
    free(file_username);
}
