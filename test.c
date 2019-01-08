#include "aiv_unit_test.h"
#include "math.h"

TEST(screen_space_to_pixel_conversion)
{
    point2_t result = screen_space_to_pixel(0.5, 0.5, 400, 400);

    ASSERT_THAT(result.x == 300);
    ASSERT_THAT(result.y == 300);

}
TEST(screen_space_to_pixel_conversion_negative)
{
    point2_t result = screen_space_to_pixel(-0.5, -0.5, 400, 400);

    ASSERT_THAT(result.x == 100);
    ASSERT_THAT(result.y == 100);
}

int main(int argc, char **argv)
{
    RUN_TEST(screen_space_to_pixel_conversion);
    RUN_TEST(screen_space_to_pixel_conversion_negative);

    PRINT_TEST_RESULTS();
    return 0;
}
