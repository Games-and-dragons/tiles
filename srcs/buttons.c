#include "SDL_Master.h"

void render_button(Master *master, SDL_Rect rect, color_rgba  color, bool fill)
{
	SDL_SetRenderDrawColor(master->display->renderer, color.bit_data.r,color.bit_data.g,color.bit_data.b, color.bit_data.a);

    if (fill)
        SDL_RenderFillRect(master->display->renderer, &rect);
    else
        SDL_RenderDrawRect(master->display->renderer, &rect);
}

//Not needed for this test, but the button should simply change their color instead of calling the rendering functions

void test_button_click(Master *master, button *button)
{
	render_button(master, button->hitbox, button->color_clicked, true);
}

void test_button_hover(Master *master, button *button)
{
	render_button(master, button->hitbox, button->color_clicked, false);
}

void test_button_render(Master *master, button *button)
{
    render_button(master, button->hitbox, button->color_default, false);
}