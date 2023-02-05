#pragma once

typedef struct Team {
	char club_name[25];
	char coach[25];
	int date_of_foundation;
	char lineup[11][40];
	int LeagueCup;
	int UCL;
	int UEL;
	int CountryCup;
	int ContinentalCup;
	int id;
} Team;

Team EPL[20] =
{
	{"Arsenal", "Mikel Arteta", 1886, { {"1. Ramsdale"}, {"4. White"}, {"5. Partey"}, {"6. Gabriel"}, {"7. Saka"}, {"8. Odegaard"}, {"9. Jesus"}, {"11. Martinelly"}, {"12. Saliba"}, {"34. Xhaka"}, {"35. Zinchenko"} }, 13, 0, 2, 14, 2 , 1},
	{"Manchester City", "Hosep Guardiolla", 1880, { {"2. Kyle Walker"}, {"3. Ruben Dias"}, {"5. John Stones"}, {"6. Nathan Ake"}, {"8. Ilkay Gundogan"}, {"9. Erling Haaland"}, {"10. Jack Grealish"}, {"14. Aymeric Laporte"}, {"16. Rodri"}, {"17. Kevin De Bruyne"}, {"31. Ederson"}}, 8, 0, 1, 6, 8, 1},
	{"Newcastle United", "Eddy Hou", 1892, {{"1. Martin Dubravka"}, {"2. Kieran Trippier"}, {"3. Paul Dummett"}, {"4. Sven Botman"}, {"5. Fabian Schar"}, {"6. Jamaal Lascelles"}, {"7. Joelinton"}, {"9. Callum Wilson"}, {"10. Allan Saint - Maximin"}, {"11. Matt Ritchie"}, {"12. Jamal Lewis"}}, 4, 0, 1, 6, 0, 1},
	{"Manchester United", "Erik Ten Haag", 1878, {{"1. David De Gea"}, {"6. Martinez"}, {"8. Fernandes"}, {"9. Martial"}, {"10. Rashford"}, {"14. Eriksen"}, {"18. Casemiro"}, {"19. Varane"}, {"21. Antony"}, {"23. Shaw"}, {"29. Wan-Bissaka"}}, 20, 3, 2, 12, 5, 1},
	{"Tottenham", "Antonio Conte", 1882, {{"1. Hugo Lloris"}, {"4. Oliver Skipp"}, {"5. Emile Hojbjerg"}, {"6. Davinson Sanchez"}, {"7. Son Heung - Min"}, {"9. Richarlison"}, {"10. Harry Kane"}, {"12. Emerson Royal"}, {"14. Ivan Perisic"}, {"15. Eric Dier"}, {"16. Arnaut Danjuma"}}, 2, 0, 3, 8, 4, 1},
	{"Brighton", "Roberto De Dzerbi", 1901, {{"1. Robert Sanchez"}, {"2. Tariq Lamptey"} , {"4. Adam Webster"} , {"5. Lewis Dunk" }, {"6. Levi Colwill"} , {"7. Solly March"} , {"10. Alexis Mac Allister"} , {"13. Pascal Gros" }, {"14. Adam Lallana" }, {"15. Jakub Moder"} , {"18. Danny Welbeck"} }, 0, 0, 0, 0, 0, 1},
	{"Fullham", "Marko Silva", 1879, {{"1. Marek Rodak"}, {"2. Kenny Tete"}, {"3. Layvin Kurzawa"}, {"4. Tosin Adarabioyo"}, {"5. Shane Duffy"}, {"6. Harrison Reed"}, {"7. Neeskens Kebano"}, {"8. Harry Wilson"}, {"9. Aleksandar Mitrovic"}, {"10. Tom Cairney"}, {"11. Manor Solomon"}}, 0, 0, 0, 0, 0, 1},
	{"Brantford", "Frank Tomas", 1889, {{"1. David Raya"}, {"2. Aaron Hickey"}, {"3. Rico Henry"}, {"5. Ethan Pinnock"}, {"6. Christian Norgaard"}, {"8. Mathias Jensen"}, {"9. Kevin Schade"}, {"10. Josh Dasilva"}, {"11. Yoane Wissa"}, {"13. Mathias Jorgensen"}, {"14. Saman Ghoddos"}}, 0, 0, 0, 0, 0, 1},
	{"Liverpool", "Urgen Klopp", 1892, {{"1. Alisson Becker"}, {"2. Joe Gomez"}, {"3. Fabinho"}, {"4. Virgil van Dijk"}, {"5. Ibrahima Konate"}, {"6. Thiago Alcantara"}, {"7. James Milner"}, {"8. Naby Keita"}, {"9. Roberto Firmino"}, {"11. Mohamed Salah"}, {"27. Darwin Nunez"}}, 19, 6, 3, 8, 9, 1},
	{"Chelsea", "Graham Potter", 1905, {{"1. Kepa Arrizabalaga"}, {"4. Benoit Badiashile"}, {"5. Enzo Fernandez"}, {"6. Thiago Silva"}, {"7. NGolo Kante"}, {"8. Mateo Kovacic"}, {"9. Pierre - Emerick Aubameyang"}, {"10. Christian Pulisic"}, {"11. Joao Felix"}, {"12. Ruben Loftus - Cheek"}, {"19. Mason Mount"}}, 6, 2, 4, 8, 5, 1},
	{"Aston Villa", "Unai Emery", 1874, {{"1. Emiliano Martinez"}, {"2. Matty Cash"}, {"3. Diego Carlos"}, {"4.Ezri Konsa"}, {"5. Tyrone Mings"}, {"6. Douglas Luiz"}, {"7. John McGinn"}, {"9. Bertrand Traore"}, {"10. Emiliano Buendia"}, {"11. Ollie Watkins"}, {"12. Jed Steer"}}, 7, 1, 0, 7, 5, 1},
	{"Crystal Palace", "Patrick Viera", 1905, {{"2. Joel Ward"}, {"3. Tyrick Mitchell"}, {"4. Luka Milivojevic"}, {"5. James Tomkins"}, {"6. Marc Guehi"}, {"7. Michael Olise"}, {"9. Jordan Ayew"}, {"10. Eberechi Eze"}, {"11. Wilfried Zaha"}, {"13. Vicente Guaita"}, {"14. Jean - Philippe Mateta"}}, 0, 0, 0, 0, 0, 1},
	{"Nottingham Forrest", "Steven Kuper", 1865, {{"1. Dean Henderson"}, {"2. Giulian Biancone"}, {"3. Steve Cook"}, {"4. Joe Worrall"}, {"5. Orel Mangala"}, {"6. Jonjo Shelvey"}, {"7. Neco Williams"}, {"8. Jack Colback"}, {"9. Taiwo Awoniyi"}, {"10. Morgan Gibbs - White"}, {"11. Jesse Lingard"}}, 1, 2, 0, 2, 4, 1},
	{"Leicester City", "Brandon Rogers", 1884, {{"1. Danny Ward"}, {"2. James Justin"}, {"3. Wout Faes"}, {"4. Caglar Soyuncu"}, {"5. Ryan Bertrand"}, {"6. Jonny Evans"}, {"7. Harvey Barnes"}, {"8. Youri Tielemans"}, {"9. Jamie Vardy"}, {"10. James Maddison"}, {"12. Alex Smithies"}}, 1, 0, 0, 1, 3, 1},
	{"Leeds United", "Jesse Marsh", 1919,  {{"1. Illan Meslier"}, {"2. Luke Ayling"}, {"3. Junior Firpo"}, {"4. Adam Forshaw"}, {"5. Robin Koch"}, {"6. Liam Cooper"}, {"7. Brenden Aaronson"}, {"8. Marc Roca"}, {"9. Patrick Bamford"}, {"10. Crysencio Summerville"}, {"11. Jack Harrison"}}, 3, 0, 2, 1, 1, 1},
	{"West Ham United", "David Moyes", 1895, {{"1. Lukasz Fabianski"}, {"2. Ben Johnson"}, {"3. Aaron Cresswell"}, {"4. Kurt Zouma"}, {"5. Vladimir Coufal"}, {"7. Gianluca Scamacca"}, {"8. Michail Antonio"}, {"9. Manuel Lanzini"}, {"10. Lucas Paqueta"}, {"11. Flynn Downes"}, {"12. Alphonse Areola"}}, 0, 0, 0, 3, 0, 1},
	{"Wolves", "Hulen Lopetegui", 1877, {{"1. Jose Sa"}, {"3. Rayan Ait - Nouri"}, {"4. Nathan Collins"}, {"5. Mario Lemina"}, {"6. Boubacar Traore"}, {"7. Pedro Neto"},{ "8. Ruben Neves"}, {"9. Raul Jimenez"}, {"10. Daniel Podence"}, {"11. Hwang Hee - Chan"}, {"12. Matheus Cunha"}}, 3, 0, 0, 4, 2, 1},
	{"Bournemouth", "Harry O'Neal", 1899, {{"1. Mark Travers"}, {"2. Ryan Fredericks"}, {"3. Jack Stephens"}, {"4. Lewis Cook"}, {"5. Lloyd Kelly"}, {"6. Chris Mepham"}, {"7. David Brooks"}, {"8. Jefferson Lerma"}, {"9. Dominic Solanke"}, {"10. Ryan Christie"}, {"11. Dango Ouattara"}}, 0, 0, 0, 0, 0, 1},
	{"Everton", "Shean Daish", 1878, {{"1. Jordan Pickford"}, {"2. James Tarkowski"}, {"3. Nathan Patterson"}, {"4. Mason Holgate"}, {"5. Michael Keane"}, {"7. Dwight McNeil"}, {"8. Amadou Onana"}, {"9. Dominic Calvert - Lewin"}, {"11. Yerry Mina"}, {"13. Andros Townsend"}, {"37. James Garner"}}, 9, 0, 1, 5, 0, 1},
	{"Southampton", "Natan Jones", 1885, {{"1. Alex McCarthy"}, {"2. Kyle Walker - Peters"}, {"3. Ainsley Maitland - Niles"}, {"4. Lyanco"}, {"6. Duje Caleta - Car"}, {"7. Joe Aribo"}, {"8. James Ward - Prowse"}, {"9. Adam Armstrong"}, {"10. Che Adams"}, {"11. Mislav Orsic"}, {"32. Theo Walcott"}}, 0, 0, 0, 1, 0, 1}
};

Team LaLiga[20] =
{
	{"Barcelona", "Xavi", 1886, { {"1. Ramsdale"}, {"4. White"}, {"5. Partey"}, {"6. Gabriel"}, {"7. Saka"}, {"8. Odegaard"}, {"9. Jesus"}, {"11. Martinelly"}, {"12. Saliba"}, {"34. Xhaka"}, {"35. Zinchenko"} }, 13, 0, 2, 14, 0, 2},
	{"Real Madrid", "Carlo Ancelotti", 1880, { {"2. Kyle Walker"}, {"3. Ruben Dias"}, {"5. John Stones"}, {"6. Nathan Ake"}, {"8. Ilkay Gundogan"}, {"9. Erling Haaland"}, {"10. Jack Grealish"}, {"14. Aymeric Laporte"}, {"16. Rodri"}, {"17. Kevin De Bruyne"}, {"31. Ederson"}}, 8, 0, 1, 6, 8, 2},
	{"Real Sociedad", "Imanol Alguasil", 1892, {{"1. Martin Dubravka"}, {"2. Kieran Trippier"}, {"3. Paul Dummett"}, {"4. Sven Botman"}, {"5. Fabian Schar"}, {"6. Jamaal Lascelles"}, {"7. Joelinton"}, {"9. Callum Wilson"}, {"10. Allan Saint - Maximin"}, {"11. Matt Ritchie"}, {"12. Jamal Lewis"}}, 4, 0, 1, 6, 0, 2},
	{"Atletico Madrid", "Diego Simeone", 1878, {{"1. David De Gea"}, {"6. Martinez"}, {"8. Fernandes"}, {"9. Martial"}, {"10. Rashford"}, {"14. Eriksen"}, {"18. Casemiro"}, {"19. Varane"}, {"21. Antony"}, {"23. Shaw"}, {"29. Wan-Bissaka"}}, 20, 3, 2, 12, 5, 2},
	{"Villarreal", "Kike Settien", 1882, {{"1. Hugo Lloris"}, {"4. Oliver Skipp"}, {"5. Emile Hojbjerg"}, {"6. Davinson Sanchez"}, {"7. Son Heung - Min"}, {"9. Richarlison"}, {"10. Harry Kane"}, {"12. Emerson Royal"}, {"14. Ivan Perisic"}, {"15. Eric Dier"}, {"16. Arnaut Danjuma"}}, 2, 0, 3, 8, 4, 2},
	{"Real Betis", "Manuel Pellegrini", 1901, {{"1. Robert Sanchez"}, {"2. Tariq Lamptey"} , {"4. Adam Webster"} , {"5. Lewis Dunk" }, {"6. Levi Colwill"} , {"7. Solly March"} , {"10. Alexis Mac Allister"} , {"13. Pascal Gros" }, {"14. Adam Lallana" }, {"15. Jakub Moder"} , {"18. Danny Welbeck"} }, 0, 0, 0, 0, 0, 2},
	{"Atletico Bilbao", "Ernesto Valverde", 1879, {{"1. Marek Rodak"}, {"2. Kenny Tete"}, {"3. Layvin Kurzawa"}, {"4. Tosin Adarabioyo"}, {"5. Shane Duffy"}, {"6. Harrison Reed"}, {"7. Neeskens Kebano"}, {"8. Harry Wilson"}, {"9. Aleksandar Mitrovic"}, {"10. Tom Cairney"}, {"11. Manor Solomon"}}, 0, 0, 0, 0, 0, 2},
	{"Rayo Vallecano", "Iraola Andoni", 1889, {{"1. David Raya"}, {"2. Aaron Hickey"}, {"3. Rico Henry"}, {"5. Ethan Pinnock"}, {"6. Christian Norgaard"}, {"8. Mathias Jensen"}, {"9. Kevin Schade"}, {"10. Josh Dasilva"}, {"11. Yoane Wissa"}, {"13. Mathias Jorgensen"}, {"14. Saman Ghoddos"}}, 0, 0, 0, 0, 0, 2},
	{"Osasuna", "Arrasate Hagoba", 1892, {{"1. Alisson Becker"}, {"2. Joe Gomez"}, {"3. Fabinho"}, {"4. Virgil van Dijk"}, {"5. Ibrahima Konate"}, {"6. Thiago Alcantara"}, {"7. James Milner"}, {"8. Naby Keita"}, {"9. Roberto Firmino"}, {"11. Mohamed Salah"}, {"27. Darwin Nunez"}}, 19, 6, 3, 8, 9, 2},
	{"Mallorka", "Xavier Agirre", 1905, {{"1. Kepa Arrizabalaga"}, {"4. Benoit Badiashile"}, {"5. Enzo Fernandez"}, {"6. Thiago Silva"}, {"7. NGolo Kante"}, {"8. Mateo Kovacic"}, {"9. Pierre - Emerick Aubameyang"}, {"10. Christian Pulisic"}, {"11. Joao Felix"}, {"12. Ruben Loftus - Cheek"}, {"19. Mason Mount"}}, 6, 2, 4, 8, 5, 2},
	{"Selta", "Carvalial Carlos", 1874, {{"1. Emiliano Martinez"}, {"2. Matty Cash"}, {"3. Diego Carlos"}, {"4.Ezri Konsa"}, {"5. Tyrone Mings"}, {"6. Douglas Luiz"}, {"7. John McGinn"}, {"9. Bertrand Traore"}, {"10. Emiliano Buendia"}, {"11. Ollie Watkins"}, {"12. Jed Steer"}}, 7, 1, 0, 7, 5, 2},
	{"Almeria", "Rubi Hoan", 1905, {{"2. Joel Ward"}, {"3. Tyrick Mitchell"}, {"4. Luka Milivojevic"}, {"5. James Tomkins"}, {"6. Marc Guehi"}, {"7. Michael Olise"}, {"9. Jordan Ayew"}, {"10. Eberechi Eze"}, {"11. Wilfried Zaha"}, {"13. Vicente Guaita"}, {"14. Jean - Philippe Mateta"}}, 0, 0, 0, 0, 0, 2},
	{"Jirona", "Micel", 1865, {{"1. Dean Henderson"}, {"2. Giulian Biancone"}, {"3. Steve Cook"}, {"4. Joe Worrall"}, {"5. Orel Mangala"}, {"6. Jonjo Shelvey"}, {"7. Neco Williams"}, {"8. Jack Colback"}, {"9. Taiwo Awoniyi"}, {"10. Morgan Gibbs - White"}, {"11. Jesse Lingard"}}, 1, 2, 0, 2, 4, 2},
	{"Sevilla", "Horhe Sampaoli", 1884, {{"1. Danny Ward"}, {"2. James Justin"}, {"3. Wout Faes"}, {"4. Caglar Soyuncu"}, {"5. Ryan Bertrand"}, {"6. Jonny Evans"}, {"7. Harvey Barnes"}, {"8. Youri Tielemans"}, {"9. Jamie Vardy"}, {"10. James Maddison"}, {"12. Alex Smithies"}}, 1, 0, 0, 1, 3, 2},
	{"Espanol", "Diego Martines", 1919,  {{"1. Illan Meslier"}, {"2. Luke Ayling"}, {"3. Junior Firpo"}, {"4. Adam Forshaw"}, {"5. Robin Koch"}, {"6. Liam Cooper"}, {"7. Brenden Aaronson"}, {"8. Marc Roca"}, {"9. Patrick Bamford"}, {"10. Crysencio Summerville"}, {"11. Jack Harrison"}}, 3, 0, 2, 1, 1, 2},
	{"Valencia", "Voro", 1895, {{"1. Lukasz Fabianski"}, {"2. Ben Johnson"}, {"3. Aaron Cresswell"}, {"4. Kurt Zouma"}, {"5. Vladimir Coufal"}, {"7. Gianluca Scamacca"}, {"8. Michail Antonio"}, {"9. Manuel Lanzini"}, {"10. Lucas Paqueta"}, {"11. Flynn Downes"}, {"12. Alphonse Areola"}}, 0, 0, 0, 3, 0, 2},
	{"Real Valladolid", "Paceta", 1877, {{"1. Jose Sa"}, {"3. Rayan Ait - Nouri"}, {"4. Nathan Collins"}, {"5. Mario Lemina"}, {"6. Boubacar Traore"}, {"7. Pedro Neto"},{ "8. Ruben Neves"}, {"9. Raul Jimenez"}, {"10. Daniel Podence"}, {"11. Hwang Hee - Chan"}, {"12. Matheus Cunha"}}, 3, 0, 0, 4, 2, 2},
	{"Cadis", "Sergio", 1899, {{"1. Mark Travers"}, {"2. Ryan Fredericks"}, {"3. Jack Stephens"}, {"4. Lewis Cook"}, {"5. Lloyd Kelly"}, {"6. Chris Mepham"}, {"7. David Brooks"}, {"8. Jefferson Lerma"}, {"9. Dominic Solanke"}, {"10. Ryan Christie"}, {"11. Dango Ouattara"}}, 0, 0, 0, 0, 0, 2},
	{"Getaphe", "Kike Flores", 1878, {{"1. Jordan Pickford"}, {"2. James Tarkowski"}, {"3. Nathan Patterson"}, {"4. Mason Holgate"}, {"5. Michael Keane"}, {"7. Dwight McNeil"}, {"8. Amadou Onana"}, {"9. Dominic Calvert - Lewin"}, {"11. Yerry Mina"}, {"13. Andros Townsend"}, {"37. James Garner"}}, 9, 0, 1, 5, 0, 2},
	{"Elche", "Pablo Macin", 1885, {{"1. Alex McCarthy"}, {"2. Kyle Walker - Peters"}, {"3. Ainsley Maitland - Niles"}, {"4. Lyanco"}, {"6. Duje Caleta - Car"}, {"7. Joe Aribo"}, {"8. James Ward - Prowse"}, {"9. Adam Armstrong"}, {"10. Che Adams"}, {"11. Mislav Orsic"}, {"32. Theo Walcott"}}, 0, 0, 0, 1, 0, 2}
};

Team SerieA[20] =
{
	{"Napoli", "Lucano Spalletti", 1886, { {"1. Ramsdale"}, {"4. White"}, {"5. Partey"}, {"6. Gabriel"}, {"7. Saka"}, {"8. Odegaard"}, {"9. Jesus"}, {"11. Martinelly"}, {"12. Saliba"}, {"34. Xhaka"}, {"35. Zinchenko"} }, 13, 0, 2, 14, 2, 3},
	{"Inter", "Simone Indzagi", 1880, { {"2. Kyle Walker"}, {"3. Ruben Dias"}, {"5. John Stones"}, {"6. Nathan Ake"}, {"8. Ilkay Gundogan"}, {"9. Erling Haaland"}, {"10. Jack Grealish"}, {"14. Aymeric Laporte"}, {"16. Rodri"}, {"17. Kevin De Bruyne"}, {"31. Ederson"}}, 8, 0, 1, 6, 8, 3},
	{"Roma", "Jose Mourinho", 1892, {{"1. Martin Dubravka"}, {"2. Kieran Trippier"}, {"3. Paul Dummett"}, {"4. Sven Botman"}, {"5. Fabian Schar"}, {"6. Jamaal Lascelles"}, {"7. Joelinton"}, {"9. Callum Wilson"}, {"10. Allan Saint - Maximin"}, {"11. Matt Ritchie"}, {"12. Jamal Lewis"}}, 4, 0, 1, 6, 0, 3},
	{"Lazio", "Maurizzio Sarri", 1878, {{"1. David De Gea"}, {"6. Martinez"}, {"8. Fernandes"}, {"9. Martial"}, {"10. Rashford"}, {"14. Eriksen"}, {"18. Casemiro"}, {"19. Varane"}, {"21. Antony"}, {"23. Shaw"}, {"29. Wan-Bissaka"}}, 20, 3, 2, 12, 5, 3},
	{"Milan", "Stephano Pioli", 1882, {{"1. Hugo Lloris"}, {"4. Oliver Skipp"}, {"5. Emile Hojbjerg"}, {"6. Davinson Sanchez"}, {"7. Son Heung - Min"}, {"9. Richarlison"}, {"10. Harry Kane"}, {"12. Emerson Royal"}, {"14. Ivan Perisic"}, {"15. Eric Dier"}, {"16. Arnaut Danjuma"}}, 2, 0, 3, 8, 4, 3},
	{"Atalanta", "Jianpierro Gasperini", 1901, {{"1. Robert Sanchez"}, {"2. Tariq Lamptey"} , {"4. Adam Webster"} , {"5. Lewis Dunk" }, {"6. Levi Colwill"} , {"7. Solly March"} , {"10. Alexis Mac Allister"} , {"13. Pascal Gros" }, {"14. Adam Lallana" }, {"15. Jakub Moder"} , {"18. Danny Welbeck"} }, 0, 0, 0, 0, 0, 3},
	{"Udineze", "Andrea Sottil", 1879, {{"1. Marek Rodak"}, {"2. Kenny Tete"}, {"3. Layvin Kurzawa"}, {"4. Tosin Adarabioyo"}, {"5. Shane Duffy"}, {"6. Harrison Reed"}, {"7. Neeskens Kebano"}, {"8. Harry Wilson"}, {"9. Aleksandar Mitrovic"}, {"10. Tom Cairney"}, {"11. Manor Solomon"}}, 0, 0, 0, 0, 0, 3},
	{"Torino", "Ivan Urich", 1889, {{"1. David Raya"}, {"2. Aaron Hickey"}, {"3. Rico Henry"}, {"5. Ethan Pinnock"}, {"6. Christian Norgaard"}, {"8. Mathias Jensen"}, {"9. Kevin Schade"}, {"10. Josh Dasilva"}, {"11. Yoane Wissa"}, {"13. Mathias Jorgensen"}, {"14. Saman Ghoddos"}}, 0, 0, 0, 0, 0, 3},
	{"Bolognha", "Tiago Motta", 1892, {{"1. Alisson Becker"}, {"2. Joe Gomez"}, {"3. Fabinho"}, {"4. Virgil van Dijk"}, {"5. Ibrahima Konate"}, {"6. Thiago Alcantara"}, {"7. James Milner"}, {"8. Naby Keita"}, {"9. Roberto Firmino"}, {"11. Mohamed Salah"}, {"27. Darwin Nunez"}}, 19, 6, 3, 8, 9, 3},
	{"Empoli", "Paolo Dzanetti", 1905, {{"1. Kepa Arrizabalaga"}, {"4. Benoit Badiashile"}, {"5. Enzo Fernandez"}, {"6. Thiago Silva"}, {"7. NGolo Kante"}, {"8. Mateo Kovacic"}, {"9. Pierre - Emerick Aubameyang"}, {"10. Christian Pulisic"}, {"11. Joao Felix"}, {"12. Ruben Loftus - Cheek"}, {"19. Mason Mount"}}, 6, 2, 4, 8, 5, 3},
	{"Monza", "Raphaelle Palladino", 1874, {{"1. Emiliano Martinez"}, {"2. Matty Cash"}, {"3. Diego Carlos"}, {"4.Ezri Konsa"}, {"5. Tyrone Mings"}, {"6. Douglas Luiz"}, {"7. John McGinn"}, {"9. Bertrand Traore"}, {"10. Emiliano Buendia"}, {"11. Ollie Watkins"}, {"12. Jed Steer"}}, 7, 1, 0, 7, 5, 3},
	{"Fiorentina", "Vincenzo Italiano", 1905, {{"2. Joel Ward"}, {"3. Tyrick Mitchell"}, {"4. Luka Milivojevic"}, {"5. James Tomkins"}, {"6. Marc Guehi"}, {"7. Michael Olise"}, {"9. Jordan Ayew"}, {"10. Eberechi Eze"}, {"11. Wilfried Zaha"}, {"13. Vicente Guaita"}, {"14. Jean - Philippe Mateta"}}, 0, 0, 0, 0, 0, 3},
	{"Juventus", "Massimiliano Allegri", 1865, {{"1. Dean Henderson"}, {"2. Giulian Biancone"}, {"3. Steve Cook"}, {"4. Joe Worrall"}, {"5. Orel Mangala"}, {"6. Jonjo Shelvey"}, {"7. Neco Williams"}, {"8. Jack Colback"}, {"9. Taiwo Awoniyi"}, {"10. Morgan Gibbs - White"}, {"11. Jesse Lingard"}}, 1, 2, 0, 2, 4, 3},
	{"Lecce", "Marko Baroni", 1884, {{"1. Danny Ward"}, {"2. James Justin"}, {"3. Wout Faes"}, {"4. Caglar Soyuncu"}, {"5. Ryan Bertrand"}, {"6. Jonny Evans"}, {"7. Harvey Barnes"}, {"8. Youri Tielemans"}, {"9. Jamie Vardy"}, {"10. James Maddison"}, {"12. Alex Smithies"}}, 1, 0, 0, 1, 3, 3},
	{"Sassuolo", "Alessio Dionizi", 1919,  {{"1. Illan Meslier"}, {"2. Luke Ayling"}, {"3. Junior Firpo"}, {"4. Adam Forshaw"}, {"5. Robin Koch"}, {"6. Liam Cooper"}, {"7. Brenden Aaronson"}, {"8. Marc Roca"}, {"9. Patrick Bamford"}, {"10. Crysencio Summerville"}, {"11. Jack Harrison"}}, 3, 0, 2, 1, 1, 3},
	{"Salernitana", "Davide Nikola", 1895, {{"1. Lukasz Fabianski"}, {"2. Ben Johnson"}, {"3. Aaron Cresswell"}, {"4. Kurt Zouma"}, {"5. Vladimir Coufal"}, {"7. Gianluca Scamacca"}, {"8. Michail Antonio"}, {"9. Manuel Lanzini"}, {"10. Lucas Paqueta"}, {"11. Flynn Downes"}, {"12. Alphonse Areola"}}, 0, 0, 0, 3, 0, 3},
	{"Spezia", "Luka Gotti", 1877, {{"1. Jose Sa"}, {"3. Rayan Ait - Nouri"}, {"4. Nathan Collins"}, {"5. Mario Lemina"}, {"6. Boubacar Traore"}, {"7. Pedro Neto"},{ "8. Ruben Neves"}, {"9. Raul Jimenez"}, {"10. Daniel Podence"}, {"11. Hwang Hee - Chan"}, {"12. Matheus Cunha"}}, 3, 0, 0, 4, 2, 3},
	{"Verona", "Marko Zaffaroni", 1899, {{"1. Mark Travers"}, {"2. Ryan Fredericks"}, {"3. Jack Stephens"}, {"4. Lewis Cook"}, {"5. Lloyd Kelly"}, {"6. Chris Mepham"}, {"7. David Brooks"}, {"8. Jefferson Lerma"}, {"9. Dominic Solanke"}, {"10. Ryan Christie"}, {"11. Dango Ouattara"}}, 0, 0, 0, 0, 0},
	{"Sampdoria", "Dejan Stankovich", 1878, {{"1. Jordan Pickford"}, {"2. James Tarkowski"}, {"3. Nathan Patterson"}, {"4. Mason Holgate"}, {"5. Michael Keane"}, {"7. Dwight McNeil"}, {"8. Amadou Onana"}, {"9. Dominic Calvert - Lewin"}, {"11. Yerry Mina"}, {"13. Andros Townsend"}, {"37. James Garner"}}, 9, 0, 1, 5, 0, 3},
	{"Cremoneze", "Davide Ballardini", 1885, {{"1. Alex McCarthy"}, {"2. Kyle Walker - Peters"}, {"3. Ainsley Maitland - Niles"}, {"4. Lyanco"}, {"6. Duje Caleta - Car"}, {"7. Joe Aribo"}, {"8. James Ward - Prowse"}, {"9. Adam Armstrong"}, {"10. Che Adams"}, {"11. Mislav Orsic"}, {"32. Theo Walcott"}}, 0, 0, 0, 1, 0, 3}
};

Team Bundesliga[18] =
{
	{"Bayern Munich", "Julian Nagelsman", 1886, { {"1. Ramsdale"}, {"4. White"}, {"5. Partey"}, {"6. Gabriel"}, {"7. Saka"}, {"8. Odegaard"}, {"9. Jesus"}, {"11. Martinelly"}, {"12. Saliba"}, {"34. Xhaka"}, {"35. Zinchenko"} }, 13, 0, 2, 14, 2, 4},
	{"Borussia Dortmund", "Edin Terzich", 1880, { {"2. Kyle Walker"}, {"3. Ruben Dias"}, {"5. John Stones"}, {"6. Nathan Ake"}, {"8. Ilkay Gundogan"}, {"9. Erling Haaland"}, {"10. Jack Grealish"}, {"14. Aymeric Laporte"}, {"16. Rodri"}, {"17. Kevin De Bruyne"}, {"31. Ederson"}}, 8, 0, 1, 6, 8, 4},
	{"Union Berlin", "Urs Fisher", 1892, {{"1. Martin Dubravka"}, {"2. Kieran Trippier"}, {"3. Paul Dummett"}, {"4. Sven Botman"}, {"5. Fabian Schar"}, {"6. Jamaal Lascelles"}, {"7. Joelinton"}, {"9. Callum Wilson"}, {"10. Allan Saint - Maximin"}, {"11. Matt Ritchie"}, {"12. Jamal Lewis"}}, 4, 0, 1, 6, 0, 4},
	{"RB Leipzig", "Marco Rose", 1878, {{"1. David De Gea"}, {"6. Martinez"}, {"8. Fernandes"}, {"9. Martial"}, {"10. Rashford"}, {"14. Eriksen"}, {"18. Casemiro"}, {"19. Varane"}, {"21. Antony"}, {"23. Shaw"}, {"29. Wan-Bissaka"}}, 20, 3, 2, 12, 5},
	{"Eintracht Frankfurt", "Oliver Glasner", 1882, {{"1. Hugo Lloris"}, {"4. Oliver Skipp"}, {"5. Emile Hojbjerg"}, {"6. Davinson Sanchez"}, {"7. Son Heung - Min"}, {"9. Richarlison"}, {"10. Harry Kane"}, {"12. Emerson Royal"}, {"14. Ivan Perisic"}, {"15. Eric Dier"}, {"16. Arnaut Danjuma"}}, 2, 0, 3, 8, 4, 4},
	{"Frieburg", "Christian Shtreich", 1901, {{"1. Robert Sanchez"}, {"2. Tariq Lamptey"} , {"4. Adam Webster"} , {"5. Lewis Dunk" }, {"6. Levi Colwill"} , {"7. Solly March"} , {"10. Alexis Mac Allister"} , {"13. Pascal Gros" }, {"14. Adam Lallana" }, {"15. Jakub Moder"} , {"18. Danny Welbeck"} }, 0, 0, 0, 0, 0, 4},
	{"Wolfsburg", "Niko Kovac", 1879, {{"1. Marek Rodak"}, {"2. Kenny Tete"}, {"3. Layvin Kurzawa"}, {"4. Tosin Adarabioyo"}, {"5. Shane Duffy"}, {"6. Harrison Reed"}, {"7. Neeskens Kebano"}, {"8. Harry Wilson"}, {"9. Aleksandar Mitrovic"}, {"10. Tom Cairney"}, {"11. Manor Solomon"}}, 0, 0, 0, 0, 0, 4},
	{"Borussia Monchengladbach", "Daniel Farke", 1889, {{"1. David Raya"}, {"2. Aaron Hickey"}, {"3. Rico Henry"}, {"5. Ethan Pinnock"}, {"6. Christian Norgaard"}, {"8. Mathias Jensen"}, {"9. Kevin Schade"}, {"10. Josh Dasilva"}, {"11. Yoane Wissa"}, {"13. Mathias Jorgensen"}, {"14. Saman Ghoddos"}}, 0, 0, 0, 0, 0, 4},
	{"Bayer Leverkusen", "Xabi Alonso", 1892, {{"1. Alisson Becker"}, {"2. Joe Gomez"}, {"3. Fabinho"}, {"4. Virgil van Dijk"}, {"5. Ibrahima Konate"}, {"6. Thiago Alcantara"}, {"7. James Milner"}, {"8. Naby Keita"}, {"9. Roberto Firmino"}, {"11. Mohamed Salah"}, {"27. Darwin Nunez"}}, 19, 6, 3, 8, 9, 4},
	{"Verder Bremen", "Ole Verner", 1905, {{"1. Kepa Arrizabalaga"}, {"4. Benoit Badiashile"}, {"5. Enzo Fernandez"}, {"6. Thiago Silva"}, {"7. NGolo Kante"}, {"8. Mateo Kovacic"}, {"9. Pierre - Emerick Aubameyang"}, {"10. Christian Pulisic"}, {"11. Joao Felix"}, {"12. Ruben Loftus - Cheek"}, {"19. Mason Mount"}}, 6, 2, 4, 8, 5, 4},
	{"Koln", "Stephen Baumgart", 1874, {{"1. Emiliano Martinez"}, {"2. Matty Cash"}, {"3. Diego Carlos"}, {"4.Ezri Konsa"}, {"5. Tyrone Mings"}, {"6. Douglas Luiz"}, {"7. John McGinn"}, {"9. Bertrand Traore"}, {"10. Emiliano Buendia"}, {"11. Ollie Watkins"}, {"12. Jed Steer"}}, 7, 1, 0, 7, 5, 4},
	{"Mainz", "Bo Svensson", 1905, {{"2. Joel Ward"}, {"3. Tyrick Mitchell"}, {"4. Luka Milivojevic"}, {"5. James Tomkins"}, {"6. Marc Guehi"}, {"7. Michael Olise"}, {"9. Jordan Ayew"}, {"10. Eberechi Eze"}, {"11. Wilfried Zaha"}, {"13. Vicente Guaita"}, {"14. Jean - Philippe Mateta"}}, 0, 0, 0, 0, 0, 4},
	{"Augsburg", "Enriko Massen", 1865, {{"1. Dean Henderson"}, {"2. Giulian Biancone"}, {"3. Steve Cook"}, {"4. Joe Worrall"}, {"5. Orel Mangala"}, {"6. Jonjo Shelvey"}, {"7. Neco Williams"}, {"8. Jack Colback"}, {"9. Taiwo Awoniyi"}, {"10. Morgan Gibbs - White"}, {"11. Jesse Lingard"}}, 1, 2, 0, 2, 4, 4},
	{"Hoffenheim", "Andre Braitenraiter", 1884, {{"1. Danny Ward"}, {"2. James Justin"}, {"3. Wout Faes"}, {"4. Caglar Soyuncu"}, {"5. Ryan Bertrand"}, {"6. Jonny Evans"}, {"7. Harvey Barnes"}, {"8. Youri Tielemans"}, {"9. Jamie Vardy"}, {"10. James Maddison"}, {"12. Alex Smithies"}}, 1, 0, 0, 1, 3, 4},
	{"Bochum", "Thomas Letch", 1919,  {{"1. Illan Meslier"}, {"2. Luke Ayling"}, {"3. Junior Firpo"}, {"4. Adam Forshaw"}, {"5. Robin Koch"}, {"6. Liam Cooper"}, {"7. Brenden Aaronson"}, {"8. Marc Roca"}, {"9. Patrick Bamford"}, {"10. Crysencio Summerville"}, {"11. Jack Harrison"}}, 3, 0, 2, 1, 1, 4},
	{"Stuttgart", "Bruno Labbadia", 1895, {{"1. Lukasz Fabianski"}, {"2. Ben Johnson"}, {"3. Aaron Cresswell"}, {"4. Kurt Zouma"}, {"5. Vladimir Coufal"}, {"7. Gianluca Scamacca"}, {"8. Michail Antonio"}, {"9. Manuel Lanzini"}, {"10. Lucas Paqueta"}, {"11. Flynn Downes"}, {"12. Alphonse Areola"}}, 0, 0, 0, 3, 0, 4},
	{"Hertha", "Sandro Schwarz", 1877, {{"1. Jose Sa"}, {"3. Rayan Ait - Nouri"}, {"4. Nathan Collins"}, {"5. Mario Lemina"}, {"6. Boubacar Traore"}, {"7. Pedro Neto"},{ "8. Ruben Neves"}, {"9. Raul Jimenez"}, {"10. Daniel Podence"}, {"11. Hwang Hee - Chan"}, {"12. Matheus Cunha"}}, 3, 0, 0, 4, 2, 4},
	{"Shalke", "Thomas Reis", 1885, {{"1. Alex McCarthy"}, {"2. Kyle Walker - Peters"}, {"3. Ainsley Maitland - Niles"}, {"4. Lyanco"}, {"6. Duje Caleta - Car"}, {"7. Joe Aribo"}, {"8. James Ward - Prowse"}, {"9. Adam Armstrong"}, {"10. Che Adams"}, {"11. Mislav Orsic"}, {"32. Theo Walcott"}}, 0, 0, 0, 1, 0, 4}
};

Team Ligue1[20] =
{
	{"PSG", "Cristoph Galte", 1886, { {"1. Ramsdale"}, {"4. White"}, {"5. Partey"}, {"6. Gabriel"}, {"7. Saka"}, {"8. Odegaard"}, {"9. Jesus"}, {"11. Martinelly"}, {"12. Saliba"}, {"34. Xhaka"}, {"35. Zinchenko"} }, 13, 0, 2, 14, 2, 5},
	{"Olimpique Marcel", "Igor Tudor", 1880, { {"2. Kyle Walker"}, {"3. Ruben Dias"}, {"5. John Stones"}, {"6. Nathan Ake"}, {"8. Ilkay Gundogan"}, {"9. Erling Haaland"}, {"10. Jack Grealish"}, {"14. Aymeric Laporte"}, {"16. Rodri"}, {"17. Kevin De Bruyne"}, {"31. Ederson"}}, 8, 0, 1, 6, 8, 5},
	{"Lens", "Frank Haise", 1892, {{"1. Martin Dubravka"}, {"2. Kieran Trippier"}, {"3. Paul Dummett"}, {"4. Sven Botman"}, {"5. Fabian Schar"}, {"6. Jamaal Lascelles"}, {"7. Joelinton"}, {"9. Callum Wilson"}, {"10. Allan Saint - Maximin"}, {"11. Matt Ritchie"}, {"12. Jamal Lewis"}}, 4, 0, 1, 6, 0, 5},
	{"Monaco", "Philipp Kleman", 1878, {{"1. David De Gea"}, {"6. Martinez"}, {"8. Fernandes"}, {"9. Martial"}, {"10. Rashford"}, {"14. Eriksen"}, {"18. Casemiro"}, {"19. Varane"}, {"21. Antony"}, {"23. Shaw"}, {"29. Wan-Bissaka"}}, 20, 3, 2, 12, 5, 5},
	{"Renn", "Bruno Genesio", 1882, {{"1. Hugo Lloris"}, {"4. Oliver Skipp"}, {"5. Emile Hojbjerg"}, {"6. Davinson Sanchez"}, {"7. Son Heung - Min"}, {"9. Richarlison"}, {"10. Harry Kane"}, {"12. Emerson Royal"}, {"14. Ivan Perisic"}, {"15. Eric Dier"}, {"16. Arnaut Danjuma"}}, 2, 0, 3, 8, 4, 5},
	{"Lille OSC", "Paulu Fonseka", 1901, {{"1. Robert Sanchez"}, {"2. Tariq Lamptey"} , {"4. Adam Webster"} , {"5. Lewis Dunk" }, {"6. Levi Colwill"} , {"7. Solly March"} , {"10. Alexis Mac Allister"} , {"13. Pascal Gros" }, {"14. Adam Lallana" }, {"15. Jakub Moder"} , {"18. Danny Welbeck"} }, 0, 0, 0, 0, 0, 5},
	{"Lorient", "Regis Le Bris", 1879, {{"1. Marek Rodak"}, {"2. Kenny Tete"}, {"3. Layvin Kurzawa"}, {"4. Tosin Adarabioyo"}, {"5. Shane Duffy"}, {"6. Harrison Reed"}, {"7. Neeskens Kebano"}, {"8. Harry Wilson"}, {"9. Aleksandar Mitrovic"}, {"10. Tom Cairney"}, {"11. Manor Solomon"}}, 0, 0, 0, 0, 0, 5},
	{"Olimpiaue Lyonnais", "Loran Blanc", 1889, {{"1. David Raya"}, {"2. Aaron Hickey"}, {"3. Rico Henry"}, {"5. Ethan Pinnock"}, {"6. Christian Norgaard"}, {"8. Mathias Jensen"}, {"9. Kevin Schade"}, {"10. Josh Dasilva"}, {"11. Yoane Wissa"}, {"13. Mathias Jorgensen"}, {"14. Saman Ghoddos"}}, 0, 0, 0, 0, 0, 5},
	{"OGC Nice", "Didie Digar", 1892, {{"1. Alisson Becker"}, {"2. Joe Gomez"}, {"3. Fabinho"}, {"4. Virgil van Dijk"}, {"5. Ibrahima Konate"}, {"6. Thiago Alcantara"}, {"7. James Milner"}, {"8. Naby Keita"}, {"9. Roberto Firmino"}, {"11. Mohamed Salah"}, {"27. Darwin Nunez"}}, 19, 6, 3, 8, 9, 5},
	{"Clermont", "Pascal Gastien", 1905, {{"1. Kepa Arrizabalaga"}, {"4. Benoit Badiashile"}, {"5. Enzo Fernandez"}, {"6. Thiago Silva"}, {"7. NGolo Kante"}, {"8. Mateo Kovacic"}, {"9. Pierre - Emerick Aubameyang"}, {"10. Christian Pulisic"}, {"11. Joao Felix"}, {"12. Ruben Loftus - Cheek"}, {"19. Mason Mount"}}, 6, 2, 4, 8, 5, 5},
	{"Stade Reims", "William Still", 1874, {{"1. Emiliano Martinez"}, {"2. Matty Cash"}, {"3. Diego Carlos"}, {"4.Ezri Konsa"}, {"5. Tyrone Mings"}, {"6. Douglas Luiz"}, {"7. John McGinn"}, {"9. Bertrand Traore"}, {"10. Emiliano Buendia"}, {"11. Ollie Watkins"}, {"12. Jed Steer"}}, 7, 1, 0, 7, 5, 5},
	{"Toulouse", "Philipp Montanie", 1905, {{"2. Joel Ward"}, {"3. Tyrick Mitchell"}, {"4. Luka Milivojevic"}, {"5. James Tomkins"}, {"6. Marc Guehi"}, {"7. Michael Olise"}, {"9. Jordan Ayew"}, {"10. Eberechi Eze"}, {"11. Wilfried Zaha"}, {"13. Vicente Guaita"}, {"14. Jean - Philippe Mateta"}}, 0, 0, 0, 0, 0, 5},
	{"Nantes", "Antuan Kombuare", 1865, {{"1. Dean Henderson"}, {"2. Giulian Biancone"}, {"3. Steve Cook"}, {"4. Joe Worrall"}, {"5. Orel Mangala"}, {"6. Jonjo Shelvey"}, {"7. Neco Williams"}, {"8. Jack Colback"}, {"9. Taiwo Awoniyi"}, {"10. Morgan Gibbs - White"}, {"11. Jesse Lingard"}}, 1, 2, 0, 2, 4, 5},
	{"Montpellier", "Romen Pito", 1884, {{"1. Danny Ward"}, {"2. James Justin"}, {"3. Wout Faes"}, {"4. Caglar Soyuncu"}, {"5. Ryan Bertrand"}, {"6. Jonny Evans"}, {"7. Harvey Barnes"}, {"8. Youri Tielemans"}, {"9. Jamie Vardy"}, {"10. James Maddison"}, {"12. Alex Smithies"}}, 1, 0, 0, 1, 3, 5},
	{"Brest", "Eric Roy", 1919,  {{"1. Illan Meslier"}, {"2. Luke Ayling"}, {"3. Junior Firpo"}, {"4. Adam Forshaw"}, {"5. Robin Koch"}, {"6. Liam Cooper"}, {"7. Brenden Aaronson"}, {"8. Marc Roca"}, {"9. Patrick Bamford"}, {"10. Crysencio Summerville"}, {"11. Jack Harrison"}}, 3, 0, 2, 1, 1, 5},
	{"Troyes", "Patrick Kisnorbo", 1895, {{"1. Lukasz Fabianski"}, {"2. Ben Johnson"}, {"3. Aaron Cresswell"}, {"4. Kurt Zouma"}, {"5. Vladimir Coufal"}, {"7. Gianluca Scamacca"}, {"8. Michail Antonio"}, {"9. Manuel Lanzini"}, {"10. Lucas Paqueta"}, {"11. Flynn Downes"}, {"12. Alphonse Areola"}}, 0, 0, 0, 3, 0, 5},
	{"AC Ajaccio", "Olivier Pantaloni", 1877, {{"1. Jose Sa"}, {"3. Rayan Ait - Nouri"}, {"4. Nathan Collins"}, {"5. Mario Lemina"}, {"6. Boubacar Traore"}, {"7. Pedro Neto"},{ "8. Ruben Neves"}, {"9. Raul Jimenez"}, {"10. Daniel Podence"}, {"11. Hwang Hee - Chan"}, {"12. Matheus Cunha"}}, 3, 0, 0, 4, 2, 5},
	{"Strasbourg", "Matier Le Scorne", 1899, {{"1. Mark Travers"}, {"2. Ryan Fredericks"}, {"3. Jack Stephens"}, {"4. Lewis Cook"}, {"5. Lloyd Kelly"}, {"6. Chris Mepham"}, {"7. David Brooks"}, {"8. Jefferson Lerma"}, {"9. Dominic Solanke"}, {"10. Ryan Christie"}, {"11. Dango Ouattara"}}, 0, 0, 0, 0, 0, 5},
	{"Auxerre", "Cristoph Pelisie", 1878, {{"1. Jordan Pickford"}, {"2. James Tarkowski"}, {"3. Nathan Patterson"}, {"4. Mason Holgate"}, {"5. Michael Keane"}, {"7. Dwight McNeil"}, {"8. Amadou Onana"}, {"9. Dominic Calvert - Lewin"}, {"11. Yerry Mina"}, {"13. Andros Townsend"}, {"37. James Garner"}}, 9, 0, 1, 5, 0, 5},
	{"Angers", "Abdel Buazama", 1885, {{"1. Alex McCarthy"}, {"2. Kyle Walker - Peters"}, {"3. Ainsley Maitland - Niles"}, {"4. Lyanco"}, {"6. Duje Caleta - Car"}, {"7. Joe Aribo"}, {"8. James Ward - Prowse"}, {"9. Adam Armstrong"}, {"10. Che Adams"}, {"11. Mislav Orsic"}, {"32. Theo Walcott"}}, 0, 0, 0, 1, 0, 5}
};