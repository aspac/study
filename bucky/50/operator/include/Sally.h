#ifndef SALLY_H
#define SALLY_H


class Sally
{
    public:
        Sally();
        Sally(int);
        Sally operator+ (Sally);

        int getSally();

    private:
        int num;



};

#endif // SALLY_H
