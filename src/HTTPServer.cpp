#include "HTTPServer.hpp"
#include <iostream>

using namespace std;

void startup(express::Express app) {

    cout << "Starting HTTP Server" << endl;
    app.get("/", [](const express::Request &req, express::Response &res) {
        std::cout << "ok /" << std::endl;
        res.end("ok");
    });

    app.get("/parameters/:id/others/:other",
            [](const express::Request &req, express::Response &res) {
                std::cout << "ok /parameters/" << req.params("id") << "/others/"
                        << req.params("other") << std::endl;
                res.end("ok");
            });

    app.post("/post", [](const express::Request &req, express::Response &res) {
        std::cout << "ok /port " << req.body() << std::endl;
        res.end("ok post");
    });

    app.listen();

}

