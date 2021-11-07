#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation", 145, 137) , _Target(target)
{
	std::cout << *this << " with target " << this->getTarget() << " created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &raw) : Form(raw), _Target(raw._Target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const std::string	&ShrubberyCreationForm::getTarget() const { return (this->_Target); }

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->Form::execute(executor);
	std::ofstream outfile((std::string(this->getTarget()) + "_shrubbery").c_str());
	outfile << "                                                         ." << std::endl;
	outfile << "                                              .         ;" << std::endl;
	outfile << "                 .              .              ;%     ;;" << std::endl;
	outfile << "                   ,           ,                :;%  %;" << std::endl;
	outfile << "                    :         ;                   :;%;'     .," << std::endl;
	outfile << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	outfile << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	outfile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	outfile << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	outfile << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	outfile << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	outfile << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	outfile << "                      `@%:.  :;%.         ;@@%;'" << std::endl;
	outfile << "                        `@%.  `;@%.      ;@@%;" << std::endl;
	outfile << "                          `@%%. `@%%    ;@@%;" << std::endl;
	outfile << "                            ;@%. :@%%  %@@%;" << std::endl;
	outfile << "                              %@bd%%%bd%%:;" << std::endl;
	outfile << "                                #@%%%%%:;;" << std::endl;
	outfile << "                                %@@%%%::;" << std::endl;
	outfile << "                                %@@@%(o);  . '" << std::endl;
	outfile << "                                %@@@o%;:(.,'" << std::endl;
	outfile << "                            `.. %@@@o%::;" << std::endl;
	outfile << "                               `)@@@o%::;" << std::endl;
	outfile << "                                %@@(o)::;" << std::endl;
	outfile << "                               .%@@@@%::;" << std::endl;
	outfile << "                               ;%@@@@%::;." << std::endl;
	outfile << "                              ;%@@@@%%:;;;." << std::endl;
	outfile << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
	outfile.close();
}
