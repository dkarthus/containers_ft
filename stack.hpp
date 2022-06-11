#pragma once

namespace ft
{
	template <class T, class Container = ft::vector<T> >
	class stack
	{
	public:
		typedef T								value_type;
		typedef Container						container_type;
		typedef value_type&						reference;
		typedef const value_type&				const_reference;
		typedef typename Container::size_type	size_type;

	protected:
		container_type							_cnt;

	public:
		explicit stack(const container_type& cont = container_type()) : _cnt(cont){};

		stack(const stack& other) : _cnt(other._cnt) {}

		stack& operator=(const stack& other)
		{
			if (*this != other)
				_cnt = other._cnt;
			return (*this);
		}

		reference top()
		{
			return (_cnt.back());
		}

		const_reference top() const
		{
			return (_cnt.back());
		}

		bool empty() const
		{
			return (_cnt.empty());
		}

		size_type size() const
		{
			return (_cnt.size());
		}

		void push(const value_type& value)
		{
			_cnt.push_back(value);
		}

		void pop()
		{
			_cnt.pop_back();
		}

		template <class AnyType, class Cont>
		friend bool operator==(const stack<AnyType,Cont>& lhs, const stack<AnyType,Cont>& rhs)
		{
			return (lhs._cnt == rhs._cnt);
		}

		template <class AnyType, class Cont>
		friend bool operator!=(const stack<AnyType,Cont>& lhs, const stack<AnyType,Cont>& rhs)
		{
			return (lhs._cnt != rhs._cnt);
		}

		template <class AnyType, class Cont>
		friend bool operator<(const stack<AnyType,Cont>& lhs, const stack<AnyType,Cont>& rhs)
		{
			return (lhs._cnt < rhs._cnt);
		}

		template <class AnyType, class Cont>
		friend bool operator<=(const stack<AnyType,Cont>& lhs, const stack<AnyType,Cont>& rhs)
		{
			return (lhs._cnt <= rhs._cnt);
		}

		template <class AnyType, class Cont>
		friend bool operator>(const stack<AnyType,Cont>& lhs, const stack<AnyType,Cont>& rhs)
		{
			return (lhs._cnt > rhs._cnt);
		}

		template <class AnyType, class Cont>
		friend bool operator>=(const stack<AnyType,Cont>& lhs, const stack<AnyType,Cont>& rhs)
		{
			return (lhs._cnt >= rhs._cnt);
		}
	};
}

#endif
