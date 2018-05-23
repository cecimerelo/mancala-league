#include "Bot.h"
#include "SimulatorLink.h"
#include <iostream>

<<<<<<< Updated upstream
#include "RandomBot.h"
=======
#include "qwerty.h"
>>>>>>> Stashed changes

using namespace std;

int main() {

  SimulatorLink sim; // Enlace con el simulador
  Bot *bot = 0;      // Bot que se ejecutará en el simulador

  // MODIFICAR: Declarar aquí el bot del alumno. Ejemplo:
  RandomBot *rb = new RandomBot();

  // MODIFICAR: Asignar el bot del alumno a la variable bot. Ejemplo:
  bot = (Bot*)rb;

  // Se establece el bot del alumno como bot del simulador
  sim.setBot(bot);

  // Ejecutamos la simulación
  bool salida = sim.run();

  // MODIFICAR: Eliminamos el bot del alumno. Ejemplo:
  delete rb;

  // Ejecutamos la simulación
  if (!salida) {
    cerr << "\n\n\tSIMULACION ABORTADA.\n\n";
  } else {
    cerr << "\n\n\tFIN DE LA PARTIDA CON EXITO.\n\n";
  }

  return 0;
}
