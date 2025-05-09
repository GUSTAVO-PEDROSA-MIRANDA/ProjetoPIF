#include "../cli-lib/include/cli-lib.h"  // Inclui a biblioteca
#include <stdio.h>               // Outras bibliotecas padrão (se necessário)

int main() {
    // Inicializa a biblioteca
    screenInit(1);
    keyboardInit();
    timerInit(60);  // 60 FPS

    // Loop principal do jogo
    int ch = 0;
    while (ch != 'q') {  // Sai ao pressionar 'q'
        if (keyhit()) {
            ch = readch();
            // Lógica do teclado aqui
        }

        if (timerTimeOver()) {
            // Atualiza a tela e a lógica do jogo
            screenClear();
            screenDraw(10, 10, "PONG");  // Exemplo: desenha texto
            screenUpdate();
        }
    }

    // Finaliza a biblioteca
    keyboardDestroy();
    screenDestroy();
    timerDestroy();
    return 0;
}
