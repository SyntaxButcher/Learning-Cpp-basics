#include <iostream>
using namespace std;

class Movie
{
    //if private, this can only be used inside class and can't be used in mainfunction
    // we are doing this to setup some rules for rating, limiting what can be entered
    private:
        string rating;

    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating)
        {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }
        void setRating(string aRating)
        {
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
            {
                rating = aRating;
            }
            else
            {
                rating = "NR";
            }
        }
        //this is how to get the rating out that was private to use it in main
        string getRating()
        {
            return rating;
        }

};

int main()
{
        Movie avengers("The Avengers", "Joss Whedon", "PG-13");

        avengers.setRating("Cat");

        cout << avengers.getRating();

        //cout << avengers.rating; will not work because inside private


    return 0;
}
