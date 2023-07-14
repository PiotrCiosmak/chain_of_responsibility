#include "../include/SquirrelHandler.hpp"

std::string SquirrelHandler::handle(std::string request)
{
    if (request == "Nut")
    {
        return "Squirrel: I'll eat the " + request + ".\n";
    }
    else
    {
        return AbstractHandler::handle(request);
    }
}
