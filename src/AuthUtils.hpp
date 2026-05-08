#pragma once
#include <iostream>
#ifndef AUTHUTILS_HPP

#define AUTHUTILS_HPP

bool stringMatchesHash(std::string password, std::string hash);

#endif