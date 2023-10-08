
// Used a template to be able pass both unordered and ordered maps. 

// The elements of a map are of type std::pair. Instead of auto keyword we could use std::pair<std::string, int>.

// The for-each loop provides a convenient syntax for traversing a hash map. In a for-each loop, the counter variable is the hash map element itself, 
// which is an object of type std::pair. std::pair has two member variables: 
// .first is the value of the key and .second is the mapped value

template <typename T>
void ShowMapInfo(T the_map) {
    for (auto item : the_map) {
        std::cout << item.first << " " << item.second << std::endl;
    }
}