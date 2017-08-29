#ifndef PONTO_H
#define PONTO_H

class Ponto {
public:
  double X;
  double Y;
  /**
   * Obtem o valor do Ponto na coordenada horizontal (x).
   */
  double getX();
    return this->X;

  /**
   * Obtem o valor do Ponto na coordenada vertical (y).
   */
  double getY();

  /**
   * Define o valor do Ponto na coordenada horizontal (x).
   */
  void setX(double x);
  this->X = x;
  /**
   * Define o valor do Ponto na coordenada vertical (y).
   */
  void setY(double y);

  /**
   * Imprime na saida padrao (cout) o Ponto no formato (x, y).
   * Pule uma linha apos imprimir o Ponto.
   */
  void imprimir();

  /**
   * Informa se este Ponto eh igual a outro.
   * Um Ponto eh igual se os valores x e y dos Pontos sao
   * suficientemente proximos.
   */
  bool eIgual(Ponto* outro);
    if outro->X == this->X && outro->Y == this->Y
      return true;
    else return false;
  // ADICIONE OS ATRIBUTOS NECESSARIOS
};

#endif // PONTO_H
