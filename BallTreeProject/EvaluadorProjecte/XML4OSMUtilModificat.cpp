
#include "XML4OSMUtilModificat.h"

XML4OSMUtilModificat::XML4OSMUtilModificat() {
	m_conjuntTest1 = new std::vector<XmlElement>();
	construeixPrimerConjunt();
}

void XML4OSMUtilModificat::construeixPrimerConjunt() {
	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "309863252"),
				std::make_pair("lat", "41.4894433"),
				std::make_pair("lon", "2.1479179"),
				std::make_pair("timestamp", "2017-09-15T21:56:29Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "9"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "4916719746"),
				std::make_pair("lat", "41.4900377"),
				std::make_pair("lon", "2.1478856"),
				std::make_pair("timestamp", "2017-09-15T21:56:29Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "1125629590"),
				std::make_pair("lat", "41.4900858"),
				std::make_pair("lon", "2.1478828"),
				std::make_pair("timestamp", "2017-09-15T21:56:29Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "1125629589"),
				std::make_pair("lat", "41.4901040"),
				std::make_pair("lon", "2.1484435"),
				std::make_pair("timestamp", "2017-09-15T21:56:29Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "4916719745"),
				std::make_pair("lat", "41.4900447"),
				std::make_pair("lon", "2.1484469"),
				std::make_pair("timestamp", "2017-09-15T21:56:29Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "3874928585"),
				std::make_pair("lat", "41.4899753"),
				std::make_pair("lon", "2.1484507"),
				std::make_pair("timestamp", "2017-09-15T21:56:29Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "5108474770"),
				std::make_pair("lat", "41.4899683"),
				std::make_pair("lon", "2.1482212"),
				std::make_pair("timestamp", "2017-09-15T21:56:26Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "3874928584"),
				std::make_pair("lat", "41.4899663"),
				std::make_pair("lon", "2.1481541"),
				std::make_pair("timestamp", "2017-09-15T21:56:29Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "309863351"),
				std::make_pair("lat", "41.4894514"),
				std::make_pair("lon", "2.1481821"),
				std::make_pair("timestamp", "2017-09-15T21:56:29Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "6"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "97177578"),
				std::make_pair("timestamp", "2017-09-15T21:56:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "4"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "309863252"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4916719746"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1125629590"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1125629589"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4916719745"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "3874928585"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108474770"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "3874928584"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "309863351"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "309863252"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "area"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "foot"),
						std::make_pair("v", "permissive"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "pedestrian"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Pla�a Goya"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "49557764"),
				std::make_pair("id", "1835227718"),
				std::make_pair("lat", "41.4905494"),
				std::make_pair("lon", "2.1469621"),
				std::make_pair("timestamp", "2017-06-15T11:34:24Z"),
				std::make_pair("uid", "203136"),
				std::make_pair("user", "dispiste"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082894"),
				std::make_pair("id", "4943823140"),
				std::make_pair("lat", "41.4905472"),
				std::make_pair("lon", "2.1468805"),
				std::make_pair("timestamp", "2017-09-15T22:06:56Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "35732747"),
				std::make_pair("id", "3874941274"),
				std::make_pair("lat", "41.4905379"),
				std::make_pair("lon", "2.1465352"),
				std::make_pair("timestamp", "2015-12-03T18:24:42Z"),
				std::make_pair("uid", "316694"),
				std::make_pair("user", "Luiyo"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "35732747"),
				std::make_pair("id", "1835228060"),
				std::make_pair("lat", "41.4905346"),
				std::make_pair("lon", "2.1464073"),
				std::make_pair("timestamp", "2015-12-03T18:24:44Z"),
				std::make_pair("uid", "316694"),
				std::make_pair("user", "Luiyo"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996104"),
				std::make_pair("lat", "41.4902909"),
				std::make_pair("lon", "2.1464131"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082894"),
				std::make_pair("id", "5108494790"),
				std::make_pair("lat", "41.4899377"),
				std::make_pair("lon", "2.1464215"),
				std::make_pair("timestamp", "2017-09-15T22:06:55Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52514716"),
				std::make_pair("id", "1835227763"),
				std::make_pair("lat", "41.4898786"),
				std::make_pair("lon", "2.1464318"),
				std::make_pair("timestamp", "2017-09-30T15:32:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "172637086"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "7"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227718"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823140"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "3874941274"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228060"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996104"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108494790"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227763"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer de Vel�zquez"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "surface"),
						std::make_pair("v", "asphalt"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835227986"),
				std::make_pair("lat", "41.4909496"),
				std::make_pair("lon", "2.1475910"),
				std::make_pair("timestamp", "2012-07-23T11:13:51Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082894"),
				std::make_pair("id", "4943823141"),
				std::make_pair("lat", "41.4908756"),
				std::make_pair("lon", "2.1475927"),
				std::make_pair("timestamp", "2017-09-15T22:06:56Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "1835227831"),
				std::make_pair("lat", "41.4904925"),
				std::make_pair("lon", "2.1476016"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "4"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "49557764"),
				std::make_pair("id", "1835227799"),
				std::make_pair("lat", "41.4903676"),
				std::make_pair("lon", "2.1476039"),
				std::make_pair("timestamp", "2017-06-15T11:34:24Z"),
				std::make_pair("uid", "203136"),
				std::make_pair("user", "dispiste"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "49942290"),
				std::make_pair("id", "172637115"),
				std::make_pair("timestamp", "2017-06-30T11:48:13Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "4"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227986"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823141"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227831"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227799"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer del Pintor Vayreda"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "no"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "1835228061"),
				std::make_pair("lat", "41.4901692"),
				std::make_pair("lon", "2.1474649"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "13791489"),
				std::make_pair("id", "2001942735"),
				std::make_pair("lat", "41.4895814"),
				std::make_pair("lon", "2.1474726"),
				std::make_pair("timestamp", "2012-11-07T22:56:39Z"),
				std::make_pair("uid", "401530"),
				std::make_pair("user", "jamesur"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "13791489"),
				std::make_pair("id", "2001942734"),
				std::make_pair("lat", "41.4895855"),
				std::make_pair("lon", "2.1471828"),
				std::make_pair("timestamp", "2012-11-07T22:56:39Z"),
				std::make_pair("uid", "401530"),
				std::make_pair("user", "jamesur"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52514716"),
				std::make_pair("id", "1835227907"),
				std::make_pair("lat", "41.4895520"),
				std::make_pair("lon", "2.1471542"),
				std::make_pair("timestamp", "2017-09-30T15:32:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "35732747"),
				std::make_pair("id", "172637128"),
				std::make_pair("timestamp", "2015-12-03T18:24:43Z"),
				std::make_pair("uid", "316694"),
				std::make_pair("user", "Luiyo"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228061"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "2001942735"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "2001942734"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227907"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Passatge de Goya"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "43366059"),
				std::make_pair("id", "4478042464"),
				std::make_pair("lat", "41.4891910"),
				std::make_pair("lon", "2.1462611"),
				std::make_pair("timestamp", "2016-11-02T23:18:13Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835227566"),
				std::make_pair("lat", "41.4891798"),
				std::make_pair("lon", "2.1466787"),
				std::make_pair("timestamp", "2012-07-23T11:13:39Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082894"),
				std::make_pair("id", "5108494788"),
				std::make_pair("lat", "41.4897036"),
				std::make_pair("lon", "2.1466575"),
				std::make_pair("timestamp", "2017-09-15T22:06:55Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52514716"),
				std::make_pair("id", "1835227234"),
				std::make_pair("lat", "41.4897730"),
				std::make_pair("lon", "2.1466654"),
				std::make_pair("timestamp", "2017-09-30T15:32:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "52082894"),
				std::make_pair("id", "172637154"),
				std::make_pair("timestamp", "2017-09-15T22:06:56Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "7"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4478042464"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227566"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108494788"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227234"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer de Sorolla"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "no"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "surface"),
						std::make_pair("v", "asphalt"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52514716"),
				std::make_pair("id", "1835227219"),
				std::make_pair("lat", "41.4896273"),
				std::make_pair("lon", "2.1469877"),
				std::make_pair("timestamp", "2017-09-30T15:32:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082894"),
				std::make_pair("id", "5108494791"),
				std::make_pair("lat", "41.4897212"),
				std::make_pair("lon", "2.1469738"),
				std::make_pair("timestamp", "2017-09-15T22:06:55Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "49557764"),
				std::make_pair("id", "1835227400"),
				std::make_pair("lat", "41.4901771"),
				std::make_pair("lon", "2.1469674"),
				std::make_pair("timestamp", "2017-06-15T11:34:24Z"),
				std::make_pair("uid", "203136"),
				std::make_pair("user", "dispiste"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082894"),
				std::make_pair("id", "4943823139"),
				std::make_pair("lat", "41.4902353"),
				std::make_pair("lon", "2.1469666"),
				std::make_pair("timestamp", "2017-09-15T22:06:56Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "3874941272"),
				std::make_pair("lat", "41.4904894"),
				std::make_pair("lon", "2.1469630"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "4"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996073"),
				std::make_pair("lat", "41.4908498"),
				std::make_pair("lon", "2.1469579"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "13791489"),
				std::make_pair("id", "1835227335"),
				std::make_pair("lat", "41.4911428"),
				std::make_pair("lon", "2.1469538"),
				std::make_pair("timestamp", "2012-11-07T22:56:40Z"),
				std::make_pair("uid", "401530"),
				std::make_pair("user", "jamesur"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "172637161"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "9"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227219"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108494791"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227400"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823139"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "3874941272"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227718"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996073"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227335"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Ronda del Guinard�"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97595691"),
				std::make_pair("id", "8326986407"),
				std::make_pair("lat", "41.4913917"),
				std::make_pair("lon", "2.1461195"),
				std::make_pair("timestamp", "2021-01-16T09:09:43Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "unmarked"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835228112"),
				std::make_pair("lat", "41.4908833"),
				std::make_pair("lon", "2.1478700"),
				std::make_pair("timestamp", "2012-07-23T11:13:57Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835227970"),
				std::make_pair("lat", "41.4908069"),
				std::make_pair("lon", "2.1482079"),
				std::make_pair("timestamp", "2012-07-23T11:13:51Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52514817"),
				std::make_pair("id", "5139728050"),
				std::make_pair("lat", "41.4907706"),
				std::make_pair("lon", "2.1484160"),
				std::make_pair("timestamp", "2017-09-30T15:36:13Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835227991"),
				std::make_pair("lat", "41.4907540"),
				std::make_pair("lon", "2.1485111"),
				std::make_pair("timestamp", "2012-07-23T11:13:52Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "189609097"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "9"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8326986407"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227335"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227986"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228112"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227970"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5139728050"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227991"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "lit"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer dels Reis"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "surface"),
						std::make_pair("v", "asphalt"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "5155660250"),
				std::make_pair("lat", "41.4904920"),
				std::make_pair("lon", "2.1475047"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "189609103"),
				std::make_pair("timestamp", "2017-10-08T17:41:24Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "5"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "3874941272"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660250"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227831"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "path"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Pla�a del Doctor Moragas"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "1835228136"),
				std::make_pair("lat", "41.4901508"),
				std::make_pair("lon", "2.1477419"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "4"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "5155660251"),
				std::make_pair("lat", "41.4901507"),
				std::make_pair("lon", "2.1475331"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "4925219661"),
				std::make_pair("lat", "41.4901656"),
				std::make_pair("lon", "2.1475027"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "5155660248"),
				std::make_pair("lat", "41.4901771"),
				std::make_pair("lon", "2.1470729"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "435689525"),
				std::make_pair("timestamp", "2017-10-08T17:41:24Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228136"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660251"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4925219661"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228061"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660248"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227400"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer de Goya"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "57657535"),
				std::make_pair("id", "4335861844"),
				std::make_pair("lat", "41.4902216"),
				std::make_pair("lon", "2.1476032"),
				std::make_pair("timestamp", "2018-03-30T11:02:47Z"),
				std::make_pair("uid", "5126253"),
				std::make_pair("user", "jqngarcia"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "57657535"),
				std::make_pair("id", "5155660252"),
				std::make_pair("lat", "41.4902204"),
				std::make_pair("lon", "2.1477503"),
				std::make_pair("timestamp", "2018-03-30T11:02:48Z"),
				std::make_pair("uid", "5126253"),
				std::make_pair("user", "jqngarcia"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "450901914"),
				std::make_pair("timestamp", "2017-10-08T17:41:24Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4335861844"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660252"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "steps"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "48797248"),
				std::make_pair("id", "494465563"),
				std::make_pair("timestamp", "2017-05-18T17:00:40Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227799"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4335861844"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer del Pintor Vayreda"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "no"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "57657535"),
				std::make_pair("id", "1835227764"),
				std::make_pair("lat", "41.4903787"),
				std::make_pair("lon", "2.1484228"),
				std::make_pair("timestamp", "2018-03-30T11:02:46Z"),
				std::make_pair("uid", "5126253"),
				std::make_pair("user", "jqngarcia"),
				std::make_pair("version", "5"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "49557764"),
				std::make_pair("id", "500681181"),
				std::make_pair("timestamp", "2017-06-15T11:34:23Z"),
				std::make_pair("uid", "203136"),
				std::make_pair("user", "dispiste"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227799"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227764"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer del Pintor Vayreda"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "no"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "35732747"),
				std::make_pair("id", "2001942747"),
				std::make_pair("lat", "41.4900459"),
				std::make_pair("lon", "2.1485451"),
				std::make_pair("timestamp", "2015-12-03T18:24:44Z"),
				std::make_pair("uid", "316694"),
				std::make_pair("user", "Luiyo"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "49557764"),
				std::make_pair("id", "4916719744"),
				std::make_pair("lat", "41.4900374"),
				std::make_pair("lon", "2.1478593"),
				std::make_pair("timestamp", "2017-06-15T11:34:23Z"),
				std::make_pair("uid", "203136"),
				std::make_pair("user", "dispiste"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "49557764"),
				std::make_pair("id", "500681183"),
				std::make_pair("timestamp", "2017-06-15T11:34:23Z"),
				std::make_pair("uid", "203136"),
				std::make_pair("user", "dispiste"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "2001942747"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4916719745"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4916719746"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4916719744"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "pedestrian"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "5108474764"),
				std::make_pair("lat", "41.4901011"),
				std::make_pair("lon", "2.1478066"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "5108474765"),
				std::make_pair("lat", "41.4901214"),
				std::make_pair("lon", "2.1477809"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "500681184"),
				std::make_pair("timestamp", "2017-09-15T21:56:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4916719744"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108474764"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108474765"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228136"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "pedestrian"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "5155660244"),
				std::make_pair("lat", "41.4904799"),
				std::make_pair("lon", "2.1470522"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "5155660249"),
				std::make_pair("lat", "41.4904810"),
				std::make_pair("lon", "2.1475047"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "5155660245"),
				std::make_pair("lat", "41.4904810"),
				std::make_pair("lon", "2.1475314"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "4925219658"),
				std::make_pair("lat", "41.4902228"),
				std::make_pair("lon", "2.1475325"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "4925219660"),
				std::make_pair("lat", "41.4902227"),
				std::make_pair("lon", "2.1474913"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "5155660247"),
				std::make_pair("lat", "41.4902218"),
				std::make_pair("lon", "2.1470709"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "4925219659"),
				std::make_pair("lat", "41.4902217"),
				std::make_pair("lon", "2.1470533"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "5155660246"),
				std::make_pair("lat", "41.4902361"),
				std::make_pair("lon", "2.1470532"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "501838535"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660244"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660249"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660245"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4925219658"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4925219660"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660247"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4925219659"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660246"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660244"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "area"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "pedestrian"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "501838536"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4925219660"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4925219661"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "path"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "4925219663"),
				std::make_pair("lat", "41.4893230"),
				std::make_pair("lon", "2.1479185"),
				std::make_pair("timestamp", "2017-09-15T21:56:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "5108476347"),
				std::make_pair("lat", "41.4893295"),
				std::make_pair("lon", "2.1478407"),
				std::make_pair("timestamp", "2017-09-15T21:56:27Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "4925219664"),
				std::make_pair("lat", "41.4893229"),
				std::make_pair("lon", "2.1477871"),
				std::make_pair("timestamp", "2017-09-15T21:56:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "5108476346"),
				std::make_pair("lat", "41.4893838"),
				std::make_pair("lon", "2.1476206"),
				std::make_pair("timestamp", "2017-09-15T21:56:27Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "108342831"),
				std::make_pair("id", "1835240633"),
				std::make_pair("lat", "41.4893533"),
				std::make_pair("lon", "2.1475936"),
				std::make_pair("timestamp", "2021-07-21T00:31:54Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "58184525"),
				std::make_pair("id", "501838537"),
				std::make_pair("timestamp", "2018-04-17T22:36:45Z"),
				std::make_pair("uid", "843156"),
				std::make_pair("user", "davidbgr"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4916719746"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4925219663"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108476347"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4925219664"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108476346"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835240633"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "footway"),
						std::make_pair("v", "sidewalk"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "footway"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52514716"),
				std::make_pair("id", "4943823137"),
				std::make_pair("lat", "41.4897001"),
				std::make_pair("lon", "2.1468265"),
				std::make_pair("timestamp", "2017-09-30T15:32:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52514716"),
				std::make_pair("id", "3874940447"),
				std::make_pair("lat", "41.4898487"),
				std::make_pair("lon", "2.1464981"),
				std::make_pair("timestamp", "2017-09-30T15:32:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52514716"),
				std::make_pair("id", "4943823135"),
				std::make_pair("lat", "41.4899425"),
				std::make_pair("lon", "2.1462906"),
				std::make_pair("timestamp", "2017-09-30T15:32:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "76228934"),
				std::make_pair("id", "1835227774"),
				std::make_pair("lat", "41.4901064"),
				std::make_pair("lon", "2.1459202"),
				std::make_pair("timestamp", "2019-10-25T21:08:59Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "4"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52741210"),
				std::make_pair("id", "5108494787"),
				std::make_pair("lat", "41.4901431"),
				std::make_pair("lon", "2.1458468"),
				std::make_pair("timestamp", "2017-10-08T20:19:21Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "uncontrolled"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996082"),
				std::make_pair("lat", "41.4902541"),
				std::make_pair("lon", "2.1456014"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996079"),
				std::make_pair("lat", "41.4902796"),
				std::make_pair("lon", "2.1455450"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921230"),
				std::make_pair("lat", "41.4903479"),
				std::make_pair("lon", "2.1453939"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97834851"),
				std::make_pair("id", "4943823131"),
				std::make_pair("lat", "41.4903697"),
				std::make_pair("lon", "2.1453457"),
				std::make_pair("timestamp", "2021-01-20T11:47:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "7"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "tactile_paving"),
						std::make_pair("v", "no"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "98383965"),
				std::make_pair("id", "525051683"),
				std::make_pair("timestamp", "2021-01-29T19:07:10Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "5"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227907"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227219"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823137"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227234"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "3874940447"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227763"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823135"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227774"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108494787"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996082"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996079"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921230"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823131"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer de la Pineda"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "no"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "surface"),
						std::make_pair("v", "asphalt"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "531083020"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823139"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660246"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "path"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "531083021"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660247"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660248"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "path"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "52737373"),
				std::make_pair("id", "531083022"),
				std::make_pair("timestamp", "2017-10-08T17:41:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660249"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660250"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "path"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "58184525"),
				std::make_pair("id", "531083023"),
				std::make_pair("timestamp", "2018-04-17T22:36:45Z"),
				std::make_pair("uid", "843156"),
				std::make_pair("user", "davidbgr"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155660252"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228136"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "footway"),
						std::make_pair("v", "sidewalk"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "footway"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996087"),
				std::make_pair("lat", "41.4908319"),
				std::make_pair("lon", "2.1456497"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996086"),
				std::make_pair("lat", "41.4908382"),
				std::make_pair("lon", "2.1461090"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "720025507"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996087"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996086"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996073"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823141"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "footway"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082292"),
				std::make_pair("id", "361239083"),
				std::make_pair("lat", "41.4887861"),
				std::make_pair("lon", "2.1417598"),
				std::make_pair("timestamp", "2017-09-15T21:38:31Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "108342831"),
				std::make_pair("id", "5108437668"),
				std::make_pair("lat", "41.4888072"),
				std::make_pair("lon", "2.1418469"),
				std::make_pair("timestamp", "2021-07-21T00:31:54Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "uncontrolled"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082292"),
				std::make_pair("id", "5108437663"),
				std::make_pair("lat", "41.4888606"),
				std::make_pair("lon", "2.1420670"),
				std::make_pair("timestamp", "2017-09-15T21:38:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "74271150"),
				std::make_pair("id", "6783176578"),
				std::make_pair("lat", "41.4893752"),
				std::make_pair("lon", "2.1425048"),
				std::make_pair("timestamp", "2019-09-09T15:54:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "360927044"),
				std::make_pair("lat", "41.4894257"),
				std::make_pair("lon", "2.1425477"),
				std::make_pair("timestamp", "2012-07-23T11:14:09Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "74271150"),
				std::make_pair("id", "6783176580"),
				std::make_pair("lat", "41.4894730"),
				std::make_pair("lon", "2.1425895"),
				std::make_pair("timestamp", "2019-09-09T15:54:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "53189956"),
				std::make_pair("id", "5108501276"),
				std::make_pair("lat", "41.4898995"),
				std::make_pair("lon", "2.1429666"),
				std::make_pair("timestamp", "2017-10-23T20:05:07Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "uncontrolled"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "tactile_paving"),
						std::make_pair("v", "no"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "81186376"),
				std::make_pair("id", "361239079"),
				std::make_pair("lat", "41.4899716"),
				std::make_pair("lon", "2.1430302"),
				std::make_pair("timestamp", "2020-02-18T19:35:39Z"),
				std::make_pair("uid", "220932"),
				std::make_pair("user", "mor"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52736941"),
				std::make_pair("id", "5155645054"),
				std::make_pair("lat", "41.4899985"),
				std::make_pair("lon", "2.1430529"),
				std::make_pair("timestamp", "2017-10-08T17:25:25Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "53189956"),
				std::make_pair("id", "5108501275"),
				std::make_pair("lat", "41.4900251"),
				std::make_pair("lon", "2.1430759"),
				std::make_pair("timestamp", "2017-10-23T20:05:03Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "uncontrolled"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "tactile_paving"),
						std::make_pair("v", "no"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "1835227766"),
				std::make_pair("lat", "41.4902855"),
				std::make_pair("lon", "2.1433050"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835227935"),
				std::make_pair("lat", "41.4905586"),
				std::make_pair("lon", "2.1435364"),
				std::make_pair("timestamp", "2012-07-23T11:13:49Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "74271150"),
				std::make_pair("id", "28233854"),
				std::make_pair("timestamp", "2019-09-09T15:54:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "17"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "361239083"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108437668"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108437663"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6783176578"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "360927044"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6783176580"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108501276"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "361239079"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155645054"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108501275"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227766"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227935"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "lanes"),
						std::make_pair("v", "1"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer de la Ind�stria"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "surface"),
						std::make_pair("v", "asphalt"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "81186376"),
				std::make_pair("id", "1835228057"),
				std::make_pair("lat", "41.4914979"),
				std::make_pair("lon", "2.1441483"),
				std::make_pair("timestamp", "2020-02-18T19:35:39Z"),
				std::make_pair("uid", "220932"),
				std::make_pair("user", "mor"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996093"),
				std::make_pair("lat", "41.4909680"),
				std::make_pair("lon", "2.1454587"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "barrier"),
						std::make_pair("v", "bollard"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996092"),
				std::make_pair("lat", "41.4909425"),
				std::make_pair("lon", "2.1455221"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97779722"),
				std::make_pair("id", "1835228110"),
				std::make_pair("lat", "41.4909207"),
				std::make_pair("lon", "2.1455756"),
				std::make_pair("timestamp", "2021-01-19T15:56:43Z"),
				std::make_pair("uid", "474183"),
				std::make_pair("user", "ratrun"),
				std::make_pair("version", "4"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "76228934"),
				std::make_pair("id", "172637093"),
				std::make_pair("timestamp", "2019-10-25T21:08:59Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "4"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228057"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996093"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996092"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228110"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "living_street"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer Reis"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "surface"),
						std::make_pair("v", "paving_stones"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639680615"),
				std::make_pair("lat", "41.4918547"),
				std::make_pair("lon", "2.1445290"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "4942457340"),
				std::make_pair("lat", "41.4918198"),
				std::make_pair("lon", "2.1444718"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "5"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "uncontrolled"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "81186376"),
				std::make_pair("id", "5415224817"),
				std::make_pair("lat", "41.4915371"),
				std::make_pair("lon", "2.1441859"),
				std::make_pair("timestamp", "2020-02-18T19:35:39Z"),
				std::make_pair("uid", "220932"),
				std::make_pair("user", "mor"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082957"),
				std::make_pair("id", "5108501271"),
				std::make_pair("lat", "41.4910557"),
				std::make_pair("lon", "2.1437261"),
				std::make_pair("timestamp", "2017-09-15T22:11:25Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "32580303"),
				std::make_pair("id", "1835227507"),
				std::make_pair("lat", "41.4910124"),
				std::make_pair("lon", "2.1436819"),
				std::make_pair("timestamp", "2015-07-12T12:33:46Z"),
				std::make_pair("uid", "203136"),
				std::make_pair("user", "dispiste"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "172637095"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "8"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639680615"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4942457340"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5415224817"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228057"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108501271"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227507"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer d'Orient"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "surface"),
						std::make_pair("v", "asphalt"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835227850"),
				std::make_pair("lat", "41.4913548"),
				std::make_pair("lon", "2.1424819"),
				std::make_pair("timestamp", "2012-07-23T11:13:46Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082957"),
				std::make_pair("id", "5108501273"),
				std::make_pair("lat", "41.4913031"),
				std::make_pair("lon", "2.1425502"),
				std::make_pair("timestamp", "2017-09-15T22:11:26Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835228020"),
				std::make_pair("lat", "41.4908511"),
				std::make_pair("lon", "2.1431225"),
				std::make_pair("timestamp", "2012-07-23T11:13:53Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835227944"),
				std::make_pair("lat", "41.4906160"),
				std::make_pair("lon", "2.1434390"),
				std::make_pair("timestamp", "2012-07-23T11:13:49Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835228075"),
				std::make_pair("lat", "41.4904895"),
				std::make_pair("lon", "2.1436535"),
				std::make_pair("timestamp", "2012-07-23T11:13:55Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "49849104"),
				std::make_pair("id", "4937700327"),
				std::make_pair("lat", "41.4903275"),
				std::make_pair("lon", "2.1439847"),
				std::make_pair("timestamp", "2017-06-26T23:14:57Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97834851"),
				std::make_pair("id", "5108501274"),
				std::make_pair("lat", "41.4899900"),
				std::make_pair("lon", "2.1446749"),
				std::make_pair("timestamp", "2021-01-20T11:47:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "5"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "tactile_paving"),
						std::make_pair("v", "yes"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "172637099"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "8"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227850"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108501273"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228020"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227944"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227935"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228075"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4937700327"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108501274"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "lanes"),
						std::make_pair("v", "1"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer de les Fontetes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "surface"),
						std::make_pair("v", "asphalt"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "5339014061"),
				std::make_pair("lat", "41.4902735"),
				std::make_pair("lon", "2.1450681"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921318"),
				std::make_pair("lat", "41.4902942"),
				std::make_pair("lon", "2.1450513"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97834851"),
				std::make_pair("id", "4943823132"),
				std::make_pair("lat", "41.4903447"),
				std::make_pair("lon", "2.1450105"),
				std::make_pair("timestamp", "2021-01-20T11:47:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "6"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "1835227732"),
				std::make_pair("lat", "41.4903717"),
				std::make_pair("lon", "2.1449829"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921226"),
				std::make_pair("lat", "41.4903894"),
				std::make_pair("lon", "2.1449680"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55431983"),
				std::make_pair("id", "1835227952"),
				std::make_pair("lat", "41.4904834"),
				std::make_pair("lon", "2.1448766"),
				std::make_pair("timestamp", "2018-01-14T14:10:22Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55431983"),
				std::make_pair("id", "1835227959"),
				std::make_pair("lat", "41.4905729"),
				std::make_pair("lon", "2.1447814"),
				std::make_pair("timestamp", "2018-01-14T14:10:22Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55431983"),
				std::make_pair("id", "1835228070"),
				std::make_pair("lat", "41.4906402"),
				std::make_pair("lon", "2.1446621"),
				std::make_pair("timestamp", "2018-01-14T14:10:22Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082957"),
				std::make_pair("id", "4937700329"),
				std::make_pair("lat", "41.4907541"),
				std::make_pair("lon", "2.1443886"),
				std::make_pair("timestamp", "2017-09-15T22:11:26Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "49849104"),
				std::make_pair("id", "4937700332"),
				std::make_pair("lat", "41.4909562"),
				std::make_pair("lon", "2.1438356"),
				std::make_pair("timestamp", "2017-06-26T23:14:57Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082957"),
				std::make_pair("id", "5108501272"),
				std::make_pair("lat", "41.4909868"),
				std::make_pair("lon", "2.1437519"),
				std::make_pair("timestamp", "2017-09-15T22:11:26Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835227397"),
				std::make_pair("lat", "41.4910761"),
				std::make_pair("lon", "2.1435731"),
				std::make_pair("timestamp", "2012-07-23T11:13:37Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "32580303"),
				std::make_pair("id", "3647319524"),
				std::make_pair("lat", "41.4913288"),
				std::make_pair("lon", "2.1432510"),
				std::make_pair("timestamp", "2015-07-12T12:33:45Z"),
				std::make_pair("uid", "203136"),
				std::make_pair("user", "dispiste"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082957"),
				std::make_pair("id", "5108501270"),
				std::make_pair("lat", "41.4916110"),
				std::make_pair("lon", "2.1428914"),
				std::make_pair("timestamp", "2017-09-15T22:11:25Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835228054"),
				std::make_pair("lat", "41.4916467"),
				std::make_pair("lon", "2.1428459"),
				std::make_pair("timestamp", "2012-07-23T11:13:54Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "172637147"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "10"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5339014061"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921318"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823132"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227732"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921226"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227952"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227959"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228070"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4937700329"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4937700332"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108501272"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227507"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227397"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "3647319524"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108501270"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228054"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "lanes"),
						std::make_pair("v", "1"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer de Gonz�lez"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "surface"),
						std::make_pair("v", "asphalt"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "81186376"),
				std::make_pair("id", "1835227930"),
				std::make_pair("lat", "41.4920690"),
				std::make_pair("lon", "2.1421715"),
				std::make_pair("timestamp", "2020-02-18T19:35:39Z"),
				std::make_pair("uid", "220932"),
				std::make_pair("user", "mor"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "108342831"),
				std::make_pair("id", "1835228065"),
				std::make_pair("lat", "41.4920645"),
				std::make_pair("lon", "2.1422417"),
				std::make_pair("timestamp", "2021-07-21T00:31:54Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "8"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "uncontrolled"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "tactile_paving"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "traffic_calming"),
						std::make_pair("v", "table"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "81186376"),
				std::make_pair("id", "1835227268"),
				std::make_pair("lat", "41.4919855"),
				std::make_pair("lon", "2.1431951"),
				std::make_pair("timestamp", "2020-02-18T19:35:39Z"),
				std::make_pair("uid", "220932"),
				std::make_pair("user", "mor"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "81186376"),
				std::make_pair("id", "1835227773"),
				std::make_pair("lat", "41.4919799"),
				std::make_pair("lon", "2.1432615"),
				std::make_pair("timestamp", "2020-02-18T19:35:39Z"),
				std::make_pair("uid", "220932"),
				std::make_pair("user", "mor"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "81186376"),
				std::make_pair("id", "1835227505"),
				std::make_pair("lat", "41.4919353"),
				std::make_pair("lon", "2.1438531"),
				std::make_pair("timestamp", "2020-02-18T19:35:39Z"),
				std::make_pair("uid", "220932"),
				std::make_pair("user", "mor"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "32580303"),
				std::make_pair("id", "3647319525"),
				std::make_pair("lat", "41.4919315"),
				std::make_pair("lon", "2.1439864"),
				std::make_pair("timestamp", "2015-07-12T12:33:45Z"),
				std::make_pair("uid", "203136"),
				std::make_pair("user", "dispiste"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835227753"),
				std::make_pair("lat", "41.4919078"),
				std::make_pair("lon", "2.1442302"),
				std::make_pair("timestamp", "2012-07-23T11:13:42Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697732"),
				std::make_pair("lat", "41.4918768"),
				std::make_pair("lon", "2.1443981"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "traffic_calming"),
						std::make_pair("v", "bump"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "1835227810"),
				std::make_pair("lat", "41.4918730"),
				std::make_pair("lon", "2.1444186"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "5"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "81186376"),
				std::make_pair("id", "1835227990"),
				std::make_pair("lat", "41.4918547"),
				std::make_pair("lon", "2.1445290"),
				std::make_pair("timestamp", "2020-02-18T19:35:39Z"),
				std::make_pair("uid", "220932"),
				std::make_pair("user", "mor"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835228050"),
				std::make_pair("lat", "41.4918174"),
				std::make_pair("lon", "2.1447076"),
				std::make_pair("timestamp", "2012-07-23T11:13:54Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52741210"),
				std::make_pair("id", "5108501267"),
				std::make_pair("lat", "41.4917618"),
				std::make_pair("lon", "2.1448918"),
				std::make_pair("timestamp", "2017-10-08T20:18:54Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "uncontrolled"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "12448708"),
				std::make_pair("id", "1835227762"),
				std::make_pair("lat", "41.4917210"),
				std::make_pair("lon", "2.1450268"),
				std::make_pair("timestamp", "2012-07-23T11:13:42Z"),
				std::make_pair("uid", "243992"),
				std::make_pair("user", "josepmunoz"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921323"),
				std::make_pair("lat", "41.4916158"),
				std::make_pair("lon", "2.1453959"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921322"),
				std::make_pair("lat", "41.4915907"),
				std::make_pair("lon", "2.1454843"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8326986404"),
				std::make_pair("lat", "41.4914948"),
				std::make_pair("lon", "2.1458179"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "traffic_signals"),
						std::make_pair("v", "signal"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697729"),
				std::make_pair("lat", "41.4914828"),
				std::make_pair("lon", "2.1458558"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "4943823129"),
				std::make_pair("lat", "41.4914696"),
				std::make_pair("lon", "2.1458978"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "5"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "tactile_paving"),
						std::make_pair("v", "yes"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97834851"),
				std::make_pair("id", "8326986405"),
				std::make_pair("lat", "41.4914640"),
				std::make_pair("lon", "2.1459185"),
				std::make_pair("timestamp", "2021-01-20T11:47:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "348686482"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "12"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227930"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228065"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227268"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227773"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227505"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "3647319525"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227753"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697732"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227810"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227990"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228050"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108501267"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227762"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921323"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921322"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8326986404"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697729"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823129"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8326986405"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "lanes"),
						std::make_pair("v", "1"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "lit"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "maxspeed"),
						std::make_pair("v", "50"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Passeig de les Ac�cies"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "source:maxspeed"),
						std::make_pair("v", "sign"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "surface"),
						std::make_pair("v", "asphalt"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55431739"),
				std::make_pair("id", "4937700328"),
				std::make_pair("lat", "41.4905594"),
				std::make_pair("lon", "2.1441763"),
				std::make_pair("timestamp", "2018-01-14T13:59:34Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "49849104"),
				std::make_pair("id", "503467851"),
				std::make_pair("timestamp", "2017-06-26T23:14:57Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4937700327"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4937700328"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "steps"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55431739"),
				std::make_pair("id", "5338988311"),
				std::make_pair("lat", "41.4905775"),
				std::make_pair("lon", "2.1441268"),
				std::make_pair("timestamp", "2018-01-14T13:59:34Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "49849104"),
				std::make_pair("id", "4937700330"),
				std::make_pair("lat", "41.4906967"),
				std::make_pair("lon", "2.1439253"),
				std::make_pair("timestamp", "2017-06-26T23:14:57Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "49849104"),
				std::make_pair("id", "4937700331"),
				std::make_pair("lat", "41.4908474"),
				std::make_pair("lon", "2.1438073"),
				std::make_pair("timestamp", "2017-06-26T23:14:57Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "57657535"),
				std::make_pair("id", "5516077500"),
				std::make_pair("lat", "41.4908604"),
				std::make_pair("lon", "2.1438095"),
				std::make_pair("timestamp", "2018-03-30T11:02:44Z"),
				std::make_pair("uid", "5126253"),
				std::make_pair("user", "jqngarcia"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "57657535"),
				std::make_pair("id", "503467852"),
				std::make_pair("timestamp", "2018-03-30T11:03:00Z"),
				std::make_pair("uid", "5126253"),
				std::make_pair("user", "jqngarcia"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4937700328"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5338988311"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4937700330"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4937700331"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5516077500"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4937700332"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "path"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55431739"),
				std::make_pair("id", "5338988312"),
				std::make_pair("lat", "41.4906946"),
				std::make_pair("lon", "2.1442862"),
				std::make_pair("timestamp", "2018-01-14T13:59:34Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "55431739"),
				std::make_pair("id", "503467853"),
				std::make_pair("timestamp", "2018-01-14T13:59:34Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4937700328"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5338988312"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4937700329"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "path"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "5155645061"),
				std::make_pair("lat", "41.4912003"),
				std::make_pair("lon", "2.1457333"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "49922626"),
				std::make_pair("id", "4942457338"),
				std::make_pair("lat", "41.4916581"),
				std::make_pair("lon", "2.1446049"),
				std::make_pair("timestamp", "2017-06-29T15:39:49Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "49922626"),
				std::make_pair("id", "4942457339"),
				std::make_pair("lat", "41.4917198"),
				std::make_pair("lon", "2.1446255"),
				std::make_pair("timestamp", "2017-06-29T15:39:49Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "504029810"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155645061"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4942457338"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4942457339"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4942457340"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "footway"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52736941"),
				std::make_pair("id", "5155645060"),
				std::make_pair("lat", "41.4914088"),
				std::make_pair("lon", "2.1458667"),
				std::make_pair("timestamp", "2017-10-08T17:25:25Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697727"),
				std::make_pair("lat", "41.4912195"),
				std::make_pair("lon", "2.1457248"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52736941"),
				std::make_pair("id", "5155645062"),
				std::make_pair("lat", "41.4917584"),
				std::make_pair("lon", "2.1446570"),
				std::make_pair("timestamp", "2017-10-08T17:25:25Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "531080785"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155645060"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697727"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4942457338"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155645062"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155645060"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "area"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "pedestrian"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55431739"),
				std::make_pair("id", "5338988305"),
				std::make_pair("lat", "41.4908763"),
				std::make_pair("lon", "2.1437630"),
				std::make_pair("timestamp", "2018-01-14T13:59:33Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55431739"),
				std::make_pair("id", "5338988306"),
				std::make_pair("lat", "41.4906714"),
				std::make_pair("lon", "2.1443531"),
				std::make_pair("timestamp", "2018-01-14T13:59:33Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55431739"),
				std::make_pair("id", "5338988307"),
				std::make_pair("lat", "41.4905398"),
				std::make_pair("lon", "2.1442297"),
				std::make_pair("timestamp", "2018-01-14T13:59:34Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55431739"),
				std::make_pair("id", "5338988308"),
				std::make_pair("lat", "41.4906041"),
				std::make_pair("lon", "2.1440540"),
				std::make_pair("timestamp", "2018-01-14T13:59:34Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55431739"),
				std::make_pair("id", "5338988309"),
				std::make_pair("lat", "41.4906895"),
				std::make_pair("lon", "2.1439092"),
				std::make_pair("timestamp", "2018-01-14T13:59:34Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55431739"),
				std::make_pair("id", "5338988310"),
				std::make_pair("lat", "41.4908563"),
				std::make_pair("lon", "2.1437483"),
				std::make_pair("timestamp", "2018-01-14T13:59:34Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "57657535"),
				std::make_pair("id", "553054962"),
				std::make_pair("timestamp", "2018-03-30T11:03:01Z"),
				std::make_pair("uid", "5126253"),
				std::make_pair("user", "jqngarcia"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5338988305"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5516077500"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5338988312"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5338988306"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5338988307"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4937700328"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5338988311"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5338988308"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5338988309"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5338988310"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5338988305"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "area"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "pedestrian"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996075"),
				std::make_pair("lat", "41.4904932"),
				std::make_pair("lon", "2.1454327"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996076"),
				std::make_pair("lat", "41.4906074"),
				std::make_pair("lon", "2.1454959"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "720025508"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996075"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996076"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "footway"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996078"),
				std::make_pair("lat", "41.4904574"),
				std::make_pair("lon", "2.1454404"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "720025509"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996075"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996078"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996079"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "footway"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996081"),
				std::make_pair("lat", "41.4903813"),
				std::make_pair("lon", "2.1455914"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "76228934"),
				std::make_pair("id", "6917023978"),
				std::make_pair("lat", "41.4904852"),
				std::make_pair("lon", "2.1455878"),
				std::make_pair("timestamp", "2019-10-25T21:08:59Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996083"),
				std::make_pair("lat", "41.4906951"),
				std::make_pair("lon", "2.1455806"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996091"),
				std::make_pair("lat", "41.4907640"),
				std::make_pair("lon", "2.1456588"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996084"),
				std::make_pair("lat", "41.4907886"),
				std::make_pair("lon", "2.1456869"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996090"),
				std::make_pair("lat", "41.4907902"),
				std::make_pair("lon", "2.1458307"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996085"),
				std::make_pair("lat", "41.4907932"),
				std::make_pair("lon", "2.1461121"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "76228934"),
				std::make_pair("id", "720025512"),
				std::make_pair("timestamp", "2019-10-25T21:08:59Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996081"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6917023978"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996083"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996091"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996084"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996090"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996085"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996086"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "footway"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996088"),
				std::make_pair("lat", "41.4908004"),
				std::make_pair("lon", "2.1456486"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "6757996089"),
				std::make_pair("lat", "41.4908030"),
				std::make_pair("lon", "2.1458295"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "720025513"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996087"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996088"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996089"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996090"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "footway"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "73899403"),
				std::make_pair("id", "720025514"),
				std::make_pair("timestamp", "2019-08-29T21:30:55Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996088"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996091"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "steps"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "76228934"),
				std::make_pair("id", "738669298"),
				std::make_pair("timestamp", "2019-10-25T21:08:59Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996075"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6917023978"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "footway"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "108342831"),
				std::make_pair("id", "1835227424"),
				std::make_pair("lat", "41.4895332"),
				std::make_pair("lon", "2.1445089"),
				std::make_pair("timestamp", "2021-07-21T00:31:54Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "9"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919700"),
				std::make_pair("lat", "41.4897626"),
				std::make_pair("lon", "2.1446923"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919701"),
				std::make_pair("lat", "41.4900420"),
				std::make_pair("lon", "2.1449281"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921222"),
				std::make_pair("lat", "41.4900966"),
				std::make_pair("lon", "2.1449747"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919716"),
				std::make_pair("lat", "41.4901194"),
				std::make_pair("lon", "2.1449942"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97834851"),
				std::make_pair("id", "8329921223"),
				std::make_pair("lat", "41.4901757"),
				std::make_pair("lon", "2.1450400"),
				std::make_pair("timestamp", "2021-01-20T11:47:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919702"),
				std::make_pair("lat", "41.4902872"),
				std::make_pair("lon", "2.1451375"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921227"),
				std::make_pair("lat", "41.4903547"),
				std::make_pair("lon", "2.1451918"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921301"),
				std::make_pair("lat", "41.4904160"),
				std::make_pair("lon", "2.1452412"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921314"),
				std::make_pair("lat", "41.4904251"),
				std::make_pair("lon", "2.1452485"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921228"),
				std::make_pair("lat", "41.4905152"),
				std::make_pair("lon", "2.1453211"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919703"),
				std::make_pair("lat", "41.4905422"),
				std::make_pair("lon", "2.1453428"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919704"),
				std::make_pair("lat", "41.4906945"),
				std::make_pair("lon", "2.1454576"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921247"),
				std::make_pair("lat", "41.4908118"),
				std::make_pair("lon", "2.1455548"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "traffic_signals"),
						std::make_pair("v", "signal"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921240"),
				std::make_pair("lat", "41.4908287"),
				std::make_pair("lon", "2.1455688"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97834851"),
				std::make_pair("id", "8329921246"),
				std::make_pair("lat", "41.4908704"),
				std::make_pair("lon", "2.1456033"),
				std::make_pair("timestamp", "2021-01-20T11:47:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919705"),
				std::make_pair("lat", "41.4909130"),
				std::make_pair("lon", "2.1456385"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919706"),
				std::make_pair("lat", "41.4911619"),
				std::make_pair("lon", "2.1458367"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921241"),
				std::make_pair("lat", "41.4912612"),
				std::make_pair("lon", "2.1459158"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921249"),
				std::make_pair("lat", "41.4912907"),
				std::make_pair("lon", "2.1459393"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "traffic_signals"),
						std::make_pair("v", "signal"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97834851"),
				std::make_pair("id", "8329921251"),
				std::make_pair("lat", "41.4913613"),
				std::make_pair("lon", "2.1459955"),
				std::make_pair("timestamp", "2021-01-20T11:47:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919707"),
				std::make_pair("lat", "41.4913827"),
				std::make_pair("lon", "2.1460126"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919708"),
				std::make_pair("lat", "41.4914063"),
				std::make_pair("lon", "2.1460309"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921317"),
				std::make_pair("lat", "41.4914154"),
				std::make_pair("lon", "2.1460403"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97595691"),
				std::make_pair("id", "8326986410"),
				std::make_pair("lat", "41.4914816"),
				std::make_pair("lon", "2.1461088"),
				std::make_pair("timestamp", "2021-01-16T09:09:43Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "896122065"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227424"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919700"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919701"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921222"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919716"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921223"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919702"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921227"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921301"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921314"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921228"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919703"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919704"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921247"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921240"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921246"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919705"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919706"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921241"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921249"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921251"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919707"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919708"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921317"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8326986410"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Avinguda de la Primavera"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97595691"),
				std::make_pair("id", "8326986408"),
				std::make_pair("lat", "41.4915022"),
				std::make_pair("lon", "2.1460288"),
				std::make_pair("timestamp", "2021-01-16T09:09:43Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921321"),
				std::make_pair("lat", "41.4914342"),
				std::make_pair("lon", "2.1459777"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921327"),
				std::make_pair("lat", "41.4913805"),
				std::make_pair("lon", "2.1459373"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97834851"),
				std::make_pair("id", "8329921250"),
				std::make_pair("lat", "41.4913717"),
				std::make_pair("lon", "2.1459306"),
				std::make_pair("timestamp", "2021-01-20T11:47:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919709"),
				std::make_pair("lat", "41.4912462"),
				std::make_pair("lon", "2.1458363"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919710"),
				std::make_pair("lat", "41.4910049"),
				std::make_pair("lon", "2.1456452"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921248"),
				std::make_pair("lat", "41.4909624"),
				std::make_pair("lon", "2.1456094"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "traffic_signals"),
						std::make_pair("v", "signal"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97834851"),
				std::make_pair("id", "8329921245"),
				std::make_pair("lat", "41.4908966"),
				std::make_pair("lon", "2.1455540"),
				std::make_pair("timestamp", "2021-01-20T11:47:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921235"),
				std::make_pair("lat", "41.4907399"),
				std::make_pair("lon", "2.1454220"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919711"),
				std::make_pair("lat", "41.4905717"),
				std::make_pair("lon", "2.1452803"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919712"),
				std::make_pair("lat", "41.4903783"),
				std::make_pair("lon", "2.1451197"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921225"),
				std::make_pair("lat", "41.4903555"),
				std::make_pair("lon", "2.1451012"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921234"),
				std::make_pair("lat", "41.4903253"),
				std::make_pair("lon", "2.1450766"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97834851"),
				std::make_pair("id", "8329921242"),
				std::make_pair("lat", "41.4901927"),
				std::make_pair("lon", "2.1449688"),
				std::make_pair("timestamp", "2021-01-20T11:47:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919713"),
				std::make_pair("lat", "41.4901446"),
				std::make_pair("lon", "2.1449297"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921219"),
				std::make_pair("lat", "41.4899790"),
				std::make_pair("lon", "2.1447887"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921218"),
				std::make_pair("lat", "41.4899226"),
				std::make_pair("lon", "2.1447407"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919714"),
				std::make_pair("lat", "41.4898819"),
				std::make_pair("lon", "2.1447061"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329919715"),
				std::make_pair("lat", "41.4896749"),
				std::make_pair("lon", "2.1445500"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631754"),
				std::make_pair("id", "8329903240"),
				std::make_pair("lat", "41.4895890"),
				std::make_pair("lon", "2.1444852"),
				std::make_pair("timestamp", "2021-01-17T10:26:14Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "traffic_signals"),
						std::make_pair("v", "signal"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631754"),
				std::make_pair("id", "8329903239"),
				std::make_pair("lat", "41.4895714"),
				std::make_pair("lon", "2.1444720"),
				std::make_pair("timestamp", "2021-01-17T10:26:14Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "108342831"),
				std::make_pair("id", "5111264410"),
				std::make_pair("lat", "41.4895500"),
				std::make_pair("lon", "2.1444558"),
				std::make_pair("timestamp", "2021-07-21T00:31:54Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "7"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "97779722"),
				std::make_pair("id", "896122066"),
				std::make_pair("timestamp", "2021-01-19T15:56:43Z"),
				std::make_pair("uid", "474183"),
				std::make_pair("user", "ratrun"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8326986408"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921321"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921327"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921250"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919709"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919710"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921248"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228110"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921245"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921235"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919711"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919712"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921225"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921234"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921318"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921242"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919713"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921219"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921218"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919714"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329919715"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329903240"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329903239"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5111264410"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Avinguda de la Primavera"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97834851"),
				std::make_pair("id", "8329921243"),
				std::make_pair("lat", "41.4903872"),
				std::make_pair("lon", "2.1453688"),
				std::make_pair("timestamp", "2021-01-20T11:47:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921229"),
				std::make_pair("lat", "41.4904179"),
				std::make_pair("lon", "2.1453493"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631792"),
				std::make_pair("id", "8329902628"),
				std::make_pair("lat", "41.4904704"),
				std::make_pair("lon", "2.1453341"),
				std::make_pair("timestamp", "2021-01-17T10:27:38Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "give_way"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "97631792"),
				std::make_pair("id", "896122074"),
				std::make_pair("timestamp", "2021-01-17T10:27:38Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921230"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921243"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921229"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329902628"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921228"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer de la Pineda"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921236"),
				std::make_pair("lat", "41.4906654"),
				std::make_pair("lon", "2.1453960"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631792"),
				std::make_pair("id", "8329902630"),
				std::make_pair("lat", "41.4904996"),
				std::make_pair("lon", "2.1452578"),
				std::make_pair("timestamp", "2021-01-17T10:27:38Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "stop"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921237"),
				std::make_pair("lat", "41.4904791"),
				std::make_pair("lon", "2.1452407"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921238"),
				std::make_pair("lat", "41.4904520"),
				std::make_pair("lon", "2.1452302"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921300"),
				std::make_pair("lat", "41.4904175"),
				std::make_pair("lon", "2.1452536"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921239"),
				std::make_pair("lat", "41.4903952"),
				std::make_pair("lon", "2.1452687"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "97631792"),
				std::make_pair("id", "896122076"),
				std::make_pair("timestamp", "2021-01-17T10:27:38Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921235"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921236"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329902630"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921237"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921238"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921314"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921300"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921239"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823131"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Avinguda de la Primavera"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "896122077"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6757996087"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921240"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "footway"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921324"),
				std::make_pair("lat", "41.4915681"),
				std::make_pair("lon", "2.1454725"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921328"),
				std::make_pair("lat", "41.4914759"),
				std::make_pair("lon", "2.1458065"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "traffic_signals"),
						std::make_pair("v", "signal"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697728"),
				std::make_pair("lat", "41.4914649"),
				std::make_pair("lon", "2.1458462"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921325"),
				std::make_pair("lat", "41.4914528"),
				std::make_pair("lon", "2.1458901"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921329"),
				std::make_pair("lat", "41.4914434"),
				std::make_pair("lon", "2.1459023"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97834851"),
				std::make_pair("id", "8329921330"),
				std::make_pair("lat", "41.4914387"),
				std::make_pair("lon", "2.1459084"),
				std::make_pair("timestamp", "2021-01-20T11:47:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "97631697"),
				std::make_pair("id", "8329921326"),
				std::make_pair("lat", "41.4914236"),
				std::make_pair("lon", "2.1459281"),
				std::make_pair("timestamp", "2021-01-17T10:24:16Z"),
				std::make_pair("uid", "10261351"),
				std::make_pair("user", "expositocv"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "896122094"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921323"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921324"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921328"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697728"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921325"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921329"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921330"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921326"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8329921327"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Passeig de les acacies"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639680616"),
				std::make_pair("lat", "41.4918773"),
				std::make_pair("lon", "2.1445878"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697717"),
				std::make_pair("lat", "41.4919113"),
				std::make_pair("lon", "2.1444344"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697718"),
				std::make_pair("lat", "41.4918324"),
				std::make_pair("lon", "2.1444119"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "931949254"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639680616"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697717"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227810"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697718"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4942457340"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "footway"),
					}
				),
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697719"),
				std::make_pair("lat", "41.4918162"),
				std::make_pair("lon", "2.1449492"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697720"),
				std::make_pair("lat", "41.4917385"),
				std::make_pair("lon", "2.1452286"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697721"),
				std::make_pair("lat", "41.4916126"),
				std::make_pair("lon", "2.1456583"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697722"),
				std::make_pair("lat", "41.4915384"),
				std::make_pair("lon", "2.1458859"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697723"),
				std::make_pair("lat", "41.4914352"),
				std::make_pair("lon", "2.1458301"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697724"),
				std::make_pair("lat", "41.4914132"),
				std::make_pair("lon", "2.1458859"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697725"),
				std::make_pair("lat", "41.4913842"),
				std::make_pair("lon", "2.1458742"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "8639697726"),
				std::make_pair("lat", "41.4912456"),
				std::make_pair("lon", "2.1457682"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest1->push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "103131715"),
				std::make_pair("id", "931949255"),
				std::make_pair("timestamp", "2021-04-18T10:44:07Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639680616"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697719"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697720"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697721"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697722"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697729"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697728"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697723"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697724"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697725"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "8639697726"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155645061"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "footway"),
					}
				),
			}
		}
	);

}

void XML4OSMUtilModificat::retornaConjuntTest1(std::vector<XmlElement>& out) {
	out = *(m_conjuntTest1);
}

XML4OSMUtilModificat::~XML4OSMUtilModificat()
{
	delete m_conjuntTest1;
}

