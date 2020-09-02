#ifndef door_hpp
#define door_hpp

#include <string>

namespace mynamespace{
    const int OPEN = 1;
    const int CLOSE = 0;

    struct Door
    {
        void Open();
        void Close();
        void ShowState() const;

        void SetName(std::string s);
        std::string GetName() const;

        void State(int i);

        int state;
        std::string name;
    };

    inline void Door::State(int i){
        state = i;
    }
}
#endif