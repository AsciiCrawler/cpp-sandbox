#include "button.hpp"

void Button::trigger()
{
    if (this->cmd != nullptr)
        this->cmd->execute();
}