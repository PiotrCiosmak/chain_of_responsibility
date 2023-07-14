#include "../include/DogHandler.hpp"

std::string DogHandler::handle(std::string request)
{
    if (request == "MeatBall")
    {
        return "Dog: I'll eat the " + request + ".\n";
    }
    else
    {
        return AbstractHandler::handle(request);
    }
}
