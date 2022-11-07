#pragma once
#include"Data.h"
#include <iostream>

template<typename T>
class Operations
{
private:
	Data<T> data;
	//Data data2;
public:
	Operations() = default;
	void set_Data(Data<T>);
	Data<T> get_Data();


	T operator *(Data<T>&);
	T operator &(Data<T>&);
	T operator ^(Data<T>&);


};



template<typename T>
void Operations<T>::set_Data(Data<T> data_1) {
	this->data1 = data_1;
}


template<typename T>
Data<T> Operations<T>::get_Data() {
	return data;
}


template<typename T>
T Operations<T>::operator*(Data<T>& data1) {

	return pow(data1.get_Data2(), data1.get_Data3());
}
template<typename T>
T Operations<T>::operator&(Data<T>& data1) {
	return pow(data1.get_Data1(), data1.get_Data3());
}
template<typename T>
T Operations<T>::operator^(Data<T>& data1) {

	return pow(data1.get_Data2(), data1.get_Data1());
}
