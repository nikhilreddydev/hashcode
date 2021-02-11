#include<iostream>
#include<vector>

using namespace std;

class pizza
{
    public:
    int ingrc; //num of ingredients
    vector <string> ingredients; //all the ingredients of pizza
};

main()
{
    int n; //number of pizzas
    int ingrm; //tmp variable to store num of ingr in each pizza
    string ingr; //tmp variable to store each ingredient
    int max = 0;
    int line;

    cin >> n;
    pizza a[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> ingrm;
        a[i].ingrc = ingrm;

        //loop stores all the ingredients of pizza[i] in its vector
        for (int j = 0; j < ingrm; ++j)
        {
            cin >> ingr;
            a[i].ingredients.push_back(ingr);
        }
        
        if (max < ingrm)
        {
            max = ingrm;
            line = i + 1;
        }
    }

    printf("Maximum ingredients: %d are in pizza num %d.", max, line);
}