cmake_minimum_required(VERSION 3.10)
project(C C)

set(CMAKE_C_STANDARD 99)

add_executable(C main.c learn/basic/compare/compare.c learn/basic/compare/compare.h learn/basic/multipletable/table.c learn/basic/multipletable/table.h learn/basic/string/str.c learn/basic/string/str.h learn/basic/string/is_number.c learn/basic/string/is_number.h learn/basic/point/basic.c learn/basic/point/basic.h learn/basic/point/sum.c learn/basic/point/sum.h learn/basic/point/array.c learn/basic/point/array.h learn/basic/struct/struct_basic.c learn/basic/struct/struct_basic.h learn/basic/struct/typedef_struct.c learn/basic/struct/typedef_struct.h)