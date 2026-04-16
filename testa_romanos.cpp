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


TEST_CASE("Numeros romanos - algarismos invalidos", "[romanos]") {
    CHECK(romanos_para_decimal("G") == -1);
    CHECK(romanos_para_decimal("i") == -1);
    CHECK(romanos_para_decimal("7") == -1);
    CHECK(romanos_para_decimal("@") == -1);
}

TEST_CASE("Numeros romanos - soma dos algarismos sem sinal", "[romanos]") {
    CHECK(romanos_para_decimal("III") == 3);
    CHECK(romanos_para_decimal("XX") == 20);
    CHECK(romanos_para_decimal("VI") == 6);
    CHECK(romanos_para_decimal("VIII") == 8);
}

TEST_CASE("Numeros romanos - verificar tamanho do vetor", "[romanos]") {
    CHECK(romanos_para_decimal("IIIVXXXLCCCDMMMIIIXXX") == 3087);
    CHECK(romanos_para_decimal("IIIVVVXXXLLLCCCDDDMMMIIIVVVXXXL") == -1);
    CHECK(romanos_para_decimal("IIIVVVXXXLLLCCCDDDMMMIIIVVVXXXLLL") == -1);
    CHECK(romanos_para_decimal("VIII") == 8);
    CHECK(romanos_para_decimal("CXXXI") == 131);
}

TEST_CASE("Numeros romanos - verificar repeticao de caracteres", "[romanos]") {
    CHECK(romanos_para_decimal("IIII") == -1);
    CHECK(romanos_para_decimal("III") == 3);
    CHECK(romanos_para_decimal("XXXX") == -1);
    CHECK(romanos_para_decimal("XXX") == 30);
    CHECK(romanos_para_decimal("CCCC") == -1);
    CHECK(romanos_para_decimal("CCC") == 300);
    CHECK(romanos_para_decimal("MMMM") == -1);
    CHECK(romanos_para_decimal("MMM") == 3000);
    CHECK(romanos_para_decimal("VV") == -1);
    CHECK(romanos_para_decimal("LL") == -1);
    CHECK(romanos_para_decimal("DD") == -1);
}

TEST_CASE("Numeros romanos - adicionar sinal nos numeros que devem ser negativos", "[romanos]") {
    CHECK(romanos_para_decimal("IV") == 4);
    CHECK(romanos_para_decimal("IX") == 9);
    CHECK(romanos_para_decimal("XIX") == 19);
    CHECK(romanos_para_decimal("XLV") == 45);
    CHECK(romanos_para_decimal("LIX") == 59);
}

TEST_CASE("Numeros romanos - teste final", "[romanos]") {
    CHECK(romanos_para_decimal("I") == 1);
    CHECK(romanos_para_decimal("XIV") == 14);
    CHECK(romanos_para_decimal("LXXIII") == 73);
    CHECK(romanos_para_decimal("CXI") == 111);
    CHECK(romanos_para_decimal("CCCLXXVIII") == 378);
    CHECK(romanos_para_decimal("DLXIX") == 569);
    CHECK(romanos_para_decimal("DCCCXVII") == 817);
    CHECK(romanos_para_decimal("CMLXXXIX") == 989);
}

#endif
