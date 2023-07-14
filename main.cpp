#include <iostream>
#include <vector>
#include "include/Handler.hpp"
#include "include/MonkeyHandler.hpp"
#include "include/SquirrelHandler.hpp"
#include "include/DogHandler.hpp"

void clientCode(const std::shared_ptr<Handler>& handler);

int main()
{
    std::shared_ptr<MonkeyHandler> monkey = std::make_shared<MonkeyHandler>();
    std::shared_ptr<SquirrelHandler> squirrel = std::make_shared<SquirrelHandler>();
    std::shared_ptr<DogHandler> dog = std::make_shared<DogHandler>();
    monkey->setNext(squirrel)->setNext(dog);

    std::cout << "Chain: Monkey > Squirrel > Dog" << std::endl;
    clientCode(monkey);

    std::cout << "\nSubchain: Squirrel > Dog" << std::endl;
    clientCode(squirrel);
}

void clientCode(const std::shared_ptr<Handler>& handler)
{
    std::vector<std::string> foods{"Nut", "Banana", "Cup of coffee"};
    for (const auto& food: foods)
    {
        std::cout << "Client: Who wants a " << food << "?" << std::endl;
        const std::string result{handler->handle(food)};
        if (!result.empty())
        {
            std::cout << " " << result;
        }
        else
        {
            std::cout << " " << food << " was left untouched." << std::endl;
        }
    }
}