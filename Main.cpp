#include <SFML/Graphics.hpp>
#include <iostream>
#include <string> 
#include <mmstream.h>
#include <mmsystem.h>
#include <mciapi.h>
#include <SFML/Audio.hpp>
#pragma comment(lib, "Winmm.lib")
using namespace std;

sf::RenderWindow window(sf::VideoMode(2000, 2000), "Sound Thunder");

int main() {

	sf::RectangleShape background;
	background.setSize(sf::Vector2f(1100, 950));
	background.setFillColor(sf::Color::Green);
	background.setPosition(200, 500);

	sf::RectangleShape sideBox;
	sideBox.setSize(sf::Vector2f(500, 950));
	sideBox.setFillColor(sf::Color::Green);
	sideBox.setPosition(1400, 500);

	sf::RectangleShape outline;
	outline.setSize(sf::Vector2f(250, 250));
	outline.setFillColor(sf::Color::Black);
	outline.setPosition(500, 500);

	sf::RectangleShape button1;
	button1.setSize(sf::Vector2f(400, 100));
	button1.setFillColor(sf::Color::White);
	button1.setOutlineColor(sf::Color::Black);
	button1.setOutlineThickness(3);
	button1.setPosition(1440, 600);

	sf::RectangleShape button2;
	button2.setSize(sf::Vector2f(400, 100));
	button2.setFillColor(sf::Color::White);
	button2.setOutlineColor(sf::Color::Black);
	button2.setOutlineThickness(3);
	button2.setPosition(1440, 730);

	sf::RectangleShape button3;
	button3.setSize(sf::Vector2f(400, 100));
	button3.setFillColor(sf::Color::White);
	button3.setOutlineColor(sf::Color::Black);
	button3.setOutlineThickness(3);
	button3.setPosition(1440, 860);

	sf::RectangleShape button4;
	button4.setSize(sf::Vector2f(400, 100));
	button4.setFillColor(sf::Color::White);
	button4.setOutlineColor(sf::Color::Black);
	button4.setOutlineThickness(3);
	button4.setPosition(1440, 990);

	sf::Text title;
	sf::Font font;
	font.loadFromFile("font/candal.ttf");
	title.setFont(font);

	title.setString("Sound Thunder!");
	title.setCharacterSize(50);
	title.setColor(sf::Color::White);
	title.setPosition(640, 440);

	sf::Text pop;
	pop.setFont(font);
	pop.setString("1: Pop");
	pop.setCharacterSize(60);
	pop.setColor(sf::Color::Blue);
	pop.setPosition(1440, 600);

	sf::Text rap;
	rap.setFont(font);
	rap.setString("2: Rap");
	rap.setCharacterSize(60);
	rap.setColor(sf::Color::Blue);
	rap.setPosition(1440, 730);

	sf::Text songStronger;
	songStronger.setFont(font);
	songStronger.setString("E: Stronger by Kanye West");
	songStronger.setCharacterSize(30);
	songStronger.setColor(sf::Color::Blue);
	songStronger.setPosition(280, 600);

	sf::Text songElement;
	songElement.setFont(font);
	songElement.setString("F: ELEMENT by Kendrick Lamar");
	songElement.setCharacterSize(30);
	songElement.setColor(sf::Color::Blue);
	songElement.setPosition(280, 730);

	sf::Text songAngels;
	songAngels.setFont(font);
	songAngels.setString("G: Angels by Chance the Rapper");
	songAngels.setCharacterSize(30);
	songAngels.setColor(sf::Color::Blue);
	songAngels.setPosition(280, 860);

	sf::Text songVibe;
	songVibe.setFont(font);
	songVibe.setString("H: It's A Vibe by 2 Chainz");
	songVibe.setCharacterSize(30);
	songVibe.setColor(sf::Color::Blue);
	songVibe.setPosition(280, 990);

	sf::Text songStay;
	songStay.setFont(font);
	songStay.setString("A: Stay by Alessia Cara");
	songStay.setCharacterSize(30);
	songStay.setColor(sf::Color::Blue);
	songStay.setPosition(280, 600);

	sf::Text songDriveBy;
	songDriveBy.setFont(font);
	songDriveBy.setString("B: Drive By by Train");
	songDriveBy.setCharacterSize(30);
	songDriveBy.setColor(sf::Color::Blue);
	songDriveBy.setPosition(280, 730);

	sf::Text songThats;
	songThats.setFont(font);
	songThats.setString("C: That's What I Like\n    by Bruno Mars");
	songThats.setCharacterSize(30);
	songThats.setColor(sf::Color::Blue);
	songThats.setPosition(280, 860);

	sf::Text songHappy;
	songHappy.setFont(font);
	songHappy.setString("D: Happy by\n    Pharrell Williams");
	songHappy.setCharacterSize(30);
	songHappy.setColor(sf::Color::Blue);
	songHappy.setPosition(280, 990);

	sf::Music music;
	sf::Music music2;
	sf::Music music3;
	sf::Music music4;
	sf::Music music5;
	sf::Music music6;
	sf::Music music7;
	sf::Music music8;
	sf::Music music9;

	if (!music8.openFromFile("angels.wav")) {
		std::cout << "ERROR" << std::endl;
	}

	if (!music6.openFromFile("stronger.wav")) {
		std::cout << "ERROR" << std::endl;
	}

	if (!music7.openFromFile("element.wav")) {
		std::cout << "ERROR" << std::endl;
	}

	if (!music9.openFromFile("vibe.wav")) {
		std::cout << "ERROR" << std::endl;
	}

	if (!music5.openFromFile("thunderclip.wav")) {
		std::cout << "ERROR" << std::endl;
	}

	if (!music.openFromFile("stay.wav")) {
		std::cout << "ERROR" << std::endl;
	}
	else if (!music2.openFromFile("train.wav")) {
		std::cout << "ERROR" << std::endl;
	}
	else if (!music3.openFromFile("thats1.wav")) {
		std::cout << "ERROR" << std::endl;
	}
	else if (!music4.openFromFile("happy.wav")) {
		std::cout << "ERROR" << std::endl;
	}
	bool playFile = false;
	bool playFile2 = false;
	bool playFile3 = false;
	bool playFile4 = false;
	bool playFile5 = false;
	bool playFile6 = false;
	bool playFile7 = false;
	bool playFile8 = false;
	bool playFile9 = false;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::Return) {
					playFile = false;
					playFile2 = false;
					playFile3 = false;
					playFile7 = false;
					playFile8 = false;
					playFile9 = false;
					playFile4 = false;
					playFile6 = false;
					playFile5 = true;
				}
				
				if (event.key.code == sf::Keyboard::A) {
					playFile2 = false;
					playFile5 = false;
					playFile3 = false;
					playFile9 = false;
					playFile8 = false;
					playFile7 = false;
					playFile4 = false;
					playFile6 = false;
					playFile = true;
				}

				if (event.key.code == sf::Keyboard::B) {
					playFile = false;
					playFile5 = false;
					playFile3 = false;
					playFile6 = false;
					playFile8 = false;
					playFile9 = false;
					playFile7 = false;
					playFile4 = false;
					playFile2 = true;
				}

				if (event.key.code == sf::Keyboard::C) {
					playFile = false;
					playFile5 = false;
					playFile2 = false;
					playFile6 = false;
					playFile9 = false;
					playFile8 = false;
					playFile7 = false;
					playFile4 = false;
					playFile3 = true;
				}

				if (event.key.code == sf::Keyboard::D) {
					playFile = false;
					playFile5 = false;
					playFile2 = false;
					playFile7 = false;
					playFile9 = false;
					playFile8 = false;
					playFile6 = false;
					playFile3 = false;
					playFile4 = true;
				}

				if (event.key.code == sf::Keyboard::E) {
					playFile = false;
					playFile5 = false;
					playFile2 = false;
					playFile8 = false;
					playFile7 = false;
					playFile9 = false;
					playFile4 = false;
					playFile3 = false;
					playFile6 = true;
				}

				if (event.key.code == sf::Keyboard::F) {
					playFile = false;
					playFile5 = false;
					playFile2 = false;
					playFile4 = false;
					playFile8 = false;
					playFile3 = false;
					playFile9 = false;
					playFile6 = false;
					playFile7 = true;
				}

				if (event.key.code == sf::Keyboard::G) {
					playFile = false;
					playFile5 = false;
					playFile2 = false;
					playFile4 = false;
					playFile7 = false;
					playFile9 = false;
					playFile3 = false;
					playFile6 = false;
					playFile8 = true;
				}

				if (event.key.code == sf::Keyboard::H) {
					playFile = false;
					playFile5 = false;
					playFile2 = false;
					playFile4 = false;
					playFile7 = false;
					playFile8 = false;
					playFile3 = false;
					playFile6 = false;
					playFile9 = true;
				}
			}
			if (playFile) {
				music4.pause();
				music5.pause();
				music3.pause();
				music6.pause();
				music9.pause();
				music8.pause();
				music7.pause();
				music2.pause();
				music.play();
			}

			if (playFile2) {
				music4.pause();
				music5.pause();
				music3.pause();
				music8.pause();
				music9.pause();
				music6.pause();
				music7.pause();
				music.pause();
				music2.play();
			}

			if (playFile3) {
				music4.pause();
				music5.pause();
				music8.pause();
				music.pause();
				music9.pause();
				music7.pause();
				music6.pause();
				music2.pause();
				music3.play();
			}

			if (playFile4) {
				music.pause();
				music5.pause();
				music2.pause();
				music8.pause();
				music9.pause();
				music7.pause();
				music6.pause();
				music3.pause();
				music4.play();
			}

			if (playFile5) {
				music.pause();
				music2.pause();
				music3.pause();
				music6.pause();
				music9.pause();
				music8.pause();
				music7.pause();
				music4.pause();
				music5.play();
			}

			if (playFile6) {
				music.pause();
				music2.pause();
				music3.pause();
				music7.pause();
				music8.pause();
				music9.pause();
				music5.pause();
				music4.pause();
				music6.play();
			}

			if (playFile7) {
				music.pause();
				music2.pause();
				music3.pause();
				music6.pause();
				music9.pause();
				music8.pause();
				music5.pause();
				music4.pause();
				music7.play();
			}

			if (playFile8) {
				music.pause();
				music2.pause();
				music3.pause();
				music6.pause();
				music7.pause();
				music9.pause();
				music5.pause();
				music4.pause();
				music8.play();
			}

			if (playFile9) {
				music.pause();
				music2.pause();
				music3.pause();
				music6.pause();
				music7.pause();
				music8.pause();
				music5.pause();
				music4.pause();
				music9.play();
			}


			window.clear();

			window.draw(outline);
			window.draw(sideBox);
			window.draw(background);
			window.draw(button1);
			window.draw(button2);
			window.draw(button3);
			window.draw(button4);
			window.draw(title);
			window.draw(pop);
			window.draw(rap);
			if (event.key.code == sf::Keyboard::Num1) {
				window.draw(songStay);
				window.draw(songDriveBy);
				window.draw(songThats);
				window.draw(songHappy);
			}

			if (event.key.code == sf::Keyboard::Num2) {
				window.draw(songStronger);
				window.draw(songAngels);
				window.draw(songElement);
				window.draw(songVibe);
				
			}
			
			//window.draw(songStay);
			//window.draw(songDriveBy);
			//window.draw(songThats);
			//window.draw(songHappy);

			window.display();
		}
	}		
	return EXIT_SUCCESS;
}
	
	

	

	