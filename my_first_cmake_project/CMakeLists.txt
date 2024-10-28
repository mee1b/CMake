# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.22)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
project ("my_first_cmake_project")

# Включите подпроекты.
add_subdirectory ("my_first_cmake_project")
