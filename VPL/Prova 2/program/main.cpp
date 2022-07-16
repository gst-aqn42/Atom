#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/third_party/doctest.h"

#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Forma.hpp"
#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Forma2D.hpp"
#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Forma3D.hpp"
#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Quadrado.hpp"
#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Triangulo.hpp"
#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Cubo.hpp"
#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Esfera.hpp"
#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Circulo.hpp"


#include <string>
#include <math.h>


TEST_CASE("01 - Testando construção de classes derivadas com seus respectivos atributos") {
    //construtores devem setar o nome das formas. Exemplo, ao criar um quadrado, o campo quadrado
    //deve receber o valor "quadrado"

    CHECK_NOTHROW(Triangulo("azul", 10, 12, 5)); //construtor com cor, aresta_1, aresta_2 e aresta_3
    CHECK_NOTHROW(Quadrado("verde", 4)); //construtor com cor e tamanho da aresta
    CHECK_NOTHROW(Cubo("verde", 4)); //construtor com cor e tamanho da aresta
    CHECK_NOTHROW(Esfera("verde", 4)); //construtor com cor e raio
    CHECK_NOTHROW(Circulo("verde", 4)); //construtor com cor e raio

}

TEST_CASE("02 - Acessando métodos das classes base") {
    Triangulo t("azul", 6, 7, 8);
    t.get_cor();
    CHECK((abs(t.get_area()-20.3331625676))<0.0001);
    CHECK(t.get_perimetro() == 21);

    Quadrado q("verde", 4);
    CHECK(q.get_area() == 16);
    CHECK(q.get_perimetro() == 16);

    Cubo c("roxo", 4);
    CHECK(c.get_volume() == 64);

    Esfera e("amarelo", 3);
    CHECK(abs(e.get_volume()-113.097)<0.01);

    Circulo cr("rosa", 2);
    CHECK(abs(cr.get_area()-12.5664)<0.001);
    CHECK(abs(cr.get_perimetro()-12.5664)<0.001);

}

TEST_CASE("03 - Instanciando objetos com classe base") {
    Triangulo triangulo("azul", 7, 5, 4);
    Quadrado quadrado("vermelho", 7);
    Esfera esfera("roxo", 3);
    Cubo cubo("rosa", 2);
    Circulo circulo("amarelo", 2);

    std::string nome1 = "triangulo";
    std::string nome2 = "quadrado";
    std::string nome3 = "esfera";
    std::string nome4 = "cubo";
    std::string nome5 = "circulo";

    Forma *poligono1 = &quadrado;
    Forma *poligono2 = &triangulo;
    Forma *poligono3 = &esfera;
    Forma *poligono4 = &cubo;
    Forma *poligono5 = &circulo;

    //checando nomes
    CHECK(nome2.compare(poligono1->get_nome())==0);
    CHECK(nome1.compare(poligono2->get_nome())==0);
    CHECK(nome3.compare(poligono3->get_nome())==0);
    CHECK(nome4.compare(poligono4->get_nome())==0);
    CHECK(nome5.compare(poligono5->get_nome())==0);

    //checando cores
    CHECK(poligono1->get_cor().compare("vermelho")==0);
    CHECK(poligono2->get_cor().compare("azul")==0);

}

TEST_CASE("04 - Acessando métodos das classes filhas") {
    Triangulo triangulo("azul", 7, 5, 4);
    Quadrado quadrado("vermelho", 7);
    Esfera esfera("roxo", 3);
    Cubo cubo("rosa", 2);
    Circulo circulo("amarelo", 2);

    Forma2D *poligono1 = &quadrado;
    Forma2D *poligono2 = &triangulo;
    Forma3D *poligono3 = &esfera;
    Forma3D *poligono4 = &cubo;
    Forma2D *poligono5 = &circulo;

    //checando nomes
    CHECK(poligono1->get_area()==49);
    CHECK((abs(poligono2->get_area()-9.79796))<0.001);
    CHECK(abs(poligono3->get_volume()-113.097)<0.01);
    CHECK(poligono4->get_volume()==8);
    CHECK(abs(poligono5->get_area()-12.5664)<0.001);
}
