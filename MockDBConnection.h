//мок класс для DBConnection
#pragma once
#include "gmock/gmock.h"
#include "DBConnection.h"

class MockDBConnection : public DBConnection {
public:
    MOCK_METHOD(bool, open, (), (override));
    MOCK_METHOD(void, close, (), (override));
    MOCK_METHOD(int, execQuery, (const std::string& query), (override));
};