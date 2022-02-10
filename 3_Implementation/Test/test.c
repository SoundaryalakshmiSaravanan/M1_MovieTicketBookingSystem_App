#include "unity.h"
#include "function.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_changeamountticket(void)
{
    int amount1=700;
    TEST_ASSERT_EQUAL(700,changeamountticket(amount1));
    
}

int main(void)
{
  UNITY_BEGIN();
  
  RUN_TEST(test_changeamountticket);
  return UNITY_END();
}