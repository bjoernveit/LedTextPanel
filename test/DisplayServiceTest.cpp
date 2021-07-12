#include <DisplayService.h>
#include <unity.h>

void test_hello_test(void) {
    TEST_ASSERT_EQUAL("HelloTest","HelloTest");
}

int main(int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(test_hello_test);
    UNITY_END();

    return 0;
}