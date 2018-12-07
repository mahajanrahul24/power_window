#include "main.h"
#include "up.h"
#include "down.h"
#include "unity.h"


void test_Window_UP(void)
{
TEST_ASSERT_EQUAL_UINT8(1, Power_Window_UP_Mode(1, 1, 1));
TEST_ASSERT_EQUAL_UINT8(1, Power_Window_UP_Mode(0, 1, 1));
TEST_ASSERT_EQUAL_UINT8(1, Power_Window_UP_Mode(1, 0, 1));
TEST_ASSERT_EQUAL_UINT8(0, Power_Window_UP_Mode(0, 0, 1));
}

void Test_DownWindow(void)
{
TEST_ASSERT_EQUAL_UINT8(2, windowDown(1, 1, 1));
TEST_ASSERT_EQUAL_UINT8(2, windowDown(0, 1, 1));
TEST_ASSERT_EQUAL_UINT8(2, windowDown(1, 0, 1));
TEST_ASSERT_EQUAL_UINT8(0, windowDown(0, 0, 1));
}


int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Window_UP);
RUN_TEST(Test_DownWindow);  
return UNITY_END();
}

