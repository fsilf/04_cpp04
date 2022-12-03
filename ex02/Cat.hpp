#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(Cat const & src);
		virtual ~Cat();

		Cat&			operator=(Cat const & rhs);
		virtual void	makeSound() const;
		Brain&			get_brain() const;

	private:
		Brain*	_brain;
};

#endif
