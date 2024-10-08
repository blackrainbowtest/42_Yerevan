<div align="center">
❗❗ WARNING ❗❗

Please do not copy code from this repository without understanding how it works. Simply copying code will not help you learn or understand the material.

⚠️ Understanding and practice are crucial for your learning.

☠️ Copying without comprehension is not the way to gain knowledge.

Study, analyze, and learn from your own mistakes.
</div>

## [>>> Полное описание проекта тут <<<](https://github.com/blackrainbowtest/42_Yerevan/blob/main/Rush02/README_FULL_INFO.md)


## Содержание
1. [Введение](#введение)
2. [Описание файлов](#описание-файлов)
   - [main.c](#mainc)
   - [core.c](#corec)
   - [process.c](#processc)
   - [print.c](#printc)
   - [helper.c](#helperc)
   - [split.c](#splitc)
   - [utils_file.c](#utils_filec)
   - [utils.c](#utilsc)
3. [Пример использования](#пример-использования)
4. [Ошибки и обработка](#ошибки-и-обработка)
5. [Дополнительные ресурсы](#дополнительные-ресурсы)

## Введение

Файл `main.c` запускает программу и обрабатывает проверку соответствия с условиями задачи. В зависимости от аргументов вызывается функция `ft_core` из `core.c` с различными параметрами.

## Описание файлов

### main.c

Файл содержит проверку условий задачи и вызывает `ft_core` из `core.c`. Аргументы передаются в зависимости от входных данных.

### core.c

Содержит две функции:

- `static_save` — хранит ссылку на массив. Если передан `NULL`, возвращает сохранённую ссылку.
- `ft_core` — основная функция, обрабатывающая строку данных и вызывающая другие функции для работы с текстом и файлами.

### process.c

Рекурсивная обработка данных для преобразования строки в текстовый формат:

- `ft_process_dict_data` — вызывает процессинг функций для трёхзначных, двухзначных и однозначных чисел.
- `ft_process_three`, `ft_process_two`, `ft_process_one` — обработка для трёх, двух и однозначных чисел.
- Все функции вызывают друг друга рекурсивно, пока строка не будет полностью обработана, и вызывают функции печати.

### print.c

- `ft_print_three`, `ft_print_two`, `ft_print_one` — печатают текстовые значения для чисел.
- `ft_get_word` — выводит слово из базы данных по ключу.
- `ft_get_tail` — печатает "хвосты" чисел (сотни, тысячи и т.д.).

### helper.c

Вспомогательные функции для обработки чисел:

- `ft_print_zero_helper` — предотвращает печать "хвоста", если тройка чисел состоит из нулей.
- `ft_print_three_helper` — вызывает вспомогательные функции для трёхзначных чисел.
- `ft_process_teen_digits` и `ft_process_tens_digits` — логика для обработки чисел от 10 до 19 и от 20 до 99.

### split.c

- `ft_split_content` — преобразует содержимое файла в двумерный массив символов.
- `ft_init_strs`, `ft_fill_strs` — создают и заполняют массив строк.

### utils_file.c

- `ft_read_file_data` — читает файл по частям и сохраняет данные в массив.
- `ft_no_content` — освобождает память и закрывает файл при ошибках.
- `ft_content` — динамически расширяет массив по мере чтения файла.

### utils.c

- `ft_atoi` — простой вариант валидации чисел.
- `ft_putstr` — вывод строки в консоль.
- `ft_strlen` — подсчёт длины строки.

## Пример использования

Для запуска программы:

```bash
make re
```

## Ошибки и обработка

Пока программа не завершенная. На данный момент при ошибке она завершается освобождая выделенную память и закрывая открытые файлы программой если они открыты на данный момент.

## Дополнительные ресурсы

Книги по C из дискорда, остальные ресурсы добавлю потом.