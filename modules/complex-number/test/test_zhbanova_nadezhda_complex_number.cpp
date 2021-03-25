// Copyright 2021 Nadezhda Zhbanova

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Nadezhda_Zhbanova_ComplexNumberTest, divide_by_zero) {
    ComplexNumber z1;
    ComplexNumber z2(z1);

    EXPECT_ANY_THROW(z2 / z1);
}

TEST(Nadezhda_Zhbanova_ComplexNumberTest, divide_the_number_by_itself) {
    ComplexNumber z1(3.0, 7.0);
    ComplexNumber z2;
    double re = 3.0;
    double im = 7.0;
    z2.setRe(re);
    z2.setIm(im);
    ComplexNumber z = z2 / z1;

    ComplexNumber expected_z(1.0, 0.0);
    EXPECT_EQ(z, expected_z);
}

TEST(Nadezhda_Zhbanova_ComplexNumberTest, difference_and_get_re_get_im) {
    ComplexNumber z1(3.0, 7.0);
    ComplexNumber z2(6.0, 6.0);
    ComplexNumber z = z2 - z1;

    EXPECT_EQ(3.0, z.getRe());
    EXPECT_EQ(-1.0, z.getIm());
}
