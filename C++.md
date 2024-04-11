# Подготовка к собеседованию на C++

## Основы программирования на C++
C++ - это высокоуровневый язык программирования, который объединяет в себе возможности как высокоуровневых, так и низкоуровневых языков. Знание основ программирования на C++ включает в себя понимание работы с переменными, операторами, условиями и циклами.

## Типы данных в C++
C++ поддерживает различные типы данных, такие как целочисленные, вещественные, символьные и указатели. Необходимо освоить работу с различными типами данных для корректного создания программ.

## Управляющие структуры в C++
Управляющие структуры - это конструкции языка, позволяющие управлять потоком выполнения программы. К ним относятся условные операторы if, else, оператор switch, а также циклы for, while, do-while.

## Функции в C++
Функции в C++ - это самостоятельные блоки кода, которые выполняют определенные задачи. Важно понимать, как объявлять и определять функции, а также как передавать параметры и возвращать значения.

## Перегрузка функций
Перегрузка функций - возможность определения нескольких функций с одним и тем же именем, но разным списком параметров. Это удобно для создания функций с одинаковым названием, но разной функциональностью.

## Указатели в C++
Указатели - это переменные, которые содержат адреса других переменных в памяти компьютера. Знание работы с указателями позволяет эффективно управлять памятью и обращаться к данным.

## Динамическая память в C++
Динамическая память позволяет программисту выделять и освобождать память по мере необходимости. Освоение этой темы позволяет создавать гибкие и эффективные программы.

## Классы и объекты в C++
Классы и объекты - ключевые понятия объектно-ориентированного программирования. Класс определяет структуру и поведение объекта, а объект представляет экземпляр класса.

## Наследование и полиморфизм
Наследование позволяет создавать новые классы на основе существующих, а полиморфизм - изменять поведение объектов на основе их типа.

## Шаблоны (templates) в C++
Шаблоны позволяют создавать обобщенные классы и функции, которые могут работать с различными типами данных. Это удобно для создания универсальных алгоритмов.

## Исключения в C++
Исключения - это механизм обработки ошибок, который позволяет программе корректно обрабатывать и передавать ошибки во время выполнения.

## Стандартная библиотека шаблонов (STL) в C++
STL предоставляет широкий набор контейнеров, алгоритмов и функций для работы с данными. Это удобный и эффективный инструмент для разработки программ.

## Работа с файлами в C++
Необходимо понимать, как открывать, читать и записывать данные в файлы с помощью стандартных средств C++.

## Многопоточное программирование в C++
Многопоточность позволяет выполнять несколько потоков выполнения в одной программе. Это увеличивает производительность и эффективность программы.


# Простые примеры кода для подготовки
# Подготовка к собеседованию на C++

## Основы программирования на C++
```cpp
#include <iostream>
using namespace std;

int main() {
    int num1 = 5;
    int num2 = 10;
    
    int sum = num1 + num2;
    
    cout << "Сумма чисел " << num1 << " и " << num2 << " равна " << sum << endl;
    
    return 0;
}
```

## Типы данных в C++
```cpp
#include <iostream>
using namespace std;

int main() {
    int intVar = 5;
    float floatVar = 3.14f;
    char charVar = 'A';
    double doubleVar = 10.5;

    cout << "Целочисленная переменная: " << intVar << endl;
    cout << "Вещественная переменная: " << floatVar << endl;
    cout << "Символьная переменная: " << charVar << endl;
    cout << "Двойная вещественная переменная: " << doubleVar << endl;

    return 0;
}
```

## Управляющие структуры в C++
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;

    if (x > 5) {
        cout << "Число больше 5" << endl;
    } else {
        cout << "Число меньше или равно 5" << endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    while (x > 0) {
        cout << x << endl;
        x--;
    }

    return 0;
}
```

## Функции в C++
```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    int sum = add(num1, num2);

    cout << "Сумма чисел " << num1 << " и " << num2 << " равна " << sum << endl;

    return 0;
}
```

## Указатели в C++
```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;

    cout << "Значение переменной num: " << num << endl;
    cout << "Адрес переменной num: " << &num << endl;
    cout << "Значение, на которое указывает указатель ptr: " << *ptr << endl;

    return 0;
}
```

## Классы и объекты в C++
```cpp
#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    float getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c(5);
    
    cout << "Площадь круга радиусом 5: " << c.getArea() << endl;

    return 0;
}
```

## Наследование и полиморфизм
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Вызван метод display класса Base" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Вызван метод display класса Derived" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    baseObj.display();
    derivedObj.display();

    return 0;
}
```

## Шаблоны (templates) в C++
```cpp
#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Максимум из 5 и 10: " << max(5, 10) << endl;
    cout << "Максимум из 3.14 и 2.5: " << max(3.14, 2.5) << endl;

    return 0;
}
```

## Исключения в C++
```cpp
#include <iostream>
using namespace std;

int division(int a, int b) {
    if (b == 0) {
        throw "Деление на ноль!";
    }
    return a / b;
}

int main() {
    try {
        cout << division(10, 2) << endl;
        cout << division(10, 0) << endl;
    } catch (const char* msg) {
        cerr << "Ошибка: " << msg << endl;
    }

    return 0;
}
```

## Стандартная библиотека шаблонов (STL) в C++
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

## Работа с файлами в C++
```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt");

    file << "Hello, World!" << endl;

    file.close();

    ifstream readFile("example.txt");
    string line;

    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}
```


