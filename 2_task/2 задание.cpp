﻿/*ДЛЯ ВСЕХ ЗАДАЧ : файл со входными данными пользователь должен указывать сам(без хардкода).
Задачи сдавать в виде : исходный код, примеры файлов с входными данными, и файл,
который можно сразу запускать - уже скомпилированный, если язык того требует
(если C#, C++ и т.д. - *.exe, если Java, Scala - *.jar и т.д.).
Будет плюсом, если зальете решение в github.

2. В файле хранятся координаты вершин четырехугольника в порядке обхода фигуры по часовой стрелке в виде :
<координата x1> <координата y1>
<координата x2> <координата y2>
<координата x3> <координата y3>
<координата x4> <координата y4>

Считаем, что полученные из файла вершины гарантированно образуют выпуклый четырехугольник. 
Написать программу, которая считывает координаты из файла. 
При запуске ждет от пользователя ввода координат некой точки и выводит один из четырех возможных результатов:
точка внутри четырехугольника
точка лежит на сторонах четырехугольника
точка - вершина четырехугольника
точка снаружи четырехугольника
*/

#include <iostream>

struct point {
    double x;
    double y;
};

// Tочка внутри четырехугольника

bool InSide (point p1, point p2)
{
   // (p1.x > p2.x && p1.y > p2.y) ? true : false;
    return true;
}

// Tочка лежит на сторонах четырехугольника

bool OnSide (point p1, point p2)
{
    return true;
}

// Tочка - вершина четырехугольника 

bool Top (point p1, point p2)
{
    return (p1.x == p2.x && p1.y == p2.y) ? true :  false;
}

// Tочка снаружи четырехугольника

bool OutSide (point p1, point p2)
{
    return true;
}

int main()
{
    point p1 = { 1, 1 };
    point p2 = { 1, 0 };
    std::cout << Top(p1, p2);
}


