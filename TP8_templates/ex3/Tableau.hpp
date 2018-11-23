#include "Error.hpp"

#ifndef __TABLEAU_HPP__
#define __TABLEAU_HPP__

namespace CPPIMAC2 {


	template<typename T, size_t N>
	class Tableau {

	public:
		///\brief default constructor makes empty tab of maxSize N
		inline Tableau()
		:_size(0)
		{};
		
		///\brief destructor
		inline ~Tableau(){};

		///\brief is the tab empty
		bool isEmpty() const { return _size == 0; };
		///\brief returns the size of the tab
		size_t size() const { return _size; };
		///\brief returns the max capacity of the tab
		size_t sizeMax() const { return N; };
		///\brief returns a reference to the first element of the tab
		T& getFirst();
		///\brief returns a reference to the last element of the tab
		T& getLast();
		///\brief returns a reference to the element of id "ind" in the tab (no exception check)
		T& operator[](size_t ind) { return _data[ind]; };
		///\brief returns a reference to the element of id "ind" in the tab
		T& at(size_t ind);
		///\brief push a new element in the tab
		void push(const T& toPush);
		///\brief pop the last element of the tab
		T& pop();
		///\brief insert an element in the tab at the id "ind". moves all the next values by 1 in the tab 
		void insert(const T& toInsert, const size_t ind);
		///\brief erase an element in the tab at the id "ind". moves all the next values by -1 in the tab 
		void erase(const size_t ind);

		///\brief display with cout << ... <<
		friend std::ostream &operator<<(std::ostream &os, const Tableau &tab) {
			os << "[ ";
			for (size_t i=0; i<tab.size(); i++) {
				os << tab._data[i] << " ";
			}
			os << "]";
			return os;
		}


	protected:
		//this weird stuff serves as a constructor askip ... ?? 
		T _data[N];
		size_t _size;
	};


	// functions implementation

	template<typename T, size_t N>
	T& 	Tableau<T, N>::getFirst()  {
		try {
			if (isEmpty()) {
				Error error("trying to get first element of empty tab", __FILE__, __LINE__);
				throw (error);
			}
			//////////// actual function code
			return _data[0];
			//////////// end actual function code
	
		}
		catch(Error error) {
			error.what();
		}
	};

	template<typename T, size_t N>
	T& Tableau<T, N>::getLast() {
		try {
			if (isEmpty()) {
				Error error("trying to get last element of empty tab", __FILE__, __LINE__);
				throw (error);
			}
			//////////// actual function code
			return _data[_size-1];
			//////////// end actual function code
	
		}
		catch(Error error) {
			error.what();
		}
	};

	template<typename T, size_t N>
	T& Tableau<T, N>::at(size_t ind) {
		try {
			if (ind < 0 || ind > _size) {
				Error error("trying to get element out of tab bounds", __FILE__, __LINE__);
				throw (error);
			}
			//////////// actual function code
			return _data[ind];
			//////////// end actual function code
	
		}
		catch(Error error) {
			error.what();
		}
	};

	template<typename T, size_t N>
	void Tableau<T, N>::push(const T& toPush) {
		try {
			if (_size >= N) {
				Error error("trying to push element in full tab", __FILE__, __LINE__);
				throw (error);
			}
			//////////// actual function code
			_size ++;
			_data[_size-1] = toPush;
			//////////// end actual function code
	
		}
		catch(Error error) {
			error.what();
		}
	};

	template<typename T, size_t N>
	T& Tableau<T, N>::pop() {
				try {
			if (isEmpty()) {
				Error error("trying to pop last element of empty tab", __FILE__, __LINE__);
				throw (error);
			}
			//////////// actual function code
			_size --;
			return _data[_size];
			//////////// end actual function code
	
		}
		catch(Error error) {
			error.what();
		}
	};

	template<typename T, size_t N>
	void Tableau<T, N>::insert(const T& toInsert, size_t ind) {
		try {
			if (_size >= N) {
				Error error("trying to insert element in full tab", __FILE__, __LINE__);
				throw (error);
			}
			if (ind < 0 || ind > _size) {
				Error error("trying to insert element out of tab bounds", __FILE__, __LINE__);
				throw (error);
			}
			//////////// actual function code
			for (size_t i=_size; i>ind; i--) {
				_data[i] = _data[i-1];
			}
			_data[ind] = toInsert;
			_size ++;
			//////////// end actual function code
	
		}
		catch(Error error) {
			error.what();
		}
	};

	template<typename T, size_t N>
	void Tableau<T, N>::erase(const size_t ind) {
		try {
			if (_size == 0) {
				Error error("trying to erase element of empty tab", __FILE__, __LINE__);
				throw (error);
			}
			if (ind < 0 || ind >= _size) {
				Error error("trying to insert element out of tab bounds", __FILE__, __LINE__);
				throw (error);
			}
			//////////// actual function code
			for (size_t i=ind; i<_size-1; i++) {
				_data[i] = _data[i+1];
			}
			_size --;
			//////////// end actual function code
	
		}
		catch(Error error) {
			error.what();
		}
	};





};

#endif