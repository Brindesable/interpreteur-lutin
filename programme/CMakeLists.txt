cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
project(Lutin CXX)

#Génération de la liste des fichiers sources

file(

        GLOB_RECURSE

        source_files

        sources/*

)

#Déclaration de l'exécutable

add_executable(

        main

        ${source_files}

)


ADD_CUSTOM_TARGET(
	   test
	      COMMAND make && cd ../Tests/ && ./mktest.sh  
	      )

target_link_libraries(main -lboost_regex)
