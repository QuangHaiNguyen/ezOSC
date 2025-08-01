#include "ez_osc.hpp"
#include "ez_logger.hpp"
#include <iostream>

ezOsc::ezOsc(/* args */)
{
    LOG_DEBUG("OSC object created.");
}

ezOsc::~ezOsc()
{
    std::cout << "OSC object destroyed." << std::endl;
}
