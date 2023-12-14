#pragma once
#include <iostream>
#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif
using namespace std;
namespace MathLibrary {
	class MATHLIBRARY_API Vector {
    private:
        int x = 0, y = 0, z = 0; //���������� �������
    public:
        Vector(); //����������� �� ������������
        Vector(int v_X, int v_Y, int v_Z);// ����������� � �����������
        Vector(int vec_x, int vec_y); // ����������� � ����� �����������
        Vector(int vector_x); // ����������� � ����� ����������
        void Display();
        void Read();
        string toString();
        Vector Add(Vector k); //���������
        Vector Sub(Vector k); //���������
        int Sk_Mul(Vector k);//��������� �������
        Vector Mul(int k);//�������� �� ������
        int Lenght();//������� �������
        void Equ(Vector k);//��������� ������ �������
        //�������������� �������в�
        Vector operator+(Vector second);//�������������� ��������� +
        Vector operator-(Vector second);//�������������� ��������� 
        Vector operator*(int second);//�������������� ��������� *

	};
}