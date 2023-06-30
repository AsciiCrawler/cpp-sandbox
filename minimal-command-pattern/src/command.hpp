#pragma once
#include "vector"
#include "string"

class Command
{
public:
    virtual void execute() = 0;
private:
};