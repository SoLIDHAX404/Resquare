int skinlistid[] = { 2, 3, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 21, 22, 25, 26, 27, 28, 30, 32, 33, 34, 36, 37, 38, 39, 40, 41, 42, 43, 44, 46, 47, 48, 51, 59, 60, 61, 62, 67, 70, 71, 72, 73, 74, 75, 76, 77, 78, 83, 84, 90, 92, 93, 95, 96, 98, 99, 100, 101, 102, 104, 107, 110, 111, 116, 119, 122, 124, 125, 135, 136, 141, 143, 147, 148, 149, 151, 153, 154, 155, 156, 157, 158, 159, 162, 164, 165, 166, 167, 168, 169, 170, 171, 172, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 325, 326, 327, 328, 329, 330, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 409, 410, 411, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 879, 880, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1055, 1056, 1058, 1059, 1060, 1061, 1063, 1064, 1065, 1066, 1067, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 10006, 10007, 10008, 10009, 10010, 10013, 10015, 10016, 10018, 10019, 10021, 10024, 10026, 10027, 10028, 10030, 10033, 10034, 10035, 10036, 10037, 10038, 10039, 10040, 10041, 10042, 10043, 10044, 10045, 10046, 10047, 10048, 10049, 10050, 10051, 10052, 10053, 10054, 10055, 10056, 10057, 10058, 10059, 10060, 10061, 10062, 10063, 10064, 10065, 10066, 10067, 10068, 10069, 10070, 10071, 10072, 10073, 10074, 10075, 10076, 10077, 10078, 10079, 10080, 10081, 10082, 10083, 10084, 10085, 10086, 10087, 1008 };std::string skinlist[] = { "2: Groundwater", "3: Candy Apple", "5: Forest DDPAT", "6: Arctic Camo", "8: Desert Storm", "9: Bengal Tiger", "10: Copperhead", "11: Skulls", "12: Crimson Web", "13: Blue Streak", "14: Red Laminate", "15: Gunsmoke", "16: Jungle Tiger", "17: Urban DDPAT", "20: Virus", "21: Granite Marbleized", "22: Contrast Spray", "25: Forest Leaves", "26: Lichen Dashed", "27: Bone Mask", "28: Anodized Navy", "30: Snake Camo", "32: Silver", "33: Hot Rod", "34: Metallic DDPAT", "36: Ossified", "37: Blaze", "38: Fade", "39: Bulldozer", "40: Night", "41: Copper", "42: Blue Steel", "43: Stained", "44: Case Hardened", "46: Contractor", "47: Colony", "48: Dragon Tattoo", "51: Lightning Strike", "59: Slaughter", "60: Dark Water", "61: Hypnotic", "62: Bloomstick", "67: Cold Blooded", "70: Carbon Fiber", "71: Scorpion", "72: Safari Mesh", "73: Wings", "74: Polar Camo", "75: Blizzard Marbleized", "76: Winter Forest", "77: Boreal Forest", "78: Forest Night", "83: Orange DDPAT", "84: Pink DDPAT", "90: Mudder", "92: Cyanospatter", "93: Caramel", "95: Grassland", "96: Blue Spruce", "98: Ultraviolet", "99: Sand Dune", "100: Storm", "101: Tornado", "102: Whiteout", "104: Grassland Leaves", "107: Polar Mesh", "110: Condemned", "111: Glacier Mesh", "116: Sand Mesh", "119: Sage Spray", "122: Jungle Spray", "124: Sand Spray", "125: X-Ray", "135: Urban Perforated", "136: Waves Perforated", "141: Orange Peel", "143: Urban Masked", "147: Jungle Dashed", "148: Sand Dashed", "149: Urban Dashed", "151: Jungle", "153: Demolition", "154: Afterimage", "155: Bullet Rain", "156: Death by Kitty", "157: Palm", "158: Walnut", "159: Brass", "162: Splash", "164: Modern Hunter", "165: Splash Jam", "166: Blaze Orange", "167: Radiation Hazard", "168: Nuclear Threat", "169: Fallout Warning", "170: Predator", "171: Irradiated Alert", "172: Black Laminate", "174: BOOM", "175: Scorched", "176: Faded Zebra", "177: Memento", "178: Doomkitty", "179: Nuclear Threat", "180: Fire Serpent", "181: Corticera", "182: Emerald Dragon", "183: Overgrowth", "184: Corticera", "185: Golden Koi", "186: Wave Spray", "187: Zirka", "188: Graven", "189: Bright Water", "190: Black Limba", "191: Tempest", "192: Shattered", "193: Bone Pile", "194: Spitfire", "195: Demeter", "196: Emerald", "197: Anodized Navy", "198: Hazard", "199: Dry Season", "200: Mayan Dreams", "201: Palm", "202: Jungle DDPAT", "203: Rust Coat", "204: Mosaico", "205: Jungle", "206: Tornado", "207: Facets", "208: Sand Dune", "209: Groundwater", "210: Anodized Gunmetal", "211: Ocean Foam", "212: Graphite", "213: Ocean Foam", "214: Graphite", "215: X-Ray", "216: Blue Titanium", "217: Blood Tiger", "218: Hexane", "219: Hive", "220: Hemoglobin", "221: Serum", "222: Blood in the Water", "223: Nightshade", "224: Water Sigil", "225: Ghost Camo", "226: Blue Laminate", "227: Electric Hive", "228: Blind Spot", "229: Azure Zebra", "230: Steel Disruption", "231: Cobalt Disruption", "232: Crimson Web", "233: Tropical Storm", "234: Ash Wood", "235: VariCamo", "236: Night Ops", "237: Urban Rubble", "238: VariCamo Blue", "240: CaliCamo", "241: Hunting Blind", "242: Army Mesh", "243: Gator Mesh", "244: Teardown", "245: Army Recon", "246: Amber Fade", "247: Damascus Steel", "248: Red Quartz", "249: Cobalt Quartz", "250: Full Stop", "251: Pit Viper", "252: Silver Quartz", "253: Acid Fade", "254: Nitro", "255: Asiimov", "256: The Kraken", "257: Guardian", "258: Mehndi", "259: Redline", "260: Pulse", "261: Marina", "262: Rose Iron", "263: Rising Skull", "264: Sandstorm", "265: Kami", "266: Magma", "267: Cobalt Halftone", "268: Tread Plate", "269: The Fuschia Is Now", "270: Victoria", "271: Undertow", "272: Titanium Bit", "273: Heirloom", "274: Copper Galaxy", "275: Red FragCam", "276: Panther", "277: Stainless", "278: Blue Fissure", "279: Asiimov", "280: Chameleon", "281: Corporal", "282: Redline", "283: Trigon", "284: Heat", "285: Terrain", "286: Antique", "287: Pulse", "288: Sergeant", "289: Sandstorm", "290: Guardian", "291: Heaven Guard", "293: Death Rattle", "294: Green Apple", "295: Franklin", "296: Meteorite", "297: Tuxedo", "298: Army Sheen", "299: Caged Steel", "300: Emerald Pinstripe", "301: Atomic Alloy", "302: Vulcan", "303: Isaac", "304: Slashed", "305: Torque", "306: Antique", "307: Retribution", "308: Kami", "309: Howl", "310: Curse", "311: Desert Warfare", "312: Cyrex", "313: Orion", "314: Heaven Guard", "315: Poison Dart", "316: Jaguar", "317: Bratatat", "318: Road Rash", "319: Detour", "320: Red Python", "321: Master Piece", "322: Nitro", "323: Rust Coat", "325: Chalice", "326: Knight", "327: Chainmail", "328: Hand Cannon", "329: Dark Age", "330: Briar", "332: Royal Blue", "333: Indigo", "334: Twist", "335: Module", "336: Desert-Strike", "337: Tatter", "338: Pulse", "339: Caiman", "340: Jet Set", "341: First Class", "342: Leather", "343: Commuter", "344: Dragon Lore", "345: First Class", "346: Coach Class", "347: Pilot", "348: Red Leather", "349: Osiris", "350: Tigris", "351: Conspiracy", "352: Fowl Play", "353: Water Elemental", "354: Urban Hazard", "355: Desert-Strike", "356: Koi", "357: Ivory", "358: Supernova", "359: Asiimov", "360: Cyrex", "361: Abyss", "362: Labyrinth", "363: Traveler", "364: Business Class", "365: Olive Plaid", "366: Green Plaid", "367: Reactor", "368: Setting Sun", "369: Nuclear Waste", "370: Bone Machine", "371: Styx", "372: Nuclear Garden", "373: Contamination", "374: Toxic", "375: Radiation Hazard", "376: Chemical Green", "377: Hot Shot", "378: Fallout Warning", "379: Cerberus", "380: Wasteland Rebel", "381: Grinder", "382: Murky", "383: Basilisk", "384: Griffin", "385: Firestarter", "386: Dart", "387: Urban Hazard", "388: Cartel", "389: Fire Elemental", "390: Highwayman", "391: Cardiac", "392: Delusion", "393: Tranquility", "394: Cartel", "395: Man-o-war", "396: Urban Shock", "397: Naga", "398: Chatterbox", "399: Catacombs", "400: (Dragon King)", "401: System Lock", "402: Malachite", "403: Deadly Poison", "404: Muertos", "405: Serenity", "406: Grotto", "407: Quicksilver", "409: Tiger Tooth", "410: Damascus Steel", "411: Damascus Steel", "413: Marble Fade", "414: Rust Coat", "415: Doppler", "416: Doppler", "417: Doppler", "418: Doppler", "419: Doppler", "420: Doppler", "421: Doppler", "422: Elite Build", "423: Armor Core", "424: Worm God", "425: Bronze Deco", "426: Valence", "427: Monkey Business", "428: Eco", "429: Djinn", "430: Hyper Beast", "431: Heat", "432: Man-o-war", "433: Neon Rider", "434: Origami", "435: Pole Position", "436: Grand Prix", "437: Twilight Galaxy", "438: Chronos", "439: Hades", "440: Icarus Fell", "441: Minotaurs Labyrinth", "442: Asterion", "443: Pathfinder", "444: Daedalus", "445: Hot Rod", "446: Medusa", "447: Duelist", "448: Pandoras Box", "449: Poseidon", "450: Moon in Libra", "451: Sun in Leo", "452: Shipping Forecast", "453: Emerald", "454: Para Green", "455: Akihabara Accept", "456: Hydroponic", "457: Bamboo Print", "458: Bamboo Shadow", "459: Bamboo Forest", "460: Aqua Terrace", "462: Counter Terrace", "463: Terrace", "464: Neon Kimono", "465: Orange Kimono", "466: Crimson Kimono", "467: Mint Kimono", "468: Midnight Storm", "469: Sunset Storm", "470: Sunset Storm", "471: Daybreak", "472: Impact Drill", "473: Seabird", "474: Aquamarine Revenge", "475: Hyper Beast", "476: Yellow Jacket", "477: Neural Net", "478: Rocket Pop", "479: Bunsen Burner", "480: Evil Daimyo", "481: Nemesis", "482: Ruby Poison Dart", "483: Loudmouth", "484: Ranger", "485: Handgun", "486: Elite Build", "487: Cyrex", "488: Riot", "489: Torque", "490: Frontside Misty", "491: Dualing Dragons", "492: Survivor Z", "493: Flux", "494: Stone Cold", "495: Wraiths", "496: Nebula Crusader", "497: Golden Coil", "498: Rangeen", "499: Cobalt Core", "500: Special Delivery", "501: Wingshot", "502: Green Marine", "503: Big Iron", "504: Kill Confirmed", "505: Scumbria", "506: Point Disarray", "507: Ricochet", "508: Fuel Rod", "509: Corinthian", "510: Retrobution", "511: The Executioner", "512: Royal Paladin", "514: Power Loader", "515: Imperial", "516: Shapewood", "517: Yorick", "518: Outbreak", "519: Tiger Moth", "520: Avalanche", "521: Teclu Burner", "522: Fade", "523: Amber Fade", "524: Fuel Injector", "525: Elite Build", "526: Photic Zone", "527: Kumicho Dragon", "528: Cartel", "529: Valence", "530: Triumvirate", "532: Royal Legion", "533: The Battlestar", "534: Lapis Gator", "535: Praetorian", "536: Impire", "537: Hyper Beast", "538: Necropos", "539: Jambiya", "540: Lead Conduit", "541: Fleet Flock", "542: Judgement of Anubis", "543: Red Astor", "544: Ventilators", "545: Orange Crash", "546: Firefight", "547: Spectre", "548: Chanticos Fire", "549: Bioleak", "550: Oceanic", "551: Asiimov", "552: Fubar", "553: Atlas", "554: Ghost Crusader", "555: Re-Entry", "556: Primal Saber", "557: Black Tie", "558: Lore", "559: Lore", "560: Lore", "561: Lore", "562: Lore", "563: Black Laminate", "564: Black Laminate", "565: Black Laminate", "566: Black Laminate", "567: Black Laminate", "568: Gamma Doppler", "569: Gamma Doppler", "570: Gamma Doppler", "571: Gamma Doppler", "572: Gamma Doppler", "573: Autotronic", "574: Autotronic", "575: Autotronic", "576: Autotronic", "577: Autotronic", "578: Bright Water", "579: Bright Water", "580: Freehand", "581: Freehand", "582: Freehand", "583: Aristocrat", "584: Phobos", "585: Violent Daimyo", "586: Wasteland Rebel", "587: Mecha Industries", "588: Desolate Space", "589: Carnivore", "590: Exo", "591: Imperial Dragon", "592: Iron Clad", "593: Chopper", "594: Harvester", "595: Reboot", "596: Limelight", "597: Bloodsport", "598: Aerial", "599: Ice Cap", "600: Neon Revolution", "601: Syd Mead", "602: Imprint", "603: Directive", "604: Roll Cage", "605: Scumbria", "606: Ventilator", "607: Weasel", "608: Petroglyph", "609: Airlock", "610: Dazzle", "611: Grim", "612: Powercore", "613: Triarch", "614: Fuel Injector", "615: Briefing", "616: Slipstream", "617: Doppler", "618: Doppler", "619: Doppler", "620: Ultraviolet", "621: Ultraviolet", "622: Polymer", "623: Ironwork", "624: Dragonfire", "625: Royal Consorts", "626: Mecha Industries", "627: Cirrus", "628: Stinger", "629: Black Sand", "630: Sand Scale", "631: Flashback", "632: Buzz Kill", "633: Sonar", "634: Gila", "635: Turf", "636: Shallow Grave", "637: Cyrex", "638: Wasteland Princess", "639: Bloodsport", "640: Fever Dream", "641: Jungle Slipstream", "642: Blueprint", "643: Xiangliu", "644: Decimator", "645: Oxide Blaze", "646: Capillary", "647: Crimson Tsunami", "648: Emerald Poison Dart", "649: Akoben", "650: Ripple", "651: Last Dive", "652: Scaffold", "653: Neo-Noir", "654: Seasons", "655: Zander", "656: Orbit Mk01", "657: Blueprint", "658: Cobra Strike", "659: Macabre", "660: Hyper Beast", "661: Sugar Rush", "662: Oni Taiji", "663: Briefing", "664: Hellfire", "665: Aloha", "666: Hard Water", "667: Woodsman", "668: Red Rock", "669: Death Grip", "670: Deaths Head", "671: Cut Out", "672: Metal Flowers", "673: Morris", "674: Triqua", "675: The Empress", "676: High Roller", "677: Hunter", "678: See Ya Later", "679: Goo", "680: Off World", "681: Leaded Glass", "682: Oceanic", "683: Llama Cannon", "684: Cracked Opal", "685: Jungle Slipstream", "686: Phantom", "687: Tacticat", "688: Exposure", "689: Ziggy", "690: Stymphalian", "691: Mortis", "692: Night Riot", "693: Flame Test", "694: Moonrise", "695: Neo-Noir", "696: Bloodsport", "697: Black Sand", "698: Lionfish", "699: Wild Six", "700: Urban Hazard", "701: Grip", "702: Aloha", "703: SWAG-7", "704: Arctic Wolf", "705: Cortex", "706: Oxide Blaze", "707: Neon Rider", "708: Amber Slipstream", "709: Eco", "710: Shred", "711: Code Red", "712: High Seas", "713: Warhawk", "714: Nightmare", "715: Capillary", "716: Toy Soldier", "717: Traction", "718: PAW", "719: Powercore", "720: Devourer", "721: Survivalist", "722: Snek-9", "723: Eye of Athena", "724: Wild Lotus", "725: Day Lily", "726: Sunset Lily", "727: Midnight Lily", "728: Teal Blossom", "729: Crimson Blossom", "730: Dark Blossom", "731: Banana Leaf", "732: Synth Leaf", "733: Rust Leaf", "734: Wild Lily", "735: Night Stripe", "736: The Prince", "737: Cinquedea", "738: Orange Murano", "739: Violet Murano", "740: Navy Murano", "741: Dark Filigree", "742: Red Filigree", "743: Orange Filigree", "744: Baroque Red", "745: Baroque Purple", "746: Baroque Orange", "747: Twin Turbo", "748: Calf Skin", "749: Vino Primo", "750: Integrale", "751: Hand Brake", "752: Fade", "753: Dirt Drop", "754: Rust Coat", "755: Slide", "756: Gungnir", "757: Emerald Jörmungandr", "758: Flame Jörmungandr", "759: Astral Jörmungandr", "760: Frost Borre", "761: Copper Borre", "762: Red Stone", "763: Mjölnir", "764: Fennec Fox", "765: Desert Blossom", "775: Facility Sketch", "776: Facility Negative", "777: Facility Draft", "778: Facility Dark", "779: Random Access", "780: Mainframe", "781: Co-Processor", "782: Motherboard", "783: Bulkhead", "784: Coolant", "785: Mandrel", "786: Exchanger", "787: Core Breach", "788: Acheron", "789: Nuclear Garden", "790: Cold Fusion", "791: Remote Control", "792: Control Panel", "793: Converter", "794: Sweeper", "795: Safety Net", "796: Check Engine", "797: Brake Light", "798: Nitro", "799: High Beam", "800: Lab Rats", "801: Asiimov", "802: Momentum", "803: Neo-Noir", "804: Modest Threat", "805: Mecha Industries", "806: Scavenger", "807: Signal", "808: Oxide Blaze", "809: Wood Fired", "810: Phosphor", "811: Magnesium", "812: Pipe Down", "813: Nevermore", "814: Black Sand", "815: Danger Close", "816: Fubar", "817: Flashback", "818: Purple DDPAT", "819: Desert Hydra", "820: Music Box", "821: Elegant Vines", "822: Navy Sheen", "823: Sand Storm", "824: Drift Wood", "825: Drought", "826: Sienna Damask", "827: Humidor", "828: Verdant Growth", "829: Anolis", "835: Crypsis", "836: Uncharted", "837: Angry Mob", "838: Atheris", "839: Bamboozle", "840: Whitefish", "841: Light Rail", "842: Akoben", "843: Skull Crusher", "844: The Emperor", "845: Momentum", "846: Gauss", "847: Mischief", "848: Verdigris", "849: Off World", "850: Incinegator", "851: Moonrise", "852: Doppler", "853: Doppler", "854: Doppler", "855: Doppler", "856: Marble Fade", "857: Damascus Steel", "858: Damascus Steel", "859: Emerald Quartz", "860: Pyre", "861: Barricade", "862: Moss Quartz", "863: Night Borre", "864: Candy Apple", "865: Stone Mosaico", "866: Canal Spray", "867: Stained Glass", "868: Sea Calico", "869: Sundown", "870: Jungle Thicket", "871: Surfwood", "872: Bamboo Garden", "873: Seabird", "879: Fade", "880: Parched", "884: Embargo", "885: Rat Rod", "886: Arctic Wolf", "887: Containment Breach", "888: Acid Wash", "889: Decimator", "890: Plume", "891: Black Sand", "892: Memento", "893: Neon Ply", "894: Obsidian", "895: Balance", "896: Torn", "897: Colony IV", "898: Stalker", "899: Bloodshot", "900: Warbird", "902: Aztec", "903: Elite 1.6", "904: Decommissioned", "905: Flash Out", "906: Buddy", "907: Inferno", "908: Classic Crate", "909: Popdog", "910: Hydra", "911: Nostalgia", "913: Death by Puppy", "914: Assault", "915: Agent", "916: Plastique", "917: Wildfire", "918: Sacrifice", "919: Commemoration", "920: Boroque Sand", "921: Gold Arabesque", "922: Orange Anolis", "923: Oxide Oasis", "924: Desert Brush", "925: Desert DDPAT", "926: Red DDPAT", "927: Spalted Wood", "928: Black & Tan", "929: Quick Sand", "930: New Roots", "931: Old Roots", "932: Withered Vine", "933: Midnight Palm", "934: Bleached", "935: Prey", "941: Phantom Disruptor", "942: Tom Cat", "943: Capillary", "944: Distressed", "945: Blue Ply", "946: Player Two", "947: Disco Tech", "948: Justice", "949: Desert Strike", "950: Prototype", "951: Acid Etched", "952: Bone Forged", "953: Apocalypto", "954: Enforcer", "955: Darkwing", "956: Fever Dream", "957: Bullet Queen", "958: Ultralight", "959: Legion of Anubis", "960: Gnarled", "961: Monster Call", "962: Printstream", "963: Vogue", "964: Brother", "965: Allure", "966: Ol Rusty", "967: Mainframe 001", "968: Cassette", "969: Freight", "970: Entombed", "971: Tooth Fairy", "972: Connexion", "973: Runic", "974: Kitbash", "975: Exoskeleton", "976: Vendetta", "977: Cocoa Rampage", "978: Dezastre", "979: Fairy Tale", "980: Digital Mesh", "981: Vandal", "982: Contaminant", "983: Deep Relief", "984: Printstream", "985: Cyber Security", "986: Condition Zero", "987: Clear Polymer", "988: Neo-Noir", "989: Parallax", "990: Gold Bismuth", "991: Monster Mashup", "992: The Bronze", "993: Global Offensive", "994: Charter", "995: Surveillance", "996: Threat Detected", "997: Dispatch", "998: Switch Board", "999: Prime Conspiracy", "1000: Run and Hide", "1001: Welcome to the Jungle", "1002: Berries And Cherries", "1003: Crime Scene", "1004: X-Ray", "1005: Heist", "1006: Night Heist", "1007: Vault Heist", "1008: Houndstooth", "1009: Hot Snakes", "1010: Phoenix Chalk", "1011: Phoenix Marker", "1012: Phoenix Stencil", "1013: Phoenix Blacklight", "1014: Clay Ambush", "1015: Tiger Pit", "1016: Franklin", "1017: Blue Phosphor", "1018: Panthera onca", "1019: Panther Camo", "1020: Ancient Earth", "1021: Ancient Lore", "1022: Lush Ruins", "1023: Tall Grass", "1024: Blast From the Past", "1025: Gold Brick", "1026: Fade", "1027: Target Acquired", "1028: Magna Carta", "1029: Silk Tiger", "1030: Bengal Tiger", "1031: Ancient Visions", "1032: Dusk Ruins", "1033: Carved Jade", "1034: Ancient Ritual", "1035: Slate", "1036: Circaetus", "1037: Food Chain", "1038: Chromatic Aberration", "1039: Clear Polymer", "1040: The Traitor", "1041: In Living Color", "1042: O.S.I.P.R.", "1043: dev_texture", "1044: Cyber Shell", "1045: Button Masher", "1046: XOXO", "1047: Junk Yard", "1048: Heavy Metal", "1049: Oscillator", "1050: Trigger Discipline", "1051: Windblown", "1052: Death Strike", "1053: Meltdown", "1055: Space Race", "1056: Sputnik", "1058: POP AWP", "1059: Fizzy POP", "1060: Spring Twilly", "1061: Autumn Twilly", "1063: The Coalition", "1064: Syndicate", "1065: Whiteout", "1066: Faulty Wiring", "1067: Propaganda", "1070: Green Laminate", "1071: CAUTION!", "1072: Prism Terrace", "1073: Imminent Danger", "1074: Schematic", "1075: Strats", "1076: Framework", "1077: Interlock", "1078: Blue Tire", "1079: Red Tire", "1080: Infrastructure", "1081: Digital Architect", "1082: Fall Hazard", "1083: Breaker Box", "1084: Hazard Pay", "1085: Mechanism", "1086: Oil Change", "1087: Leet Museo", "1088: Plague", "1089: BI83 Spectrum", "1090: Ocean Drive", "1091: Tread", "1092: ZX Spectron", "1093: Boost Protocol", "1094: Mount Fuji", "1095: Keeping Tabs", "1096: Guerrilla", "1097: Spider Lily", "1098: Toybox", "1099: Lumen", "1100: Snack Attack", "1101: Turbo Peek", "1102: Black Lotus", "1103: Watchdog", "1104: Lore", "1105: Lore", "1106: Lore", "1107: Lore", "1108: Lore", "1109: Black Laminate", "1110: Black Laminate", "1111: Black Laminate", "1112: Black Laminate", "1113: Black Laminate", "1114: Autotronic", "1115: Autotronic", "1116: Autotronic", "1117: Autotronic", "1118: Autotronic", "1119: Gamma Doppler", "1120: Gamma Doppler", "1121: Gamma Doppler", "1122: Gamma Doppler", "1123: Gamma Doppler", "10006: Charred", "10007: Snakebite", "10008: Bronzed", "10009: Leather", "10010: Spruce DDPAT", "10013: Lunar Weave", "10015: Convoy", "10016: Crimson Weave", "10018: Superconductor", "10019: Arid", "10021: Slaughter", "10024: Eclipse", "10026: Spearmint", "10027: Boom!", "10028: Cool Mint", "10030: Forest DDPAT", "10033: Crimson Kimono", "10034: Emerald Web", "10035: Foundation", "10036: Badlands", "10037: Pandoras Box", "10038: Hedge Maze", "10039: Guerrilla", "10040: Diamondback", "10041: King Snake", "10042: Imperial Plaid", "10043: Overtake", "10044: Racing Green", "10045: Amphibious", "10046: Bronze Morph", "10047: Omega", "10048: Vice", "10049: POW!", "10050: Turtle", "10051: Transport", "10052: Polygon", "10053: Cobalt Skulls", "10054: Overprint", "10055: Duct Tape", "10056: Arboreal", "10057: Emerald", "10058: Mangrove", "10059: Rattler", "10060: Case Hardened", "10061: Crimson Web", "10062: Buckshot", "10063: Fade", "10064: Mogul", "10065: Marble Fade", "10066: Lt. Commander", "10067: Tiger Strike", "10068: Field Agent", "10069: Rezan the Red", "10070: Snow Leopard", "10071: Queen Jaguar", "10072: Black Tie", "10073: Slingshot", "10074: Big Game", "10075: Scarlet Shamagh", "10076: Nocts", "10077: Finish Line", "10078: Smoke Out", "10079: Blood Pressure", "10080: 3rd Commando Company", "10081: Desert Shamagh", "10082: Giraffe", "10083: Constrictor", "10084: CAUTION!", "10085: Jade", "10086: Yellow-banded", "10087: Needle Point", "10088: Unhinge" };