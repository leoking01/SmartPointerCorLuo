cmake_minimum_required(VERSION 3.5)

project(SmartPointerCorLuo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(  ./smartPointerDef ./  )

add_executable(SmartPointerCorLuo
    main.cpp
    Curve.h
    smartPointerDef/smart_ptr.h
    smartPointerDef/defs.h
    )


