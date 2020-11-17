/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// *******************
// isPalindrome Tests
// *******************

TEST(PracticeTest, is_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, empty_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbol_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("/$/$/");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, number_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("12321");
    ASSERT_TRUE(actual);
}

// *********************
// sortDescending Tests
// *********************

TEST(PracticeTest, sort_ascending)
{	
	int a = 1;
	int b = 2;
	int c = 3;
    Practice obj;
    obj.sortDescending(a,b,c);
    ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_descending)
{
	int a = 3;
	int b = 2;
	int c = 1;
    Practice obj;
    obj.sortDescending(a,b,c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}


TEST(PracticeTest, sort_mixed)
{
	int a = 2;
	int b = 3;
	int c = 1;
    Practice obj;
    obj.sortDescending(a,b,c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_negative)
{
	int a = -3;
	int b = -2;
	int c = -1;
    Practice obj;
    obj.sortDescending(a,b,c);
	ASSERT_EQ(a, -1);
	ASSERT_EQ(b, -2);
	ASSERT_EQ(c, -3);
}

TEST(PracticeTest, sort_two_same)
{
	int a = 1;
	int b = 2;
	int c = 2;
    Practice obj;
    obj.sortDescending(a,b,c);
	ASSERT_EQ(a, 2);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_fraction)
{
	int a = 1/2;
	int b = 2/3;
	int c = 2/5;
    Practice obj;
    obj.sortDescending(a,b,c);
	ASSERT_EQ(a, 2/3);
	ASSERT_EQ(b, 1/2);
	ASSERT_EQ(c, 2/5);
}
