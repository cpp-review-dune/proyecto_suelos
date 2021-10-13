/** @brief Example class for a differential equation model

    The model is

    u'(t) = lambda*(2*t^2-4*t+u(t)), t>=t_0, u(t_0)=u_0.

    \tparam T a type representing time values
    \tparam N a type representing states and f-values
*/
template<class T, class N=T>
class ModelProblem
{
public:
  /** \brief export size_type */
  typedef std::size_t size_type;

  /** \brief export time_type */
  typedef T time_type;

  /** \brief export number_type */
  typedef N number_type;

  //! constructor stores parameter lambda
  ModelProblem (const N& lambda_)
    : lambda(lambda_)
  {}

  //! return number of components for the model
  std::size_t size () const
  {
    return 1;
  }

  //! set initial state including time value
  void initialize (T& t0, hdnum::Vector<N>& x0) const
  {
    t0 = 1;
    x0[0] = 0.7182818;
  }

  //! model evaluation
  void f (const T& t, const hdnum::Vector<N>& x, hdnum::Vector<N>& result) const
  {
    result[0] = lambda*(2*t*t-4*t+x[0]);
  }

  //! exact solution if known
  void exact_solution (const T& t, hdnum::Vector<N>& result) const
  {
    result.resize(size());
    result[0] = exp(t)-2*t*t;
  }

  //! jacobian evaluation needed for implicit solvers
  void f_x (const T& t, const hdnum::Vector<N>& x, hdnum::DenseMatrix<N>& result) const
  {
    result[0][0] = lambda*(4*t-4+2*lambda*t*t-4*lambda*t+
    lambda*x[0]);
  }

private:
  N lambda;
};
