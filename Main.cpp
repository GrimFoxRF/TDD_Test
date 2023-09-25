//тесты с моком объекта, имитирующим подключение к базе данных
#include <iostream>
#include "gtest/gtest.h"

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}