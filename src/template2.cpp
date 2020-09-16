#include <iostream>
#include <string>

template<typename T>
struct my_map {
    my_map(T t) : data(t) {}
    T GetData(){
        return data;
    }
private:
    T data;
};

template<typename K, typename V, template<typename A> typename C = my_map>
class Map{
public:
    Map( K k, V v ) : key(k), value(v) {}

    K GetKey(){
        return key.GetData();
    }
    V GetValue(){
        return value.GetData();
    }
private:
    C<K> key;
    C<V> value;
};

int main(){
    Map<int, std::string, my_map> map( 1000, "템플릿 템플릿 인수");
    std::cout << "Map(" << map.GetKey() << ",'" << map.GetValue().c_str() << "')\n"; 
}