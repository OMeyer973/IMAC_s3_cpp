#ifndef VECTORD_HPP__
#define VECTORD_HPP__

#include <cstdlib>
#include <string>


class VectorD {

	public:
		///\brief constructor
		VectorD(const size_t size = 0);
		VectorD(const VectorD& vectorD);

		///\brief destructor
		~VectorD();

		//Methods
		inline size_t size() const { 
			return _size;
		};
		inline double getValue(const size_t index) const {
			return _data[index];
		};
		inline void setValue(const size_t index, const double& value) {
			_data[index] = value;
		};
		void normalize();
		void add(const VectorD& vec);
		VectorD& operator= (const VectorD& v2);
		VectorD operator+ (const VectorD& v2) const;

		int save(const std::string& filename) const;
 
	private:
 		size_t _size;
 		double *_data;

};


#endif