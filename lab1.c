#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    int choice;
    
    do {
        printf("Виберіть завдання:\n");
        printf("1. Вивести рядок \"Hello\"\n");
        printf("2. Оголосити змінну int зі значенням 10 та вивести її\n");
        printf("3. Оголосити змінну float зі значенням 3.14 та вивести з двома знаками після коми\n");
        printf("4. Додати два цілі числа 5 і 7 та вивести результат\n");
        printf("5. Вивести символ табуляції між словами \"Hello\" та \"World\"\n");
        printf("6. Оголосити змінну float та вивести її з шириною 8 символів і 3 знаками після коми\n");
        printf("7. Додати 3.5 і 2.7 та вивести результат\n");
        printf("8. Конвертувати температуру з Цельсія у Фаренгейт\n");
        printf("9. Перевірити, чи є число парним, і вивести \"Парне\" або \"Непарне\"\n");
        printf("10. Порівняти два числа та вивести більше з них\n");
        printf("0. Вихід\n");
        printf("Ваш вибір: ");
        
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Hello\n");
                break;
            case 2:
                {
                    int a = 10;
                    printf("%d\n", a);
                }
                break;
            case 3:
                {
                    float b = 3.14f;
                    printf("%.2f\n", b);
                }
                break;
            case 4:
                {
                    int sum = 5 + 7;
                    printf("%d\n", sum);
                }
                break;
            case 5:
                printf("Hello\tWorld\n");
                break;
            case 6:
                {
                    float c = 45.6789f; 
                    printf("%8.3f\n", c);
                }
                break;
            case 7:
                {
                    float sum2 = 3.5f + 2.7f;
                    printf("%.1f\n", sum2);
                }
                break;
            case 8:
                {
                    float celsius;
                    printf("Введіть температуру в градусах Цельсія: ");
                    scanf("%f", &celsius);
                    float fahrenheit = celsius * 9.0f / 5.0f + 32;
                    printf("%.2f °C = %.2f °F\n", celsius, fahrenheit);
                }
                break;
            case 9:
                {
                    int num;
                    printf("Введіть число: ");
                    scanf("%d", &num);
                    if(num % 2 == 0)
                        printf("Парне\n");
                    else
                        printf("Непарне\n");
                }
                break;
            case 10:
                {
                    int x, y;
                    printf("Введіть два числа: ");
                    scanf("%d %d", &x, &y);
                    if(x > y)
                        printf("Більше число: %d\n", x);
                    else if(y > x)
                        printf("Більше число: %d\n", y);
                    else
                        printf("Числа рівні: %d\n", x);
                }
                break;
            case 0:
                printf("Вихід з програми.\n");
                break;
            default:
                printf("Невірний вибір. Спробуйте ще раз.\n");
        }
        
        printf("\n");
    } while(choice != 0);
    
    return 0;
}
