#define CATCH_CONFIG_MAIN 
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#include "catch.hpp"
#include "romanos.hpp"


TEST_CASE( "Numeros romanos - algarismos unicos", "[romanos]" ) {
    REQUIRE(romanos_para_decimal("I") == 0);
}



/*
TEST_CASE( "Numeros romanos - algarismos inv�lidos", "[romanos]" ) {
    REQUIRE( romanos_para_decimal("G") == -1 );
    
    REQUIRE( romanos_para_decimal("i") == -1 );

    
}
 */
