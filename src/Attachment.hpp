#pragma once

#include <iostream>

#ifndef ATTACHMENT_HPP

#define ATTACHMENT_HPP

class Attachment {

    private:
        std::string url;
    public:
        std::string getUrl();
        unsigned long uid;

};

#endif