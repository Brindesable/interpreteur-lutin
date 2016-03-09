cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
project(Lutin)

#Génération de la liste des fichiers sources

file(

        GLOB_RECURSE

        source_files

        *

)

include_directories(../src)

#Déclaration de l'exécutable

add_executable(

        main

        ${source_files}

)
target_link_libraries(main -lboost_regex)
