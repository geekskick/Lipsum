#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <sstream>
#include <random>

int main() {
    const std::string good{"lorem ipsum dolor sit amet ligula suspendisse nulla pretium rhoncus tempor fermentum enim integer ad vestibulum volutpat nisl rhoncus turpis est vel elit congue wisi enim nunc ultricies sit magna tincidunt maecenas aliquam maecenas ligula nostra accumsan taciti sociis mauris in integer a dolor netus non dui aliquet sagittis felis sodales dolor sociis mauris vel eu libero cras faucibus at arcu habitasse elementum est ipsum purus pede porttitor class ut adipiscing aliquet sed auctor imperdiet arcu per diam dapibus libero duis enim eros in vel volutpat nec pellentesque leo temporibus scelerisque nec ac dolor ac adipiscing amet bibendum nullam lacus molestie ut libero nec diam et pharetra sodales feugiat ullamcorper id tempor id vitae mauris pretium aliquet lectus tincidunt porttitor mollis imperdiet libero senectus pulvinar etiam molestie mauris ligula laoreet vehicula eleifend repellat orci erat et sem cum ultricies sollicitudin amet eleifend dolor nullam erat malesuada est leo ac varius natoque turpis elementum est duis montes tellus lobortis lacus amet arcu et in vitae vel wisi at id praesent bibendum libero faucibus porta egestas quisque praesent ipsum fermentum tempor curabitur auctor erat mollis sed turpis vivamus a dictumst congue magnis aliquam amet ullamcorper dignissim molestie mollis tortor vitae tortor eros wisi facilisis consectetuer arcu ipsum ornare pellentesque vehicula in vehicula diam ornare magna erat felis wisi a risus justo fermentum id malesuada eleifend tortor molestie a a vel et mauris at suspendisse neque aliquam faucibus adipiscing vivamus in wisi mattis leo suscipit nec amet nisl fermentum tempor ac a augue in eleifend in venenatis cras sit id in vestibulum felis in sed ligula in sodales suspendisse mauris quam etiam erat quia tellus convallis eros rhoncus diam orci porta lectus esse adipiscing posuere et nisl arcu vitae laoreet morbi integer molestie amet suspendisse morbi amet maecenas a maecenas mauris neque proin nisl mollis suscipit nec ligula ipsum orci nulla in posuere ut quis ultrices lectus primis vehicula velit hasellus lectus vestibulum orci laoreet inceptos vitae at consectetuer amet et consectetuer congue porta scelerisque praesent at lacus vestibulum et at dignissim cras urna ante convallis turpis duis lectus sed aliquet at et ultricies eros sociis nec hamenaeos dignissimos imperdiet luctus ac eros sed vestibulum lobortis adipiscing praesent nec eros eu ridiculus libero felis donec arcu risus diam amet sit congue tortor risus vestibulum commodo nisl luctus augue amet quis aenean maecenas sit donec velit iusto morbi felis elit et nibh vestibulum volutpat dui lacus consectetuer mauris at suspendisse eu wisi rhoncus nibh velit posuere sem in a sit sociosqu netus semper aenean suspendisse dictum arcu enim conubia leo nulla ac nibh purus hendrerit ut mattis nec maecenas quo ac vivamus praesent metus viverra ante natoque sed sit hendrerit dapibus velit molestiae leo a ut lorem sit et lacus aliquam sodales nulla ante auctor excepturi wisi dolor lacinia dignissim eros condimentum dis pellentesque sodales lacus nunc feugiat at in orci ligula suscipit luctus sed dolor eleifend aliquam dui ut diam mauris sollicitudin sed nisl lacus"};
 
    auto markov_map = std::map<std::string, std::vector<std::string>>{};     
    auto iss = std::istringstream{good};
    const auto words = std::vector<std::string>(std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>{});
    const auto len = words.size();

    for(auto w = words.begin(); w != words.end()-1; w++){
        markov_map[*w].push_back(*std::next(w));
    }

    std::default_random_engine generator;
    const auto r_in_r = [&](const int max){ 
        auto dist = std::uniform_int_distribution<int>{0,max};
        return dist(generator);
    };

    const auto max_sentence = 15;
    auto sentence_len = r_in_r(max_sentence);
    auto seed = words[0];    
    for(int i{}, w{}; i < len; w++, i++){
        std::cout << seed;
        if(w == sentence_len){
            std::cout << ".\n\n";
            sentence_len = r_in_r(max_sentence);
            w = -1;        
        }
        std::cout << " ";
        seed = markov_map.at(seed)[r_in_r(markov_map.at(seed).size()-1)];
    }

    std::cout << ".\n";
    return EXIT_SUCCESS;
}
