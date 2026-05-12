#pragma once

#include <vector>
#ifndef MESSAGE_DAT_HPP

#define MESSAGE_DAT_HPP
#include <iostream>
#include "Attachment.hpp"

void append(unsigned long conversation, unsigned long uid, std::string message, std::vector<Attachment> attachments);

#endif