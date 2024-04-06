#include "list.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace test {

using namespace testing;

class LinkedListTest : public Test
{
public:
    LinkedListTest() = default;
};

TEST_F(LinkedListTest, SizeTest)
{
    CustomLinkedList list;
    list.push_back("first");
    EXPECT_EQ(list.size(), 1);
}

TEST_F(LinkedListTest, PopFront)
{
    CustomLinkedList list;
    list.push_back("first");
    EXPECT_EQ(list.pop_front(), "first");
}

TEST_F(LinkedListTest, PopFrontEmpty)
{
    CustomLinkedList list;
    EXPECT_FALSE(list.pop_front().has_value());
}

TEST_F(LinkedListTest, SeveralPushedAndPops)
{
    CustomLinkedList list;
    list.push_back("second");
    list.push_back("third");
    list.push_front("first");
    EXPECT_EQ(list.pop_back(), "third");
    EXPECT_EQ(list.pop_front(), "first");
    EXPECT_EQ(list.pop_front(), "second");
}

} // namespace test
