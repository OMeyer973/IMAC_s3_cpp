#include <iostream>

void q1() {
	int b = 10;
	int & a = b;
	b = 25;

	std::cout << "question 1" << std::endl; 
	std::cout << a << std::endl;
	// le code compile et retourne 25. a est une référence sur b.
}

void q2() {
	int b = 10;
	int c = 5;
	int & a = b;
	a = c;
	++a;

	std::cout << "question 2" << std::endl; 
	std::cout << a << " " << b << std::endl;
	// le code compile et retourne "6 6" 
	// a est une référence sur b donc modifier a reviens à modifier b.
}

void q3() {
	int b = 10;
	int c = 5;
	int & a = b;
	// a = &c;
	++a;

	std::cout << "question 2" << std::endl; 
	std::cout << a << " " << b << " " << c << std::endl;
	// la ligne commentée ne compile pas.
	// a est un entier et &c est un pointeur sur int. 
	// on ne peut pas affecter &c à a 
}

// q4 
// transtypage : faire des cast entre objets. automatique quand une classe mère prend une classe fille
// ie ce code est ok

// Mere mere;
// Fille fille;

// mere = fille;

// Fille* ptrfille = &fille;
// Mere* ptrmere = &mere;

// ptrmere = ptrfille;

// transtypage dynamique : quand on veut transtyper dans l'autre sens.
// mot clé dynamic_cast -> ne marche que sur les pointeurs

// Fille* ptrfille = &fille;
// Mere* ptrmere = &mere;

// ptrfille = dynamic_cast<Fille*>(ptrmere);

// Mere mere;
// Fille fille;

// fille = *(dynamic_cast<Fille*>(ptrmere));

int main () {

	q1();
	q2();
	q3();
	

	return 0;
}