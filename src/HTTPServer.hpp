#pragma once
#include <string>
#include <cstring>
#include <sys/socket.h>
#ifndef HTTPSERVER_HPP

#define HTTPSERVER_HPP

#define PORT_HTTP 8080
#define BUFFER_SIZE 4096

int startupHTTP();

#endif
