#pragma once

#include <memory>

class Handler
{
public:
    virtual std::shared_ptr<Handler> setNext(const std::shared_ptr<Handler>& handler) = 0;
    [[nodiscard]] virtual std::string handle(std::string request) = 0;
};
