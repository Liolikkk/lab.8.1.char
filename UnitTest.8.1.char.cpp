#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.8.1.char/lab.8.1.char.cpp" // Уточніть шлях

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
    TEST_CLASS(UnitTest81char)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Приклад тесту для функції FindThirdDot
            char str[] = "a.b.c.d.e";
            int result = FindThirdDot(str, 0, 0);
            Assert::AreEqual(5, result); // Очікується індекс третьої крапки
        }
    };
}
