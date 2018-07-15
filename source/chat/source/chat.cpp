
#include <iostream>

#include <template/template-version.h>

#include <chat/chat.h>

#include <boost/chrono.hpp>

namespace chat
{


int getValue()
{
    boost::chrono::duration<int> sec(10);
    std::cout << sec << std::endl;
    return (int)10;
}


} // namespace chat
