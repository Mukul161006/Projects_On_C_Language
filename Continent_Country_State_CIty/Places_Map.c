#include <stdio.h>

// Basic Hierarchy structures ki data store krne k liye. 
struct District {
    char name[50];
};

struct State {
    char name[50];
    struct District districts[5];
};

struct Country {
    char name[50];
    struct State states[5];
};

struct Continent {
    char name[50];
    struct Country countries[5];
};

// Generic functions jo hurr baar call kiye jayenge with for loops to print the values or data stored in the structured arrays. 
void print_continents(struct Continent continents[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d. %s\n", i+1, continents[i].name);
    }
}

void print_countries(struct Country countries[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d. %s\n", i+1, countries[i].name);
    }
}

void print_states(struct State states[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d. %s\n", i+1, states[i].name);
    }
}

void print_districts(struct District districts[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d. %s\n", i+1, districts[i].name);
    }
}

// ----------------------------------------------------------- ASIA KA DATASET --------------------------------------------------------------
struct Country asian_countries[5] = {
    {
        "India",
        {
            {"Maharashtra", {{"Mumbai"}, {"Pune"}, {"Nagpur"}, {"Nashik"}, {"Aurangabad"}}},
            {"West Bengal", {{"Kolkata"}, {"Darjeeling"}, {"Howrah"}, {"Siliguri"}, {"Durgapur"}}},
            {"Tamil Nadu", {{"Chennai"}, {"Coimbatore"}, {"Madurai"}, {"Salem"}, {"Tiruchirappalli"}}},
            {"Uttar Pradesh", {{"Lucknow"}, {"Kanpur"}, {"Varanasi"}, {"Agra"}, {"Noida"}}},
            {"Rajasthan", {{"Jaipur"}, {"Udaipur"}, {"Jodhpur"}, {"Kota"}, {"Ajmer"}}}
        }
    },
    {
        "Japan",
        {
            {"Tokyo Prefecture", {{"Shinjuku"}, {"Shibuya"}, {"Akihabara"}, {"Ikebukuro"}, {"Ginza"}}},
            {"Osaka Prefecture", {{"Osaka"}, {"Sakai"}, {"Higashiosaka"}, {"Toyonaka"}, {"Takatsuki"}}},
            {"Kyoto Prefecture", {{"Kyoto"}, {"Uji"}, {"Kameoka"}, {"Maizuru"}, {"Fukuchiyama"}}},
            {"Hokkaido", {{"Sapporo"}, {"Hakodate"}, {"Asahikawa"}, {"Obihiro"}, {"Kushiro"}}},
            {"Fukuoka Prefecture", {{"Fukuoka"}, {"Kitakyushu"}, {"Kurume"}, {"Omuta"}, {"Iizuka"}}}
        }
    },
    {
        "China",
        {
            {"Beijing", {{"Chaoyang"}, {"Haidian"}, {"Dongcheng"}, {"Xicheng"}, {"Fengtai"}}},
            {"Shanghai", {{"Pudong"}, {"Huangpu"}, {"Xuhui"}, {"Jing'an"}, {"Minhang"}}},
            {"Guangdong", {{"Guangzhou"}, {"Shenzhen"}, {"Dongguan"}, {"Foshan"}, {"Zhuhai"}}},
            {"Sichuan", {{"Chengdu"}, {"Mianyang"}, {"Leshan"}, {"Deyang"}, {"Zigong"}}},
            {"Zhejiang", {{"Hangzhou"}, {"Ningbo"}, {"Wenzhou"}, {"Jinhua"}, {"Shaoxing"}}}
        }
    },
    {
        "Vietnam",
        {
            {"Hanoi", {{"Ba Dinh"}, {"Hoan Kiem"}, {"Dong Da"}, {"Hai Ba Trung"}, {"Tay Ho"}}},
            {"Ho Chi Minh City", {{"District 1"}, {"District 3"}, {"District 5"}, {"District 7"}, {"District 9"}}},
            {"Da Nang", {{"Hai Chau"}, {"Thanh Khe"}, {"Son Tra"}, {"Ngu Hanh Son"}, {"Lien Chieu"}}},
            {"Hai Phong", {{"Hong Bang"}, {"Le Chan"}, {"Ngo Quyen"}, {"Kien An"}, {"An Duong"}}},
            {"Can Tho", {{"Ninh Kieu"}, {"Binh Thuy"}, {"Cai Rang"}, {"O Mon"}, {"Phong Dien"}}}
        }
    },
    {
        "Thailand",
        {
            {"Bangkok", {{"Dusit"}, {"Bang Rak"}, {"Chatuchak"}, {"Lat Krabang"}, {"Thonburi"}}},
            {"Chiang Mai", {{"Mueang"}, {"Hang Dong"}, {"San Sai"}, {"Mae Rim"}, {"Doi Saket"}}},
            {"Phuket", {{"Mueang"}, {"Kathu"}, {"Thalang"}, {"Chalong"}, {"Rawai"}}},
            {"Pattaya", {{"Bang Lamung"}, {"Nong Prue"}, {"Na Kluea"}, {"Huai Yai"}, {"Khao Mai Kaew"}}},
            {"Ayutthaya", {{"Phra Nakhon Si"}, {"Bang Pa-in"}, {"Bang Sai"}, {"Uthai"}, {"Wang Noi"}}}
        }
    }
};

// --------------------------------------------------- AFRICA KA DATASET ---------------------------------------------------------------------
struct Country african_countries[5] = {
    {
        "Nigeria",
        {
            {"Lagos State", {{"Lagos"}, {"Ikeja"}, {"Epe"}, {"Badagry"}, {"Ikorodu"}}},
            {"Kano State", {{"Kano"}, {"Wudil"}, {"Bichi"}, {"Rano"}, {"Gaya"}}},
            {"Oyo State", {{"Ibadan"}, {"Ogbomosho"}, {"Oyo"}, {"Iseyin"}, {"Saki"}}},
            {"Rivers State", {{"Port Harcourt"}, {"Bonny"}, {"Opobo"}, {"Degema"}, {"Omoku"}}},
            {"Kaduna State", {{"Kaduna"}, {"Zaria"}, {"Kafanchan"}, {"Birnin Gwari"}, {"Soba"}}}
        }
    },
    {
        "Ethiopia",
        {
            {"Addis Ababa", {{"Bole"}, {"Yeka"}, {"Kirkos"}, {"Nifas Silk"}, {"Arada"}}},
            {"Oromia", {{"Adama"}, {"Jimma"}, {"Shashamane"}, {"Bishoftu"}, {"Ambo"}}},
            {"Amhara", {{"Bahir Dar"}, {"Gondar"}, {"Debre Markos"}, {"Woldiya"}, {"Lalibela"}}},
            {"Tigray", {{"Mekelle"}, {"Adigrat"}, {"Shire"}, {"Axum"}, {"Humera"}}},
            {"Somali Region", {{"Jijiga"}, {"Gode"}, {"Degahabur"}, {"Kebri Dahar"}, {"Wardheer"}}}
        }
    },
    {
        "Egypt",
        {
            {"Cairo Governorate", {{"Cairo"}, {"Helwan"}, {"Nasr City"}, {"Maadi"}, {"Shubra"}}},
            {"Alexandria Governorate", {{"Alexandria"}, {"Montaza"}, {"Borg El Arab"}, {"Abu Qir"}, {"Agami"}}},
            {"Giza Governorate", {{"Giza"}, {"6th of October"}, {"Sheikh Zayed"}, {"Imbaba"}, {"Haram"}}},
            {"Luxor Governorate", {{"Luxor"}, {"Armant"}, {"Esna"}, {"Qurna"}, {"Tiba"}}},
            {"Aswan Governorate", {{"Aswan"}, {"Edfu"}, {"Kom Ombo"}, {"Daraw"}, {"Abu Simbel"}}}
        }
    },
    {
        "DR Congo",
        {
            {"Kinshasa", {{"Gombe"}, {"Kasa-Vubu"}, {"Ngaliema"}, {"Matete"}, {"Lemba"}}},
            {"Katanga", {{"Lubumbashi"}, {"Likasi"}, {"Kolwezi"}, {"Kasumbalesa"}, {"Kipushi"}}},
            {"Kasaï", {{"Kananga"}, {"Tshikapa"}, {"Mweka"}, {"Luebo"}, {"Ilebo"}}},
            {"North Kivu", {{"Goma"}, {"Beni"}, {"Butembo"}, {"Rutshuru"}, {"Masisi"}}},
            {"South Kivu", {{"Bukavu"}, {"Uvira"}, {"Kabare"}, {"Fizi"}, {"Walungu"}}}
        }
    },
    {
        "South Africa",
        {
            {"Gauteng", {{"Johannesburg"}, {"Pretoria"}, {"Soweto"}, {"Benoni"}, {"Krugersdorp"}}},
            {"Western Cape", {{"Cape Town"}, {"Stellenbosch"}, {"Paarl"}, {"George"}, {"Mossel Bay"}}},
            {"KwaZulu-Natal", {{"Durban"}, {"Pietermaritzburg"}, {"Richards Bay"}, {"Newcastle"}, {"Ladysmith"}}},
            {"Eastern Cape", {{"Port Elizabeth"}, {"East London"}, {"Mthatha"}, {"Grahamstown"}, {"Queenstown"}}},
            {"Free State", {{"Bloemfontein"}, {"Welkom"}, {"Kroonstad"}, {"Bethlehem"}, {"Parys"}}}
        }
    }
};

// --------------------------------------------------------- ANTARCTICA KA DATASET ----------------------------------------------------------
struct Country antarctic_countries[5] = {
    {
        "Argentina",
        {
            {"Argentine Antarctica Sector", {{"Marambio Base"}, {"Esperanza Base"}, {"Orcadas Base"}, {"San Martín Base"}, {"Belgrano II Base"}}},
            {"South Orkney Islands", {{"Laurie Island"}, {"Coronation Island"}, {"Signy Island"}, {"Powell Island"}, {"Fredriksen Island"}}},
            {"South Shetland Islands", {{"Deception Island"}, {"King George Island"}, {"Livingston Island"}, {"Elephant Island"}, {"Robert Island"}}},
            {"Palmer Land", {{"James Ross Island"}, {"Snow Hill Island"}, {"Seymour Island"}, {"Dundee Island"}, {"Joinville Island"}}},
            {"Graham Land", {{"Anvers Island"}, {"Brabant Island"}, {"Lemaire Channel"}, {"Wilhelmina Bay"}, {"Paradise Harbor"}}}
        }
    },
    {
        "Australia",
        {
            {"Australian Antarctic Territory", {{"Mawson Station"}, {"Davis Station"}, {"Casey Station"}, {"Macquarie Island"}, {"Wilkes Station"}}},
            {"Enderby Land", {{"Molodezhnaya"}, {"Alasheyev Bight"}, {"Cape Batterbee"}, {"Cape Borley"}, {"Cape Close"}}},
            {"Mac Robertson Land", {{"Lambert Glacier"}, {"Prince Charles Mountains"}, {"Mount Menzies"}, {"Mount Mawson"}, {"Mount Hordern"}}},
            {"Wilkes Land", {{"Totten Glacier"}, {"Dome C"}, {"Cape Denison"}, {"Mount Brown"}, {"Mount Casey"}}},
            {"Princess Elizabeth Land", {{"Vestfold Hills"}, {"Larsemann Hills"}, {"Ingrid Christensen Coast"}, {"Amery Ice Shelf"}, {"Mount Brown"}}}
        }
    },
    {
        "Chile",
        {
            {"Chilean Antarctic Territory", {{"Villa Las Estrellas"}, {"President Frei Base"}, {"O'Higgins Base"}, {"Prat Base"}, {"Yelcho Base"}}},
            {"South Shetland Islands", {{"King George Island"}, {"Livingston Island"}, {"Deception Island"}, {"Elephant Island"}, {"Robert Island"}}},
            {"Antarctic Peninsula", {{"Rothera Point"}, {"Palmer Station"}, {"Paradise Bay"}, {"Lemaire Channel"}, {"Port Lockroy"}}},
            {"Ellsworth Land", {{"Union Glacier"}, {"Mount Vinson"}, {"Heritage Range"}, {"Sentinel Range"}, {"Ronnie Ice Shelf"}}},
            {"Graham Land", {{"Anvers Island"}, {"Brabant Island"}, {"Wilhelmina Bay"}, {"Paradise Harbor"}, {"Lemaire Channel"}}}
        }
    },
    {
        "France",
        {
            {"Adélie Land", {{"Dumont d'Urville Station"}, {"Port Martin"}, {"Cape Denison"}, {"Mount Mertz"}, {"Mount Odbert"}}},
            {"Coastal Zone", {{"Petrel Island"}, {"Cape Jules"}, {"Cape Margerie"}, {"Cape Denison"}, {"Cape Discovery"}}},
            {"Interior Zone", {{"Dome C"}, {"Mount Mertz"}, {"Mount Odbert"}, {"Mount Brown"}, {"Mount Casey"}}},
            {"Glacier Zone", {{"Astrolabe Glacier"}, {"Mertz Glacier"}, {"Ninnis Glacier"}, {"Cook Glacier"}, {"Cape Discovery"}}},
            {"Research Zone", {{"Dumont d'Urville"}, {"Port Martin"}, {"Cape Jules"}, {"Cape Margerie"}, {"Cape Denison"}}}
        }
    },
    {
        "New Zealand",
        {
            {"Ross Dependency", {{"Scott Base"}, {"McMurdo Station"}, {"Mount Erebus"}, {"Cape Royds"}, {"Cape Evans"}}},
            {"Victoria Land", {{"Terra Nova Bay"}, {"Cape Hallett"}, {"Dry Valleys"}, {"Mount Melbourne"}, {"Mount Lister"}}},
            {"Ross Island", {{"Mount Erebus"}, {"Cape Royds"}, {"Cape Evans"}, {"Hut Point"}, {"Observation Hill"}}},
            {"Transantarctic Mountains", {{"Mount Lister"}, {"Mount Hooker"}, {"Mount Huggins"}, {"Mount Feather"}, {"Mount Discovery"}}},
            {"Ross Ice Shelf", {{"Roosevelt Island"}, {"Byrd Glacier"}, {"Skelton Glacier"}, {"Keltie Glacier"}, {"Cape Crozier"}}}
        }
    }
};

// --------------------------------------------------------- NORTH AMERICA KA DATASET -----------------------------------------------------
struct Country na_countries[5] = {
    {
        "United States",
        {
            {"California", {{"Los Angeles"}, {"San Francisco"}, {"San Diego"}, {"Sacramento"}, {"San Jose"}}},
            {"Texas", {{"Houston"}, {"Dallas"}, {"Austin"}, {"San Antonio"}, {"Fort Worth"}}},
            {"New York", {{"New York City"}, {"Buffalo"}, {"Rochester"}, {"Albany"}, {"Syracuse"}}},
            {"Florida", {{"Miami"}, {"Orlando"}, {"Tampa"}, {"Jacksonville"}, {"Tallahassee"}}},
            {"Illinois", {{"Chicago"}, {"Springfield"}, {"Peoria"}, {"Rockford"}, {"Naperville"}}}
        }
    },
    {
        "Canada",
        {
            {"Ontario", {{"Toronto"}, {"Ottawa"}, {"Hamilton"}, {"London"}, {"Windsor"}}},
            {"Quebec", {{"Montreal"}, {"Quebec City"}, {"Sherbrooke"}, {"Trois-Rivières"}, {"Gatineau"}}},
            {"British Columbia", {{"Vancouver"}, {"Victoria"}, {"Kelowna"}, {"Surrey"}, {"Burnaby"}}},
            {"Alberta", {{"Calgary"}, {"Edmonton"}, {"Red Deer"}, {"Lethbridge"}, {"Medicine Hat"}}},
            {"Manitoba", {{"Winnipeg"}, {"Brandon"}, {"Steinbach"}, {"Thompson"}, {"Portage la Prairie"}}}
        }
    },
    {
        "Mexico",
        {
            {"Jalisco", {{"Guadalajara"}, {"Puerto Vallarta"}, {"Tepatitlán"}, {"Lagos de Moreno"}, {"Autlán"}}},
            {"Nuevo León", {{"Monterrey"}, {"San Nicolás"}, {"Apodaca"}, {"Guadalupe"}, {"Santa Catarina"}}},
            {"Chiapas", {{"Tuxtla Gutiérrez"}, {"San Cristóbal"}, {"Tapachula"}, {"Comitán"}, {"Palenque"}}},
            {"Yucatán", {{"Mérida"}, {"Valladolid"}, {"Tizimín"}, {"Progreso"}, {"Izamal"}}},
            {"Puebla", {{"Puebla City"}, {"Tehuacán"}, {"Atlixco"}, {"Cholula"}, {"Huauchinango"}}}
        }
    },
    {
        "Guatemala",
        {
            {"Guatemala Department", {{"Guatemala City"}, {"Mixco"}, {"Villa Nueva"}, {"San Miguel Petapa"}, {"Chinautla"}}},
            {"Quetzaltenango", {{"Quetzaltenango"}, {"Coatepeque"}, {"Olintepeque"}, {"Salcajá"}, {"Almolonga"}}},
            {"Huehuetenango", {{"Huehuetenango"}, {"Chiantla"}, {"Jacaltenango"}, {"Santa Eulalia"}, {"San Pedro Soloma"}}},
            {"Alta Verapaz", {{"Cobán"}, {"Chisec"}, {"Fray Bartolomé"}, {"Tactic"}, {"San Pedro Carchá"}}},
            {"Escuintla", {{"Escuintla"}, {"Santa Lucía Cotzumalguapa"}, {"La Democracia"}, {"Tiquisate"}, {"Nueva Concepción"}}}
        }
    },
    {
        "Cuba",
        {
            {"Havana", {{"Centro Habana"}, {"Plaza de la Revolución"}, {"Habana Vieja"}, {"Playa"}, {"Marianao"}}},
            {"Santiago de Cuba", {{"Santiago"}, {"Palma Soriano"}, {"Contramaestre"}, {"San Luis"}, {"Songo-La Maya"}}},
            {"Camagüey", {{"Camagüey"}, {"Florida"}, {"Vertientes"}, {"Nuevitas"}, {"Esmeralda"}}},
            {"Holguín", {{"Holguín"}, {"Mayarí"}, {"Moa"}, {"Banes"}, {"Antilla"}}},
            {"Matanzas", {{"Matanzas"}, {"Varadero"}, {"Cárdenas"}, {"Colón"}, {"Jovellanos"}}}
        }
    }
};

// ---------------------------------------------------------- SOUTH AMERICA KA DATASET ----------------------------------------------------
struct Country sa_countries[5] = {
    {
        "Brazil",
        {
            {"São Paulo", {{"São Paulo"}, {"Campinas"}, {"Santos"}, {"Sorocaba"}, {"Ribeirão Preto"}}},
            {"Rio de Janeiro", {{"Rio de Janeiro"}, {"Niterói"}, {"Petrópolis"}, {"Volta Redonda"}, {"Campos dos Goytacazes"}}},
            {"Bahia", {{"Salvador"}, {"Feira de Santana"}, {"Vitória da Conquista"}, {"Ilhéus"}, {"Barreiras"}}},
            {"Minas Gerais", {{"Belo Horizonte"}, {"Uberlândia"}, {"Juiz de Fora"}, {"Montes Claros"}, {"Betim"}}},
            {"Paraná", {{"Curitiba"}, {"Londrina"}, {"Maringá"}, {"Ponta Grossa"}, {"Cascavel"}}}
        }
    },
    {
        "Argentina",
        {
            {"Buenos Aires Province", {{"La Plata"}, {"Mar del Plata"}, {"Bahía Blanca"}, {"Tandil"}, {"San Nicolás"}}},
            {"Córdoba Province", {{"Córdoba"}, {"Villa María"}, {"Río Cuarto"}, {"Alta Gracia"}, {"Jesús María"}}},
            {"Santa Fe Province", {{"Rosario"}, {"Santa Fe"}, {"Rafaela"}, {"Venado Tuerto"}, {"Reconquista"}}},
            {"Mendoza Province", {{"Mendoza"}, {"San Rafael"}, {"Godoy Cruz"}, {"Luján de Cuyo"}, {"Maipú"}}},
            {"Tucumán Province", {{"San Miguel de Tucumán"}, {"Tafí Viejo"}, {"Yerba Buena"}, {"Concepción"}, {"Monteros"}}}
        }
    },
    {
        "Colombia",
        {
            {"Cundinamarca", {{"Bogotá"}, {"Soacha"}, {"Girardot"}, {"Zipaquirá"}, {"Facatativá"}}},
            {"Antioquia", {{"Medellín"}, {"Bello"}, {"Itagüí"}, {"Envigado"}, {"Rionegro"}}},
            {"Valle del Cauca", {{"Cali"}, {"Palmira"}, {"Buenaventura"}, {"Tuluá"}, {"Cartago"}}},
            {"Atlántico", {{"Barranquilla"}, {"Soledad"}, {"Malambo"}, {"Puerto Colombia"}, {"Galapa"}}},
            {"Santander", {{"Bucaramanga"}, {"Floridablanca"}, {"Girón"}, {"Piedecuesta"}, {"Barrancabermeja"}}}
        }
    },
    {
        "Peru",
        {
            {"Lima", {{"Lima"}, {"Callao"}, {"Miraflores"}, {"San Isidro"}, {"Barranco"}}},
            {"Cusco", {{"Cusco"}, {"Urubamba"}, {"Pisac"}, {"Sicuani"}, {"Quillabamba"}}},
            {"Arequipa", {{"Arequipa"}, {"Camana"}, {"Mollendo"}, {"Chuquibamba"}, {"Aplao"}}},
            {"La Libertad", {{"Trujillo"}, {"Chepén"}, {"Pacasmayo"}, {"Huamachuco"}, {"Otuzco"}}},
            {"Piura", {{"Piura"}, {"Sullana"}, {"Paita"}, {"Talara"}, {"Sechura"}}}
        }
    },
    {
        "Chile",
        {
            {"Santiago Metropolitan", {{"Santiago"}, {"Puente Alto"}, {"Maipú"}, {"La Florida"}, {"Las Condes"}}},
            {"Valparaíso", {{"Valparaíso"}, {"Viña del Mar"}, {"Quilpué"}, {"Villa Alemana"}, {"San Antonio"}}},
            {"Biobío", {{"Concepción"}, {"Talcahuano"}, {"Los Ángeles"}, {"Coronel"}, {"Chillán"}}},
            {"Araucanía", {{"Temuco"}, {"Villarrica"}, {"Angol"}, {"Pucón"}, {"Lautaro"}}},
            {"Antofagasta", {{"Antofagasta"}, {"Calama"}, {"Tocopilla"}, {"Mejillones"}, {"María Elena"}}}
        }
    }
};

// ------------------------------------------------------- EUROPE KA DATASET -----------------------------------------------------------
struct Country european_countries[5] = {
    {
        "France",
        {
            {"Île-de-France", {{"Paris"}, {"Versailles"}, {"Boulogne-Billancourt"}, {"Saint-Denis"}, {"Nanterre"}}},
            {"Provence-Alpes-Côte d'Azur", {{"Marseille"}, {"Nice"}, {"Toulon"}, {"Avignon"}, {"Cannes"}}},
            {"Nouvelle-Aquitaine", {{"Bordeaux"}, {"Limoges"}, {"Poitiers"}, {"Bayonne"}, {"La Rochelle"}}},
            {"Occitanie", {{"Toulouse"}, {"Montpellier"}, {"Nîmes"}, {"Perpignan"}, {"Carcassonne"}}},
            {"Hauts-de-France", {{"Lille"}, {"Amiens"}, {"Roubaix"}, {"Calais"}, {"Dunkerque"}}}
        }
    },
    {
        "Germany",
        {
            {"Bavaria", {{"Munich"}, {"Nuremberg"}, {"Augsburg"}, {"Regensburg"}, {"Würzburg"}}},
            {"North Rhine-Westphalia", {{"Cologne"}, {"Düsseldorf"}, {"Dortmund"}, {"Essen"}, {"Bonn"}}},
            {"Baden-Württemberg", {{"Stuttgart"}, {"Mannheim"}, {"Karlsruhe"}, {"Freiburg"}, {"Heidelberg"}}},
            {"Lower Saxony", {{"Hanover"}, {"Braunschweig"}, {"Osnabrück"}, {"Oldenburg"}, {"Göttingen"}}},
            {"Hesse", {{"Frankfurt"}, {"Wiesbaden"}, {"Kassel"}, {"Darmstadt"}, {"Offenbach"}}}
        }
    },
    {
        "United Kingdom",
        {
            {"England", {{"London"}, {"Manchester"}, {"Birmingham"}, {"Liverpool"}, {"Leeds"}}},
            {"Scotland", {{"Edinburgh"}, {"Glasgow"}, {"Aberdeen"}, {"Dundee"}, {"Inverness"}}},
            {"Wales", {{"Cardiff"}, {"Swansea"}, {"Newport"}, {"Wrexham"}, {"Bangor"}}},
            {"Northern Ireland", {{"Belfast"}, {"Derry"}, {"Lisburn"}, {"Newry"}, {"Armagh"}}},
            {"Cornwall Region", {{"Truro"}, {"St Ives"}, {"Penzance"}, {"Falmouth"}, {"Newquay"}}}
        }
    },
    {
        "Italy",
        {
            {"Lombardy", {{"Milan"}, {"Bergamo"}, {"Brescia"}, {"Como"}, {"Monza"}}},
            {"Lazio", {{"Rome"}, {"Frosinone"}, {"Latina"}, {"Viterbo"}, {"Rieti"}}},
            {"Campania", {{"Naples"}, {"Salerno"}, {"Caserta"}, {"Benevento"}, {"Avellino"}}},
            {"Sicily", {{"Palermo"}, {"Catania"}, {"Messina"}, {"Syracuse"}, {"Agrigento"}}},
            {"Veneto", {{"Venice"}, {"Verona"}, {"Padua"}, {"Vicenza"}, {"Treviso"}}}
        }
    },
    {
        "Spain",
        {
            {"Catalonia", {{"Barcelona"}, {"Girona"}, {"Tarragona"}, {"Lleida"}, {"Badalona"}}},
            {"Madrid", {{"Madrid"}, {"Alcalá de Henares"}, {"Getafe"}, {"Móstoles"}, {"Fuenlabrada"}}},
            {"Andalusia", {{"Seville"}, {"Granada"}, {"Málaga"}, {"Córdoba"}, {"Almería"}}},
            {"Valencian Community", {{"Valencia"}, {"Alicante"}, {"Castellón"}, {"Elche"}, {"Torrevieja"}}},
            {"Galicia", {{"Santiago de Compostela"}, {"A Coruña"}, {"Vigo"}, {"Ourense"}, {"Lugo"}}}
        }
    }
};

// --------------------------------------------- AUSTRALIA/OCEANIA KA DATASET -----------------------------------------------------
struct Country australian_countries[5] = {
    {
        "Australia",
        {
            {"New South Wales", {{"Sydney"}, {"Newcastle"}, {"Wollongong"}, {"Parramatta"}, {"Coffs Harbour"}}},
            {"Victoria", {{"Melbourne"}, {"Geelong"}, {"Ballarat"}, {"Bendigo"}, {"Shepparton"}}},
            {"Queensland", {{"Brisbane"}, {"Gold Coast"}, {"Cairns"}, {"Townsville"}, {"Toowoomba"}}},
            {"Western Australia", {{"Perth"}, {"Fremantle"}, {"Mandurah"}, {"Bunbury"}, {"Kalgoorlie"}}},
            {"South Australia", {{"Adelaide"}, {"Mount Gambier"}, {"Whyalla"}, {"Port Augusta"}, {"Port Lincoln"}}}
        }
    },
    {
        "New Zealand",
        {
            {"Auckland Region", {{"Auckland"}, {"Manukau"}, {"Waitakere"}, {"North Shore"}, {"Papakura"}}},
            {"Wellington Region", {{"Wellington"}, {"Lower Hutt"}, {"Upper Hutt"}, {"Porirua"}, {"Kapiti"}}},
            {"Canterbury Region", {{"Christchurch"}, {"Timaru"}, {"Ashburton"}, {"Rangiora"}, {"Kaiapoi"}}},
            {"Otago Region", {{"Dunedin"}, {"Queenstown"}, {"Oamaru"}, {"Balclutha"}, {"Wanaka"}}},
            {"Waikato Region", {{"Hamilton"}, {"Cambridge"}, {"Tokoroa"}, {"Te Awamutu"}, {"Morrinsville"}}}
        }
    },
    {
        "Papua New Guinea",
        {
            {"National Capital District", {{"Port Moresby"}, {"Boroko"}, {"Waigani"}, {"Gordons"}, {"Hohola"}}},
            {"Morobe Province", {{"Lae"}, {"Bulolo"}, {"Finschhafen"}, {"Markham"}, {"Huon"}}},
            {"Eastern Highlands", {{"Goroka"}, {"Kainantu"}, {"Henganofi"}, {"Lufa"}, {"Okapa"}}},
            {"Western Highlands", {{"Mount Hagen"}, {"Togoba"}, {"Tambul"}, {"Mul Baiyer"}, {"Dei"}}},
            {"East New Britain", {{"Rabaul"}, {"Kokopo"}, {"Duke of York"}, {"Gazelle"}, {"Pomio"}}}
        }
    },
    {
        "Fiji",
        {
            {"Central Division", {{"Suva"}, {"Nausori"}, {"Navua"}, {"Korovou"}, {"Sigatoka"}}},
            {"Western Division", {{"Nadi"}, {"Lautoka"}, {"Ba"}, {"Tavua"}, {"Rakiraki"}}},
            {"Northern Division", {{"Labasa"}, {"Savusavu"}, {"Dreketi"}, {"Seaqaqa"}, {"Nabouwalu"}}},
            {"Eastern Division", {{"Levuka"}, {"Lomaiviti"}, {"Kadavu"}, {"Lau"}, {"Rotuma"}}},
            {"Vanua Levu", {{"Labasa"}, {"Savusavu"}, {"Nabouwalu"}, {"Seaqaqa"}, {"Dreketi"}}}
        }
    },
    {
        "Solomon Islands",
        {
            {"Guadalcanal", {{"Honiara"}, {"Aola"}, {"Marau"}, {"Tina"}, {"Koli"}}},
            {"Malaita", {{"Auki"}, {"Afio"}, {"Atori"}, {"Fouia"}, {"Raroisu"}}},
            {"Western Province", {{"Gizo"}, {"Munda"}, {"Noro"}, {"Kolombangara"}, {"Rendova"}}},
            {"Isabel Province", {{"Buala"}, {"Tatamba"}, {"Kia"}, {"Sigana"}, {"Hovikoilo"}}},
            {"Makira-Ulawa", {{"Kirakira"}, {"Santa Ana"}, {"Santa Catalina"}, {"Ugi"}, {"Wainoni"}}}
        }
    }
};

int main() {
    
    struct Continent continents[7] = {
        {"Asia", {asian_countries[0], asian_countries[1], asian_countries[2], asian_countries[3], asian_countries[4]}},
        {"Africa", {african_countries[0], african_countries[1], african_countries[2], african_countries[3], african_countries[4]}},
        {"Antarctica", {antarctic_countries[0], antarctic_countries[1], antarctic_countries[2], antarctic_countries[3], antarctic_countries[4]}},
        {"North America", {na_countries[0], na_countries[1], na_countries[2], na_countries[3], na_countries[4]}},
        {"South America", {sa_countries[0], sa_countries[1], sa_countries[2], sa_countries[3], sa_countries[4]}},
        {"Europe", {european_countries[0], european_countries[1], european_countries[2], european_countries[3], european_countries[4]}},
        {"Australia & Oceania", {australian_countries[0], australian_countries[1], australian_countries[2], australian_countries[3], australian_countries[4]}}
    };

    int continent_choice, country_choice, state_choice, district_choice;

    // Continents selection
    print_continents(continents, 7);
    printf("Mahadveep ka chunaav krle laadle - ");
    scanf("%d", &continent_choice);

    // Country's selection
    printf("You selected %s\n", continents[continent_choice-1].name);
    print_countries(continents[continent_choice-1].countries, 5);
    printf("Haa bhai rabdellll ....... konse desh mai pardeshi bnna hai tujhe ab ?? - ");
    scanf("%d", &country_choice);

    // States selection
    printf("You selected %s\n", continents[continent_choice-1].countries[country_choice-1].name);
    print_states(continents[continent_choice-1].countries[country_choice-1].states, 5);
    printf("Haa bhai ab kha dora the explorer bnne ka shauk hai ?? - ");
    scanf("%d", &state_choice);

    // Finally districts ka chunaav
    printf("You selected %s\n", continents[continent_choice-1].countries[country_choice-1].states[state_choice-1].name);
    print_districts(continents[continent_choice-1].countries[country_choice-1].states[state_choice-1].districts, 5);

    // Ending citation. 
    printf("\n \nChlo ab khoob ghumi ghumi hogyi ghr ka raasta naapo !!!");

    return 0;
}
