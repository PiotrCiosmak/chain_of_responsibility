#pragma once

#include "Handler.hpp"

class AbstractHandler : public Handler
{
public:
    AbstractHandler();
    std::shared_ptr<Handler> setNext(const std::shared_ptr<Handler>& handler) override;
    [[nodiscard]] std::string handle(std::string request) override;

private:
    std::shared_ptr<Handler> next_handler;
};
