#include "../../include/Tabs/Tab.hpp"

namespace Conway {

    /**
     * @brief Construct a new Tab:: Tab object
     * 
     * @param string Tab Title 
     * @param string* Array of labels 
     */
    Tab::Tab(std::string title) : tabTitle(title) {}
    
    /**
     * @brief Destroy the Tab:: Tab object
     * 
     */
    Tab::~Tab() {}

    void Tab::draw(sf::RenderWindow& window) {
        sf::RectangleShape background(sf::Vector2f(400, 400));
        background.setPosition(sf::Vector2f(800, 0));
        background.setFillColor(sf::Color{211, 211, 211});
        window.draw(background);


        // Access Font
        sf::Font arial;
        arial.loadFromFile("arial.ttf");

        sf::Text TabTitle(tabTitle, arial, 20);

        TabTitle.setCharacterSize(20);
        TabTitle.setFillColor(sf::Color::Black);
        TabTitle.setStyle(sf::Text::Bold);
        TabTitle.setPosition(sf::Vector2f(805, 0));
        window.draw(TabTitle);

        std::unordered_map<std::string, std::string>::iterator it = info.begin();
        int i = 0;

        while (it != info.end()) {
            sf::Text label(it->first + " " + it->second, arial, 10);
            label.setFillColor(sf::Color::Black);
            label.setPosition(sf::Vector2f(805, 40 + (20*i)));
            window.draw(label);
            
            it++;
            i++;
        }
    }

    void Tab::update_info(std::string label, std::string data) {
        info[label] = data;
    }
}