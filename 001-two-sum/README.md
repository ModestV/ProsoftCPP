# 1. Two Sum

**Difficulty:** Easy

## Идея

Используем `unordered_map`, чтобы хранить ранее просмотренные числа и их индексы.

Для каждого числа `nums[i]` вычисляем:

`required = target - nums[i]`

Если `required` уже встречался, нужная пара найдена.

## Сложность

Time Complexity: `O(n)`

Space Complexity: `O(n)`
