/*
Autor: Santiago Javier Vivas Piamba.
Materia: Métricas de rendimiento.
Programa: Ejercicios Eigen.
Versión: 1.0
Fecha: 22/ago/2022
*/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main()
{
    using namespace Eigen;
    //Menú de inicio
    std::cout<<"Bienvenido al programa de operaciones de algebra lineal."<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //a) X = 3A-4B
    std::cout<<"a)"<<std::endl;
    Matrix2d Aa;
    Matrix2d Ba;
    Aa<<4,-2,1,-7;
    Ba<<-1,2,6,-5;
    std::cout<<"Matriz A:"<<std::endl<<Aa<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Ba<<std::endl;
    std::cout<<"X = 3A-4B:"<<std::endl<<(Aa*3)-(4*Ba)<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //b) 2X + 4A = 3BA
    std::cout<<"b)"<<std::endl;
    Matrix2d Ab;
    Matrix2d Bb;
    Ab<<0,-1,2,1;
    Bb<<1,2,3,4;
    std::cout<<"Matriz A:"<<std::endl<<Ab<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Bb<<std::endl;
    std::cout<<"X = (3BA-4A)/2:"<<std::endl<<(((Bb*3)*Ab)-(4*Ab))/2<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //c) AXB^T = C
    std::cout<<"c)"<<std::endl;
    Matrix2d Ac;
    Matrix2d Bc;
    Matrix2d Cc;
    Ac<<-3,-2,3,3;
    Bc<<5,3,9,4;
    Cc<<1,1,0,0;
    std::cout<<"Matriz A:"<<std::endl<<Ac<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Bc<<std::endl;
    std::cout<<"Matriz C:"<<std::endl<<Cc<<std::endl;
    std::cout<<"X = C*(A^-A(B^T)^-B^T):"<<std::endl<<Cc*(Ac.inverse()*(Bc.transpose()).inverse())<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //d) XA = B
    std::cout<<"d)"<<std::endl;
    Matrix2d Ad;
    Matrix2d Bd;
    Ad<<2,1,-4,-3;
    Bd<<2,2,6,4;
    std::cout<<"Matriz A:"<<std::endl<<Ad<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Bd<<std::endl;
    std::cout<<"X = B*A^-A"<<std::endl<<Bd*(Ad.inverse())<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //e) X = 2(AB + C)
    std::cout<<"e)"<<std::endl;
    Matrix<float, 2, 3> Ae;
    Matrix<float, 3, 2> Be;
    Matrix<float, 2, 2> Ce;
    Ae<<3,0,-1,0,2,1;
    Be<<1,2,1,0,0,6;
    Ce<<-2,0,-2,-5;
    std::cout<<"Matriz A:"<<std::endl<<Ae<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Be<<std::endl;
    std::cout<<"Matriz C:"<<std::endl<<Ce<<std::endl;
    std::cout<<"X = 2(AB + C)"<<std::endl<<2*((Ae*Be)+Ce)<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //f) X = A + 3B
    std::cout<<"f)"<<std::endl;
    Matrix<float, 3, 3> Af;
    Matrix<float, 3, 3> Bf;
    Af<<1,5,-1,-1,2,2,0,-3,3;
    Bf<<-1,-4,3,1,-2,-2,-3,3,-5;
    std::cout<<"Matriz A:"<<std::endl<<Af<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Bf<<std::endl;
    std::cout<<"X = A + 3B"<<std::endl<<Af + (3*Bf)<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //g) XA = B
    std::cout<<"g)"<<std::endl;
    Matrix<float, 3, 3> Ag;
    Matrix<float, 3, 3> Bg;
    Ag<<2,7,3,3,9,4,1,5,3;
    Bg<<1,0,2,0,1,0,0,0,1;
    std::cout<<"Matriz A:"<<std::endl<<Ag<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Bg<<std::endl;
    std::cout<<"X = B * A^-A"<<std::endl<<Bg*(Ag.inverse())<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //h) AX = B
    std::cout<<"h)"<<std::endl;
    Matrix<float, 3, 3> Ah;
    Matrix<float, 3, 3> Bh;
    Ah<<1,1,1,6,5,4,13,10,8;
    Bh<<0,1,2,1,0,2,1,2,0;
    std::cout<<"Matriz A:"<<std::endl<<Ah<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Bh<<std::endl;
    std::cout<<"X = B * A^-A"<<std::endl<<(Ah.inverse())*Bh<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //i) X = A^TA-2A
    std::cout<<"i)"<<std::endl;
    Matrix<float, 2, 2> Ai;
    Ai<<3,-1,0,2;
    std::cout<<"Matriz A:"<<std::endl<<Ai<<std::endl;
    std::cout<<"X = A^TA-2A"<<std::endl<<(Ai.transpose()*Ai)-(2*Ai)<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //j) X = A^3
    std::cout<<"j)"<<std::endl;
    Matrix<float, 2, 2> Aj;
    Aj<<4,2,-1,0;
    std::cout<<"Matriz A:"<<std::endl<<Aj<<std::endl;
    std::cout<<"X = A^3"<<std::endl<<(Aj*Aj)*Aj<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //l) X = AA^T -2AB
    std::cout<<"l)"<<std::endl;
    Matrix<float, 2, 3> Al;
    Matrix<float, 3, 2> Bl;
    Al<<1,0,-2,2,-1,3;
    Bl<<2,-3,-2,0,-1,-2;
    std::cout<<"Matriz A:"<<std::endl<<Al<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Bl<<std::endl;
    std::cout<<"X = AA^T -2AB"<<std::endl<<(Al*Al.transpose())-((2*Al)*Bl)<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //m) X = ABC
    std::cout<<"m)"<<std::endl;
    Matrix<float, 1, 3> Am;
    Matrix<float, 3, 2> Bm;
    Matrix<float, 2, 1> Cm;
    Am<<4,8,12;
    Bm<<3,2,0,1,-1,0;
    Cm<<3,-1;
    std::cout<<"Matriz A:"<<std::endl<<Am<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Bm<<std::endl;
    std::cout<<"Matriz C:"<<std::endl<<Cm<<std::endl;
    std::cout<<"X = ABC"<<std::endl<<Am*Bm*Cm<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //n) A^TX = B
    std::cout<<"n)"<<std::endl;
    Matrix<float, 3, 3> An;
    Matrix<float, 3, 3> Bn;
    An<<3,4,1,-1,-3,3,2,3,0;
    Bn<<3,9,7,1,11,7,7,5,7;
    std::cout<<"Matriz A:"<<std::endl<<An<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Bn<<std::endl;
    std::cout<<"X = B * (A^T)^-A^T"<<std::endl<<Bn * ((An.transpose()).inverse())<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //o) XA = B
    std::cout<<"o)"<<std::endl;
    Matrix<float, 3, 3> Ao;
    Matrix<float, 3, 3> Bo;
    Ao<<2,5,7,6,3,4,5,-2,-3;
    Bo<<-1,1,0,0,1,1,1,0,-1;
    std::cout<<"Matriz A:"<<std::endl<<Ao<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Bo<<std::endl;
    std::cout<<"X = B * A^-A"<<std::endl<<Ao.inverse()*Bo<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    //p) AX = B
    std::cout<<"p)"<<std::endl;
    Matrix<float, 4, 4> Ap;
    Matrix<float, 4, 4> Bp;
    Ap<<1,1,1,1,1,1,-1,-1,1,-1,1,-1,1,-1,-1,1;
    Bp<<1,1,0,0,1,0,1,0,1,0,0,1,1,0,1,1;
    std::cout<<"Matriz A:"<<std::endl<<Ap<<std::endl;
    std::cout<<"Matriz B:"<<std::endl<<Bp<<std::endl;
    std::cout<<"X = B * A^-A"<<std::endl<<Bp*(Ap.inverse())<<std::endl;
    std::cout<<"********************************************************"<<std::endl;
    return 0;
}
