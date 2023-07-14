#include "../include/AbstractHandler.hpp"

AbstractHandler::AbstractHandler() : next_handler{}
{}

std::shared_ptr<Handler> AbstractHandler::setNext(const std::shared_ptr<Handler>& handler)
{
    this->next_handler = handler;
    return handler;
}

std::string AbstractHandler::handle(std::string request)
{
    if (this->next_handler)
    {
        return this->next_handler->handle(request);
    }
    return {};
}
