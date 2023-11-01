#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{

    Ventana v;

    Dibujo d1(1,1,"bomberman");
    Dibujo d2(1,1,"escenario");
    bool ejecucion = true;
    while (ejecucion)
    {
        //ciclo de actualizacion
        v.Actualizar();
        int input = getch();
        switch (input)
        {
            case 'q':
                ejecucion = false;
                break;
            case 'd':
                d1.AvanzarX(1);
                break;
            case 'a':
                d1.RetrocederX(1);
                break;
            case 'w':
                d1.RetrocederY(1); // Mueve hacia arriba en Y
                break;
            case 's':
                d1.AvanzarY(1); // Mueve hacia abajo en Y
                break;
        }
        //ciclo de dibujo
        clear();
        d2.Dibujar();
        d1.Dibujar();
        
        //v.Dibujar();

        refresh();
        usleep(41000); //24 fps
    }

    return 0;
}

