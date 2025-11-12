#ifndef COMPLEX2D_H
#define COMPLEX2D_H

using namespace std;

class Complex2D {
    private:
        double _real;
        double _imag;
    public:
        // constructeur par défaut
        Complex2D();
        // constructeur avec paramètres
        Complex2D(double real, double imag);
        // constructeur de copie
        Complex2D(const Complex2D& other);

        // méthode set et get
        void setReal(double real);
        void setImag(double imag);
        double getReal() const;
        double getImag() const;

        // Définition des opérations sur les nombres complexes
        Complex2D operator+(Complex2D c2);
        Complex2D operator-(Complex2D c2);
        Complex2D operator*(Complex2D c2);
        Complex2D operator/(Complex2D c2);
        bool operator<(Complex2D c2);
        bool operator>(Complex2D c2);

        // opération valeur absolu
        double abs() const;

        void print() const;

    
};



#endif