#include"atmcash.h"
#include"unity.h"


void setUp()
{

}
void tearDown()
{

}

void test_depositcash(void)
{
    TEST_ASSERT_EQUAL(27000,depositcash(25000));
}
void test_withdrawcash(void)
{
    TEST_ASSERT_EQUAL(2000,withdrawcash(25000));
}
void test_exitmenu(void)
{
     TEST_ASSERT_EQUAL(7,exitmenu());
}
void test_balance_enquiry(void)
{
     TEST_ASSERT_EQUAL(25000,balance_enquiry(25000));
}



int main()
{
    UNITY_BEGIN();
   RUN_TEST(test_balance_enquiry);
   RUN_TEST(test_depositcash);
   RUN_TEST(test_exitmenu);
   RUN_TEST(test_withdrawcash);

    return UNITY_END();
}
