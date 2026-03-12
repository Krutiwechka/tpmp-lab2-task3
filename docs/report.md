1. Описание структуры

Для хранения данных об одном сотруднике используется структура WORKER со следующими полями:

    surname, name, patronymic — ФИО (строки);

    position — Должность (строка);

    birth_date — Дата рождения (вложенная структура Date);

    gender — Пол (символ 'M'/'F');

    hire_date — Дата приема на работу.

2. Реализованные функции

    input_workers: Потоковый ввод массива структур (10+ записей).

    count_retired: Расчет пенсионеров (M > 65 лет, F > 60 лет на текущий 2026 год).

    sort_and_print: Двухуровневая сортировка (сначала по полу, затем по алфавиту).

    print_youngest: Поиск сотрудника с максимальным годом рождения.

    print_gender_stats: Подсчет общего количества мужчин и женщин.

 3. Контрольный расчет
 Входные тестовые данные:
 Ivanov Ivan Ivanovich Senior M 15 05 1955
 Petrov Petr Petrovich Middle M 10 10 1960
 Sidorov Sidor Sidorovich Junior M 01 01 2005
 Kozlova Anna Sergeevna Accountant F 20 03 1963
 Smirnova Elena Igorevna HR F 12 08 1970
 Popova Olga Vitalievna Manager F 05 12 1990
 Vasiliev Igor Olegovich DevOps M 25 06 1985
 Sokolov Alex Andreevich Support M 14 02 1995
 Novikov Dmitry Yurievich Lead M 30 11 1975
 Morozova Maria Pavlovna QA F 18 07 1980
Result:

	Retired count: 3

	Sorted list:
	Kozlova Anna - F
	Morozova Maria - F
	Popova Olga - F
	Smirnova Elena - F
	Ivanov Ivan - M
	Novikov Dmitry - M
	Petrov Petr - M
	Sidorov Sidor - M
	Sokolov Alex - M
	Vasiliev Igor - M
	Youngest: Sidorov Sidor (2005)
	Stats: Men: 6, Women: 4 
 4. Сборка и CI/CD
 
     Инструмент сборки: Makefile.
 
     Компилятор: gcc (стандарт C11).
 
     Автоматизация: GitHub Actions (ci.yml) успешно выполняет сборку при каждом push в ветку development.
