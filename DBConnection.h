//класс интерфейс
#pragma once
#include <string>

class DBConnection {
public:

    virtual ~DBConnection() {} 

    virtual bool open() = 0;
    virtual void close() = 0;
    virtual int execQuery(const std::string& query) = 0;
};