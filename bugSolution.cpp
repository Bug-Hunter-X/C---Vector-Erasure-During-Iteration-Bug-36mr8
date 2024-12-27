std::vector<int> vec; 

for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

// Correct approach using iterators
for (auto it = vec.begin(); it != vec.end(); ) {
  if (*it == 5) {
    it = vec.erase(it);
  } else {
    ++it;
  }
}

//Alternative approach
//std::vector<int> vec2; 
//for (int x : vec){
//  if (x != 5){
//      vec2.push_back(x);
//  }
//}