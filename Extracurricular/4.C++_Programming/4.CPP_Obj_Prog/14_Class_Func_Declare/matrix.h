#include <vector>

class Matrix 
{

        private:

            std::vector< std::vector<float> > grid;
            std::vector<float>::size_type rows;
            std::vector<float>::size_type cols;

        public:

            // constructor function declarations
            Matrix ();
            Matrix (std::vector< std::vector<float> >);
};
        
