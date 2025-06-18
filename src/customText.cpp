#include "customText.hpp"

void CustomText::DrawCentered_DEFAULT(const char *text, float x, float y, float size, Color color, float width)
{
    float new_x = (x + width / 2) - (MeasureText(TextFormat(text), size) / 2);
    DrawText(text, new_x, y, size, color);
}
