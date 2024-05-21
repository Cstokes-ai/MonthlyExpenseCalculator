cmake_minimum_required(VERSION 3.26)
project(MonthlyExpenseCalculator C)

set(CMAKE_C_STANDARD 11)

add_executable(MonthlyExpenseCalculator
        Items.c
        Main.c)
