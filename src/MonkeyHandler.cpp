#include "../include/MonkeyHandler.hpp"

std::string MonkeyHandler::handle(std::string request)
{
    if (request == "Banana")
    {
        return "Monkey: I'll eat the " + request + ".\n";
    }
    else
    {
        return AbstractHandler::handle(request);
    }
}
