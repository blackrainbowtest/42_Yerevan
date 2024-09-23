#include <stdio.h>
#include <stdbool.h>

#define SIZE 4

int grid[SIZE][SIZE];

// Функция для проверки видимости
bool check_visibility(int grid[SIZE][SIZE], int limits[SIZE][SIZE]) {
    // Проверка по всем направлениям
    // Проверка по строкам
    for (int i = 0; i < SIZE; i++) {
        // Логика проверки для строк
    }
    // Проверка по столбцам
    for (int j = 0; j < SIZE; j++) {
        // Логика проверки для столбцов
    }
    return true; // или false в зависимости от результата
}

// Рекурсивная функция для заполнения матрицы
bool solve(int row, int col, int limits[SIZE][SIZE]) {
    if (row == SIZE) {
        return check_visibility(grid, limits);
    }

    int next_row = (col == SIZE - 1) ? row + 1 : row;
    int next_col = (col + 1) % SIZE;

    for (int num = 1; num <= SIZE; num++) {
        grid[row][col] = num;

        if (solve(next_row, next_col, limits)) {
            return true;
        }

        grid[row][col] = 0; // Отмена последнего шага
    }
    return false; // Если нет решения
}

int main() {
    int limits[SIZE][SIZE] = {
        {0, 2, 0, 0},
        {0, 0, 0, 3},
        {0, 0, 0, 0},
        {1, 0, 0, 0}
    };

    if (solve(0, 0, limits)) {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                printf("%d ", grid[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
