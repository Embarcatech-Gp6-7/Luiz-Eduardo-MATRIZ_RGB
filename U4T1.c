#include <stdio.h>
#include "pico/stdlib.h"
#include "U4T1.h"

void initGpio() {
    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);
}

void initBuzzerPwm() {
    gpio_set_function(BUZZER, GPIO_FUNC_PWM);
    uint slice_num = pwm_gpio_to_slice_num(BUZZER);

    pwm_clear_irq(slice_num);
    pwm_set_irq_enabled(slice_num, true);

    pwm_config config = pwm_get_default_config();
    pwm_config_set_clkdiv(&config, 4.f);
    pwm_init(slice_num, &config, true);
}

int main() {
    stdio_init_all();

    initGpio();
    initKeypad();
    initBuzzerPwm();
    initNeoPixel();

    while (true) {
        char key = getKey();

        switch (key) {
            case '1':
                Tecla1(); // Ação para a tecla 1
                break;
            case '2':
                tecla2(); // Ação para a tecla 2
                break;
            case '3':
                Tecla3(); // Ação para a tecla 3
                break;
            case '5':
                tecla5(); // Ação para a tecla 5
                break;
            case '6':
                tecla6(); // açao para tecla6
                break;    
            case '7':
                Tecla7(); // Ação para a tecla 7
                break;
            case '8':
                Tecla8(); // Ação para a tecla 8
                break;
            case '9':
                tecla9(); // Ação para a tecla 9
                break;
            case 'A':
                teclaA(); // Ação para a tecla A
                break;
            case 'B':
                teclaB(); // Ação para a tecla B
                break;
            case 'C':
                teclaC(); // Ação para a tecla C
                break;
            case 'D':
                TeclaD(); // Ação para a tecla D
                break;
            case '*':
                tecla_asterisco(); // Ação para a tecla '*'
                break;
            case '#':
                tecla_hash(); // Ação para a tecla '#'
                break;
            default:
                break;
        }

        sleep_ms(100); // Intervalo entre leituras do teclado
    }
}