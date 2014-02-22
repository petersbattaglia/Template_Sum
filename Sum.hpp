 namespace cs540 
 {
	template <typename T>
	const T sum_aux(T v) {
	  return v;
	}

	template <typename S, typename T>
	auto sum_aux(S carry, T &v) 
		-> decltype(sum_aux(carry + v))
	{
	  return sum_aux(carry + v);
	}

	template <typename S, typename HEAD, typename... TAIL>
	auto sum_aux(S carry, const HEAD &v, const TAIL&... params)
	  -> decltype(sum_aux(carry + v, params...)) 
	  {
	    return sum_aux(carry + v, params...);
	}

	template <typename... Lst>
	auto sum(const Lst&... params) 
	-> decltype(sum_aux(params...)) 
	{
	  return sum_aux(params...);
	}
}
