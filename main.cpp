#include "lib/gtest/gtest.h"
#include "src/ejercicios.h"

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);

	int res = RUN_ALL_TESTS();

	/*Escribir aquí las acciones necesarias para las funciones de los ejercicios
	 * que requieran utilizar la entrada y/o salida estándar*/


	return res;
}
