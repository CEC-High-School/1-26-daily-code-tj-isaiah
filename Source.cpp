#include <allegro5/allegro.h>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
int main() {
	srand(time(NULL));
	al_init();
	ALLEGRO_DISPLAY*gamewindow = al_create_display(600, 600);
	while (1) {
		al_clear_to_color(al_map_rgb(rand(), rand(), rand()));
		al_flip_display();
		system("Pause");
		system("cls");
	}
}