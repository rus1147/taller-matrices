cmake_minimum_required(VERSION 3.7)
project(Taller_03)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

set(SOURCE_FILES
        archivos/in/10000NumerosEntre1y50.in
        "archivos/in/100NumerosRandomEntre(1y10)1.in"
        "archivos/in/100NumerosRandomEntre(1y10)2.in"
        archivos/in/10NumerosEntre1y10EnOrden2.in
        archivos/in/10NumerosEntre1y50EnOrden1.in
        archivos/in/5000NumerosEntre1y1000EnOrden1.in
        archivos/in/5000NumerosEntre1y1000EnOrden2.in
        archivos/in/cantidadAparicionesDePalabra.in
        archivos/in/elementoMedio.in
        archivos/in/pocosNumerosRandom.in
        archivos/in/sinNumeros.in
        archivos/in/subSecuenciaCrecienteMasLarga.in
        archivos/in/unNumero.in
        archivos/sol/cantidadAparicionesVectorChico.sol
        archivos/sol/cantidadAparicionesVectorGrande.sol
        archivos/sol/ordenarSecuenciasMuchosNumeros.sol
        archivos/sol/ordenarSecuenciasPocosNumeros.sol
        archivos/sol/promedioMuchosNumerosRandom.sol
        Debug/gtest/subdir.mk
        Debug/lib/gtest/subdir.mk
        Debug/src/subdir.mk
        Debug/test/subdir.mk
        Debug/makefile
        Debug/objects.mk
        Debug/sources.mk
        Debug/subdir.mk
        lib/gtest/gtest-all.cc
        lib/gtest/gtest.h
        src/ejercicios.cpp
        src/ejercicios.h
        test/Ej1TEST.cpp
        test/Ej2TEST.cpp
        test/Ej3TEST.cpp
        test/Ej4TEST.cpp
        test/Ej5TEST.cpp
        main.cpp)

add_executable(Taller_03 ${SOURCE_FILES})