//класс имитирующий работу с базой данных
#pragma once
#include "DBConnection.h"

class ClassThatUsesDB {
public:
    ClassThatUsesDB(DBConnection* connection) : connection_(connection), isOpen_(false) {}
    //имитация открытия соединения
    bool openConnection() {
        if (!connection_) {
            // Обработка ошибки, если соединение не установлено.
            return false;
        }

        if (!connection_->open()) {
            // Обработка ошибки открытия соединения.
            return false;
        }

        isOpen_ = true;
        return true;
    }
    //имитация использования соединения
    int useConnection(const std::string& query) {
        if (!isOpen_) {
            // Обработка ошибки, если соединение не открыто.
            return false;
        }

        return connection_->execQuery(query);
    }
    //имитация закрытия соединения
    void closeConnection() {
        if (isOpen_) {
            connection_->close();
            isOpen_ = false;
        }
    }

private:
    DBConnection* connection_;
    bool isOpen_;
};