# Projeto Teclado Matricial com NeoPixel 🚀

Este projeto implementa um teclado matricial 4x4 conectado a um microcontrolador RP2040 (Raspberry Pi Pico), que controla um display NeoPixel RGB de 5x5. Cada tecla do teclado aciona uma animação ou exibição específica no display NeoPixel.

## Funcionalidades das Teclas 🕹️

| Tecla | Funcionalidade |
|---|---|
| 0 | Não implementada  |
| 1 | Exibe uma sequência de imagens com as cores verde, vermelho e azul no display NeoPixel. |
| 2 | Apresenta uma animação com cores vibrantes em diagonal no display NeoPixel. |
| 3 | Mostra uma sequência de animações com cores e formas diferentes no display NeoPixel, culminando em um branco total e depois apagando o display. |
| 4 | Não implementada |
| 5 | Exibe uma sequência de padrões com cores azul, verde, laranja e azul no display NeoPixel. |
| 6 | Desenha o número 6 no display NeoPixel, adicionando os detalhes progressivamente. |
| 7 | Apresenta uma animação com cores verde, vermelho e azul em posições diferentes no display NeoPixel. |
| 8 | Mostra uma sequência de animações abstratas com cores diferentes.
| 9 | Anima o número 9 no display NeoPixel com a cor magenta. |
| A | Desliga todos os LEDs do display NeoPixel. |
| B | Acende todos os LEDs do display NeoPixel na cor azul, com 100% de intensidade. |
| C | Acende todos os LEDs do display NeoPixel na cor vermelha, com 80% de intensidade. |
| D | Acende todos os LEDs do display NeoPixel na cor verde, com 50% de intensidade. |
| * | Ativa o modo bootloader USB, permitindo a gravação de novo firmware. |
| # | Acende todos os LEDs do display NeoPixel na cor branca, com 20% de intensidade. |

## Hardware 🛠️

- Microcontrolador RP2040 (Raspberry Pi Pico).
- Teclado Matricial 4x4.
- Display NeoPixel RGB 5x5.

## Software 💻

* **SDK do Raspberry Pi Pico:** O SDK (Software Development Kit) do Pico, que inclui as bibliotecas e ferramentas necessárias para desenvolver e compilar o código. [Instruções de instalação](https://www.raspberrypi.com/documentation/pico/getting-started/)
* **CMake:** Um sistema de construção multiplataforma usado para gerar os arquivos de construção do projeto.
* **Compilador C/C++:**  Um compilador C/C++ como o GCC (GNU Compiler Collection).
* **Git:** (Opcional) Para clonar o repositório do projeto.


### O código está dividido em vários arquivos para melhor organização:

- **`U4T1.C`**: Código com a função de loop principal: lê as teclas e chama as funções de animação.
- **`functions.c/.h`:** Funções de animação para cada tecla do NeoPixel.
- **`keypad.c/.h`:** Inicializa e lê o teclado matricial.
- **`neopixel.c/.h`:** Controla o display NeoPixel (inicialização e envio de cores).
- **`CMakeLists.txt`:** Define a estrutura do projeto para o CMake.
- **`diagram.json`:**  Diagramas de conexões.

## Divisão de Tarefas 🧑‍💻

| Membro | Contribuição |
|---|---|
| Luiz Eduardo | integração do código, Tecla 7, Tecla A, Tecla B, Tecla C, Tecla D, Tecla # |
| Kleber | Tecla 9, Tecla * |
| Jonas | Criação do README, Tecla 8 |
| Erick | Tecla 1 |
| Alana | Tecla 2 |
| Cauã | Tecla 3 |
| Isla | Tecla 4 |
| Raiane | Tecla 5 |
| Brunna | Tecla 6 |

## Como Compilar e Executar ⚙️

1. **Instale o SDK do Raspberry Pi Pico:** Siga as instruções no site oficial do Raspberry Pi.
2. **Clone este repositório:** `git clone https://github.com/Embarcatech-Gp6-7/Luiz-Eduardo-CEPEDIU4T1.git`
3. **Navegue até o diretório do projeto:** `cd Luiz-Eduardo-CEPEDIU4T1`
4. **Compile o projeto:** `cmake -B build && cmake --build build`
5. **Copie para o Pico:** Copie o conteúdo da pasta `build` (gerada após a compilação) para o Raspberry Pi Pico. O programa iniciará automaticamente.

## Diagrama de Conexões 💡:

![image](![image](https://github.com/user-attachments/assets/2f241ca3-d89f-442e-8942-bfeeb4929315)


## Funcionamento do Loop Principal 🔄
```
while (true) {
    char key = getKey();

    switch(key) {
        case '0':
            // renderMatrix(CHAR_0);
            break;
        case '1':
            //renderMatrix(CHAR_1);
            Tecla1();             
            break;
        // ... outros casos ...
        case '*':
            tecla_asterisco();
            break;
        case '#':
            tecla_hash();
            break;
        default:
            break;
    }
    sleep_ms(100);
}
  ```
O loop while (true) garante execução contínua. A função getKey() lê a tecla pressionada. O switch executa a função correspondente à tecla. sleep_ms(100) introduz um pequeno atraso para evitar leituras repetidas da mesma tecla.

## Próximos Passos ➡️

- Criar animações mais complexas e interativas.
- Permitir a configuração das cores e animações pelo usuário.
  
 ## 🔗 Link do Vídeo de Funcionamento:

 ## Contribuições 🤝

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## 📞 Contato

- 👤 **Autor**: Alana Almeida, Brunna Barreto, Cauã Luís Santos, Erick de Sousa, Isla Silva, Jonas Souza, Kleber Marçal, Luiz Eduardo e Raiane Damascena 
 
- 📧 **E-mail**:alanaalmeida2004@gmail.com, 20241bsifsa0027@ifba.edu.br, caualuis2012@hotmail.com, Erickvestas@gmail.com,  islasilva736@gmail.com, Jonassouza871@hotmail.com, Kleber.sm@gmail.com, luizeduardosoaresferreira942@gmail.com e rai.paixao2012@gmail.com

--- 
