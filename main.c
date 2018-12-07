#include "main.h"
#include "up.h"
#include "unity.h"


void test_Window_UP(void)
{
TEST_ASSERT_EQUAL_UINT8(1, Power_Window_UP_Mode(1, 1, 1));
TEST_ASSERT_EQUAL_UINT8(1, Power_Window_UP_Mode(0, 1, 1));
TEST_ASSERT_EQUAL_UINT8(1, Power_Window_UP_Mode(1, 0, 1));
TEST_ASSERT_EQUAL_UINT8(0, Power_Window_UP_Mode(0, 0, 1));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Window_UP);
return UNITY_END();
}

