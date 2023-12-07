cmake_minimum_required(VERSION 3.10)
project(calculator)

set(SOURCES
	calculator.cpp
	calculator2.cpp
	calculator.h
)

add_executable(calculator ${SOURCES})
