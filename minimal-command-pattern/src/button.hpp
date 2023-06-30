#pragma once
#include "vector"
#include "string"
#include "memory"
#include "command.hpp"

class Button
{
public:
    std::unique_ptr<Command> cmd;
    void trigger();

private:
};