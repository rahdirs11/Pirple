#ifndef PLAYLIST_H
#define PLAYLIST_H



class Playlist: List_base
{
    public:
        Playlist();
        virtual ~Playlist();
        virtual bool add(string name);
        virtual bool deleteItem(string name);
        virtual void display(string name);
    protected:
        virtual bool check(string name);
    private:
};

#endif // PLAYLIST_H
