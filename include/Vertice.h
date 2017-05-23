/*Definição de um vértice
  Autor: Cristofer Oswald
  Data: 23/05/2017 */

#ifndef VERTICE_H
#define VERTICE_H

#include <vector>
#include <string>

enum Cor{
  BRANCO, CINZA, PRETO
};

class Vertice{
public:
  Vertice(std::string& nome);

  void setDescobrimento(int descobrimento);
  void setTermino(int termino);
  void setDistancia(int distancia);

  void setString(std::string& nome);
  void addVizinho(Vertice* vertice);
  void setPredecessor(Vertice* vertice);

  int getDescobrimento();
  int getTermino();
  int getDistancia();

  std::string& getNome();
  std::vector<Vertice*>& getVizinhos();
  Cor getCor();
  Vertice* getPredecessor();
private:
  int descobrimento_ = 0;
  int termino_ = 0;
  int distancia_ = 0;

  std::string nome_;
  std::vector<Vertice*> vizinhos_;
  Cor cor_ = Cor::BRANCO;
  Vertice* predecessor_;

};

#endif //VERTICE_H
