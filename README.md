# Домашнее задание к работе 7 
## Условие задачи
Написать программу, которая проверяет, является ли последняя цифра заданного двузначного числа - простым числом
## 1. Алгоритм и блок-схема 
### Алгоритм
1. Начало
2. Инициализировать переменную 
  + `number` - переменная, в которую записывается значение двузначного числа
3. Ввести значение числа с клавиатуры
4. Инициализировать переменную
  + `cif` = `number` % 10 - последняя цифра числа
5. Проверка условия:
  + Если `cif` = 2, 3, 5, 7 - вывести "Последняя цифра числа является простым числом"
  + Если `cif` = 0, 1, 4, 6, 8, 9 - вывести "Последняя цифра числа не является простым числом"
  + Иначе вывести "Ошибка"
6. Конец
### Блок-схема
![Блок-схема алгоритма](lab7scheme.drawio.png)  
[Ссылка на draw.io](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=lab7scheme.drawio.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%20%E2%80%94%201%22%20id%3D%22aj79lTrdRjpPKqFaR-8Q%22%3E7VvZkps4FP0aVyUPToFY7H603e701KQzybimZnre1FjGSgvEgLzl6yO0YNZ4qbbp6fCC0dUCOufcqwvCPWsSbD%2FGMFo%2B0DkiPWDMtz3rtgeACYDBf1LLTlrcgSsNfoznqtHeMMPfkTKqfv4Kz1FSaMgoJQxHRaNHwxB5rGCDcUw3xWYLSopXjaCPKoaZB0nV%2Bjees6Wymu7NvuIeYX%2BpL%2B06tqwJoG6tppIs4ZxuciZr2rMmMaVMngXbCSIpehoY2e%2BuoTa7sxiF7JgOg9lj%2Fzsc%2Fvk13Abr%2B38T%2B%2FNs3LfUvbGdnjGacwBUkcZsSX0aQjLdW8cxXYVzlI5q8NK%2BzSdKI240ufEbYmyn2IQrRrlpyQKiatEWs3%2FS7h8cVXrM1dxu1ciisFOF6mwVAAldxR76yRRVu3ReuY4Ko4%2BIBojFO94gRgQyvC4SD5V%2B%2FKxd1vULxfxWgKG0bhuK553WvlEcgsHYR0z12vPET3K3sTcJ9k5gUt3wGpKVmkKPAze%2BFUejx%2BEdDvQ5P47FcVqlnxDuWynNmyVmaBZBAe6Gu3eRRO5xDOIQxYcIWqOYoe1PoVe1ll2EUBc3Oc%2FTqC5zTmcbzWQVYD4VU1CP6Uhht8fXEfi6rxrNAWgbTuftBxu7nWADjOsGG7viGOEqeOLqBZN0McaLCtN89YvSUw4qJAQR6scw4FBHKMb8boTwC3Vf9hWHnGeBt0jnDldyJrN1Zxq%2BfWdyW3Km4XWdya04k3AgQ5wb2rH4PfH4aejEOMd7kdX2F5osGLXmGzcVRJMNZt7yHQf2fRW%2FJQ2eVklL2Dn12stjZ14TOz1wPukBLuGXHScRDAvQuf%2Bt0qcXDgyhHJRR6ov%2B0zvLlOuA5chf23gv0OKPXyHrL2CAyU627sMoIqif7BKGAtl4THD4%2FAC9mbDd0dTnJkL%2BLgxSQtQ1Z8iniNv%2F%2Bq1cU9%2F%2BM%2BXBDBgzGCb1He4RWSOGPSiLoxhDIk8T3qef8PVoUT%2F0KJ0Et08EDMCYBvQbPu6u8rNo6CeQ43JifUiwH0rgEh6T5KjGE%2FSefRED%2BiUegKMIyJ9IKtzsrlxf%2FQqKFwLvGooFdYlYF0YiDEXb%2BoG4Z9zc6QSZJ8Vm7nHDEUdbJ8689k4dgaEy6LRqKM5tcTTUM4tGJXxKotz9conLWy5Og5ulWIvmOV6XTZ2mO00f1nT28DysaNrQ2pWiB7oqs8hnQ6A7Srl3au7U3GKEHt%2Flgus0J00pU9lmopXdJP2pbnaOerm5RsBl69t%2BirTcIzNl92LZXs1rwy6WdLGky%2FY6Tf%2Bymj6Y7eXe%2B3fJXyfu%2F5W4u%2BSvpeTPdF5b8uc2J3%2BChxqdNQv9gGQX0CuOdEJsyXthWi7EitNiQ0MsKF8l8%2FVsUoZy3tu80TIXwALD5sk3huQmf32hcJGmZdKzh9p9%2BdHM7V4bhz20wZ%2FfsIs6Zosuan3aDIzfCZhP%2Bl%2BfH%2Fz75Sr8o2%2FWuWh53y%2Bcj9JPnXjJIzBJsFcErrg%2FlLKqUQSpRFMPVoYhL%2FPRciVvFa9FV7HHF%2FIp5bb%2F0uKj3vJLC%2FsNQFEq7gCWtvFqqZI7bQd3J6oE5ghyavjRthfeKbTK3%2FjILc3KTmF1oNJaAAYX23Ksl5V1kqxCGqILaepYbbRFeWWD7ubmg3Me6dmXgFo9l%2Ftoo5706kbz240lbenlIMlnq6W8xlxaLYNOLRdXizN8IbVUBrq2WobdgnJlym235eWk%2BpVNR%2FlRodwuf2B27ppgX%2B4b81rK9eU6yg%2BmjWmaCF6G9bqxrk38aY%2BhvzDx5fB%2BNuuVga5NOegov3J4P6idS1N%2B2luBy6b8r5318rugs1kvD%2BRc29Grf%2Ba47r%2BcKu9nj2K54f1Mht4FPj7nxf3fNSX8%2B3%2B9WtMf%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
## 2. Реализация программы 
```C
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int number;
	puts("Введите целое двузначное число\n");
	scanf("%d", &number);
	int cif = number % 10;
	switch (cif)
		{
		case 2:
		case 3:
		case 5:
		case 7:
			printf("Последняя цифра числа (%d) является простым числом\n", cif);
			break;
		case 0:
		case 1:
		case 4:
		case 6:
		case 8:
		case 9:
			printf("Последняя цифра числа (%d) не является простым числом\n", cif);
			break;
		default:
			puts("Ошибка\n");
			break;
		}
	return 0;
}
```
## 3. Результат работы программы 
### Последняя цифра - простое число
Введите целое двузначное число  
52  
Последняя цифра числа (2) является простым числом
### Последняя цифра - не простое число
Введите целое двузначное число
24
Последняя цифра числа (4) не является простым числом
## 4. Информация о разработчике 
Вильальба Агния, группа бТИИ-251
