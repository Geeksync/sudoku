#ifndef PARTIE_H
#define PARTIE_H


class Partie
{
    char niveau;
    double score;
    public:
        Partie();
        virtual ~Partie();
        Partie(const Partie& other);
        Partie& operator=(const Partie& other);

    protected:

    private:
};

#endif // PARTIE_H
