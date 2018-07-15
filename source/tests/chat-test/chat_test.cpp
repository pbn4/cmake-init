
#include <gmock/gmock.h>


#include <chat/chat.h>

class chat_test: public testing::Test
{
public:
};

TEST_F(chat_test, CheckSomeResults)
{
    EXPECT_EQ((unsigned int) 10, chat::getValue());
}
