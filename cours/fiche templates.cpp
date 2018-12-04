

// FONCTIONS TEMPLATES
// déclaration et définition dans le .hpp
template<typename T>
const T& getMin(const T& a, const T& b) {
	return a < b ? a : b;
}
// appel avec tous les types
// getMin(1, 2); // getMin(1.3f, 2.3f);

// ou caster les types différents avant l'appel
// getMin<float>(1, 1.3f)

// surcharge pour un type particulier
template<>
const char& getMin(const char& a, const char& b) {
	return toupper(a) < toupper(b) ? a : b;
}