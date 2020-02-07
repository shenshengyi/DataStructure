#pragma once

#ifdef DATASTRUCTURELIBRARY_EXPORTS
#define DATASTRUCTURELIBRARY_API __declspec(dllexport)
#else
#define DATASTRUCTURELIBRARY_API __declspec(dllimport)
#endif

#include <iostream>

namespace Container
{
	template<typename T>
	class DATASTRUCTURELIBRARY_API LinearList
	{
	public:
		explicit LinearList(int MaxListSize = 10);
		~LinearList(void);
		inline bool IsEmpty(void)const;
		bool Find(int k, T& x)const;//返回第k个元素至x中;
		inline int Length(void)const;
		int Search(const T& x)const;//返回x所在位置;
		LinearList<T>& Delete(int k, T& x);//删除第k个元素并将它返回至x中;
		LinearList<T>& Insert(int k, const T& x);//在第k个元素之后插入x.
		void Output(ostream& out)const;
	private:
		int length;
		int MaxSize;
		T* element;
	};

	template<typename T>
	LinearList<T>::LinearList(int MaxListSize)
		:MaxSize{MaxListSize}
		, length{ 0 }
		, element{ new T[MaxSize] }
	{
	}

	template<typename T>
	LinearList<T>::~LinearList(void) {
		delete[] element;
	}

	template<typename T>
	int LinearList<T>::Length(void)const {
		return length;
	}

	template <typename T>
	bool LinearList<T>::IsEmpty(void)const {
		return 0 == length;
	}

	template <typename T>
	bool LinearList<T>::Find(int k, T& x)const {
		if (k < 1 || k > length) {
			return false;
		}

		x = element[k - 1];
		return true;
	}

	template <typename T>
	int LinearList<T>::Search(const T& x)const {
		for (int i = 0; i < length; i++) {
			if (x == element[i]) {
				return ++i;
			}
		}

		return 0;
	}

	template <typename T>
	LinearList<T>& LinearList<T>::Delete(int k, T& x) {
		if (Find(k, x)) {
			for (int i = 0; i < length; i++) {
				element[i - 1] = element[i];
				length--;
			}
		}

		cout << "Delete Error" << std::endl;
		return *this;
	}

	template<typename T>
	LinearList<T>& LinearList<T>::Insert(int k, const T& x) {
		if (k < 0 || k > length) {
			std::cout << "yiman" << std::endl;
			return *this;
		}
		if (length == MaxSize) {
			std::cout << "yiman" << std::endl;
			return *this;
		}
		for (int i = length - 1; i >= k; i--) {
			element[i + 1] = element[i];
		}
		element[k] = x;
		length++;
		return *this;
	}

	template <typename T>
	void LinearList<T>::Output(ostream& out)const {
		for (int i = 0; i < length; i++) {
			out << element[i] << " ";
		}
	}

	template <typename T>
	std::ostream& operator<<(std::ostream& out, const LinearList<T>& x) {
		x.Output(out);
		return out;
	}

	template class __declspec(dllexport) LinearList<int>;
	using int_type = LinearList<int>;
}

