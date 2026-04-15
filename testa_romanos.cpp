// Copyright 2026 Romulo Uriel
#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#include "include/catch.hpp"
#include "include/romanos.hpp"


TEST_CASE("Numeros romanos - algarismos unicos", "[romanos]") {
    CHECK(romanos_para_decimal("I") == 1);
    CHECK(romanos_para_decimal("V") == 5);
    CHECK(romanos_para_decimal("X") == 10);
    CHECK(romanos_para_decimal("L") == 50);
    CHECK(romanos_para_decimal("C") == 100);
    CHECK(romanos_para_decimal("D") == 500);
    CHECK(romanos_para_decimal("M") == 1000);
}



/*
TEST_CASE( "Numeros romanos - algarismos inv�lidos", "[romanos]" ) {
    REQUIRE( romanos_para_decimal("G") == -1 );
    
    REQUIRE( romanos_para_decimal("i") == -1 );

    
}
 */

 #endif
