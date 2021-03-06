#pragma once

#include <string>
#include <vector>
#include <functional>
#include <Windows.h>
#include <time.h>

#include <GWCA\Constants\Constants.h>

#include <ToolboxWindow.h>
#include <ToolboxUIElement.h>

class DailyQuests : public ToolboxWindow {
    DailyQuests() {};
    ~DailyQuests() {};
public:
    static DailyQuests& Instance() {
        static DailyQuests instance;
        return instance;
    }

    const char* Name() const override { return "Daily Quests"; }

    void Initialize() override;
    void LoadSettings(CSimpleIni* ini) override;
    void SaveSettings(CSimpleIni* ini) override;
    void DrawSettingInternal() override;

    void DrawHelp() override;
    void Update(float delta) override;
    void Draw(IDirect3DDevice9* pDevice) override;

    const char* vanguard_cycles[9]{
        "Bandits",
        "Utini Wupwup",
        "Ascalonian Noble",
        "Undead",
        "Blazefiend Griefblade",
        "Farmer Hamnet",
        "Charr",
        "Countess Nadya",
        "Footman Tate"
    };
    const char* nicholas_sandford_cycles[52]{
        "Grawl Necklaces",
        "Baked Husks",
        "Skeletal Limbs",
        "Unnatural Seeds",
        "Enchanted Lodestones",
        "Skale Fins",
        "Icy Lodestones",
        "Gargoyle Skulls",
        "Dull Carapaces",
        "Baked Husks",
        "Red Iris Flowers",
        "Spider Legs",
        "Skeletal Limbs",
        "Charr Carvings",
        "Enchanted Lodestones",
        "Grawl Necklaces",
        "Icy Lodestones",
        "Worn Belts",
        "Gargoyle Skulls",
        "Unnatural Seeds",
        "Skale Fins",
        "Red Iris Flowers",
        "Enchanted Lodestones",
        "Skeletal Limbs",
        "Charr Carvings",
        "Spider Legs",
        "Baked Husks",
        "Gargoyle Skulls",
        "Unnatural Seeds",
        "Icy Lodestones",
        "Grawl Necklaces",
        "Enchanted Lodestones",
        "Worn Belts",
        "Dull Carapaces",
        "Spider Legs",
        "Gargoyle Skulls",
        "Icy Lodestones",
        "Unnatural Seeds",
        "Worn Belts",
        "Grawl Necklaces",
        "Baked Husks",
        "Skeletal Limbs",
        "Red Iris Flowers",
        "Charr Carvings",
        "Skale Fins",
        "Dull Carapaces",
        "Enchanted Lodestones",
        "Charr Carvings",
        "Spider Legs",
        "Red Iris Flowers",
        "Worn Belts",
        "Dull Carapaces"
    };
    const char* nicholas_region_cycles[137]{
        "Ascalon",
        "Southern Shiverpeaks",
        "The Desolation",
        "Tarnished Coast",
        "Kaineng City",
        "Southern Shiverpeaks",
        "Kourna",
        "Ring of Fire Islands",
        "Shing Jea Island",
        "Istan",
        "Charr Homelands",
        "Kryta",
        "The Jade Sea",
        "Maguuma Jungle",
        "Ascalon",
        "The Desolation",
        "Kryta",
        "The Jade Sea",
        "Far Shiverpeaks",
        "Charr Homelands",
        "Shing Jea Island",
        "Vabbi",
        "Kaineng City",
        "Northern Shiverpeaks",
        "Ascalon",
        "The Jade Sea",
        "Crystal Desert",
        "Far Shiverpeaks",
        "Southern Shiverpeaks",
        "Kourna",
        "Maguuma Jungle",
        "Vabbi",
        "Echovald Forest",
        "Kryta",
        "Vabbi",
        "Shing Jea Island",
        "Kaineng City",
        "Crystal Desert",
        "Southern Shiverpeaks",
        "Istan",
        "Echovald Forest",
        "Tarnished Coast",
        "Crystal Desert",
        "Southern Shiverpeaks",
        "Kaineng City",
        "Southern Shiverpeaks",
        "Istan",
        "Echovald Forest",
        "Kryta",
        "Tarnished Coast",
        "Vabbi",
        "The Desolation",
        "Southern Shiverpeaks",
        "Kaineng City",
        "Kourna",
        "Crystal Desert",
        "Southern Shiverpeaks",
        "The Jade Sea",
        "Kryta",
        "Far Shiverpeaks",
        "Shing Jea Island",
        "Northern Shiverpeaks",
        "Ascalon",
        "Vabbi",
        "Kaineng City",
        "Kryta",
        "Echovald Forest",
        "Far Shiverpeaks",
        "Maguuma Jungle",
        "Istan",
        "Kryta",
        "Kaineng City",
        "Crystal Desert",
        "Maguuma Jungle",
        "Echovald Forest",
        "Istan",
        "Vabbi",
        "Tarnished Coast",
        "Crystal Desert",
        "Kaineng City",
        "Northern Shiverpeaks",
        "The Desolation",
        "Kryta",
        "Vabbi",
        "Crystal Desert",
        "Shing Jea Island",
        "Maguuma Jungle",
        "Southern Shiverpeaks",
        "Kourna",
        "Vabbi",
        "Maguuma Jungle",
        "Shing Jea Island",
        "Northern Shiverpeaks",
        "The Desolation",
        "The Jade Sea",
        "Kourna",
        "Kryta",
        "Kryta",
        "Echovald Forest",
        "Ascalon",
        "The Desolation",
        "The Jade Sea",
        "Kourna",
        "Tarnished Coast",
        "Southern Shiverpeaks",
        "Maguuma Jungle",
        "Shing Jea Island",
        "Istan",
        "Kaineng City",
        "Vabbi",
        "Ascalon",
        "The Jade Sea",
        "Far Shiverpeaks",
        "Kourna",
        "Southern Shiverpeaks",
        "Kaineng City",
        "Kourna",
        "Ascalon",
        "Echovald Forest",
        "Southern Shiverpeaks",
        "Tarnished Coast",
        "The Desolation",
        "Shing Jea Island",
        "The Desolation",
        "Kryta",
        "Kaineng City",
        "Vabbi",
        "Charr Homelands",
        "Ascalon",
        "The Jade Sea",
        "Kryta",
        "Kourna",
        "Maguuma Jungle",
        "Istan",
        "Far Shiverpeaks",
        "Northern Shiverpeaks",
        "Ascalon"
    };
    const uint32_t nicholas_quantity_cycles[137]{
        3,
        3,
        2,
        2,
        3,
        2,
        1,
        1,
        5,
        3,
        2,
        1,
        3,
        1,
        1,
        1,
        2,
        3,
        3,
        3,
        5,
        2,
        3,
        3,
        3,
        2,
        1,
        1,
        3,
        1,
        3,
        1,
        1,
        3,
        1,
        1,
        3,
        2,
        2,
        2,
        1,
        3,
        2,
        3,
        3,
        1,
        1,
        3,
        2,
        5,
        2,
        1,
        3,
        3,
        1,
        2,
        2,
        1,
        2,
        2,
        3,
        3,
        1,
        3,
        3,
        1,
        1,
        3,
        1,
        1,
        2,
        3,
        2,
        2,
        1,
        3,
        1,
        2,
        1,
        2,
        2,
        1,
        2,
        1,
        2,
        5,
        3,
        2,
        5,
        2,
        1,
        5,
        3,
        1,
        3,
        3,
        3,
        3,
        5,
        3,
        1,
        1,
        6,
        2,
        2,
        2,
        3,
        1,
        3,
        1,
        3,
        1,
        1,
        2,
        5,
        3,
        3,
        3,
        3,
        3,
        3,
        2,
        3,
        3,
        2,
        3,
        1,
        2,
        3,
        2,
        3,
        2,
        2,
        3,
        3,
        3,
        3
    };
    const char* nicholas_item_cycles[137]{
        "Red Iris Flowers",
        "Feathered Avicara Scalps",
        "Margonite Masks",
        "Quetzal Crests",
        "Plague Idols",
        "Azure Remains",
        "Mandragor Root Cake",
        "Mahgo Claw",
        "Mantid Pincers",
        "Sentient Seeds",
        "Stone Grawl Necklaces",
        "Herring",
        "Naga Skins",
        "Gloom Seed",
        "Charr Hide",
        "Ruby Djinn Essence",
        "Thorny Carapaces",
        "Bone Charms",
        "Modniir Manes",
        "Superb Charr Carvings",
        "Rolls of Parchment",
        "Roaring Ether Claws",
        "Branches of Juni Berries",
        "Shiverpeak Manes",
        "Fetid Carapaces",
        "Moon Shells",
        "Massive Jawbone",
        "Chromatic Scale",
        "Mursaat Tokens",
        "Sentient Lodestone",
        "Jungle Troll Tusks",
        "Sapphire Djinn Essence",
        "Stone Carving",
        "Feathered Caromi Scalps",
        "Pillaged Goods",
        "Gold Crimson Skull Coin",
        "Jade Bracelets",
        "Minotaur Horns",
        "Frosted Griffon Wings",
        "Silver Bullion Coins",
        "Truffle",
        "Skelk Claws",
        "Dessicated Hydra Claws",
        "Frigid Hearts",
        "Celestial Essences",
        "Phantom Residue",
        "Drake Kabob",
        "Amber Chunks",
        "Glowing Hearts",
        "Saurian Bones",
        "Behemoth Hides",
        "Luminous Stone",
        "Intricate Grawl Necklaces",
        "Jadeite Shards",
        "Gold Doubloon",
        "Shriveled Eyes",
        "Icy Lodestones",
        "Keen Oni Talon",
        "Hardened Humps",
        "Piles of Elemental Dust",
        "Naga Hides",
        "Spiritwood Planks",
        "Stormy Eye",
        "Skree Wings",
        "Soul Stones",
        "Spiked Crest",
        "Dragon Root",
        "Berserker Horns",
        "Behemoth Jaw",
        "Bowl of Skalefin Soup",
        "Forest Minotaur Horns",
        "Putrid Cysts",
        "Jade Mandibles",
        "Maguuma Manes",
        "Skull Juju",
        "Mandragor Swamproots",
        "Bottle of Vabbian Wine",
        "Weaver Legs",
        "Topaz Crest",
        "Rot Wallow Tusks",
        "Frostfire Fangs",
        "Demonic Relic",
        "Abnormal Seeds",
        "Diamond Djinn Essence",
        "Forgotten Seals",
        "Copper Crimson Skull Coins",
        "Mossy Mandibles",
        "Enslavement Stones",
        "Elonian Leather Squares",
        "Cobalt Talons",
        "Maguuma Spider Web",
        "Forgotten Trinket Boxes",
        "Icy Humps",
        "Sandblasted Lodestone",
        "Black Pearls",
        "Insect Carapaces",
        "Mergoyle Skulls",
        "Decayed Orr Emblems",
        "Tempered Glass Vials",
        "Scorched Lodestones",
        "Water Djinn Essence",
        "Guardian Moss",
        "Dwarven Ales",
        "Amphibian Tongues",
        "Alpine Seeds",
        "Tangled Seeds",
        "Stolen Supplies",
        "Pahnai Salad",
        "Vermin Hides",
        "Roaring Ether Heart",
        "Leathery Claws",
        "Azure Crest",
        "Jotun Pelt",
        "Heket Tongues",
        "Mountain Troll Tusks",
        "Vials of Ink",
        "Kournan Pendants",
        "Singed Gargoyle Skulls",
        "Dredge Incisors",
        "Stone Summit Badges",
        "Krait Skins",
        "Inscribed Shards",
        "Feathered Scalps",
        "Mummy Wrappings",
        "Shadowy Remnants",
        "Ancient Kappa Shells",
        "Geode",
        "Fibrous Mandragor Roots",
        "Gruesome Ribcages",
        "Kraken Eyes",
        "Bog Skale Fins",
        "Sentient Spores",
        "Ancient Eyes",
        "Copper Shillings",
        "Frigid Mandragor Husks",
        "Bolts of Linen",
        "Charr Carvings"
    };
    const char* nicholas_location_cycles[137]{
        "Regent Valley",
        "Mineral Springs",
        "Poisoned Outcrops",
        "Alcazia Tangle",
        "Wajjun Bazaar",
        "Dreadnought's Drift",
        "Arkjok Ward",
        "Perdition Rock",
        "Saoshang Trail",
        "Fahranur, The First City",
        "Sacnoth Valley",
        "Twin Serpent Lakes",
        "Mount Qinkai",
        "The Falls",
        "The Breach",
        "The Alkali Pan",
        "Majesty's Rest",
        "Rhea's Crater",
        "Varajar Fells",
        "Dalada Uplands",
        "Zen Daijun",
        "Garden of Seborhin",
        "Bukdek Byway",
        "Deldrimor Bowl",
        "Eastern Frontier",
        "Gyala Hatchery",
        "The Arid Sea",
        "Ice Cliff Chasms",
        "Ice Floe",
        "Bahdok Caverns",
        "Tangle Root",
        "Resplendent Makuun",
        "Arborstone",
        "North Kryta Province",
        "Holdings of Chokhin",
        "Haiju Lagoon",
        "Tahnnakai Temple",
        "Prophet's Path",
        "Snake Dance",
        "Mehtani Keys",
        "Morostav Trail",
        "Verdant Cascades",
        "The Scar",
        "Spearhead Peak",
        "Nahpui Quarter",
        "Lornar's Pass",
        "Issnur Isles",
        "Ferndale",
        "Stingray Strand",
        "Riven Earth",
        "Wilderness of Bahdza",
        "Crystal Overlook",
        "Witman's Folly",
        "Shadow's Passage",
        "Barbarous Shore",
        "Skyward Reach",
        "Icedome",
        "Silent Surf",
        "Nebo Terrace",
        "Drakkar Lake",
        "Panjiang Peninsula",
        "Griffon's Mouth",
        "Pockmark Flats",
        "Forum Highlands",
        "Raisu Palace",
        "Tears of the Fallen",
        "Drazach Thicket",
        "Jaga Moraine",
        "Mamnoon Lagoon",
        "Zehlon Reach",
        "Kessex Peak",
        "Sunjiang District",
        "Salt Flats",
        "Silverwood",
        "The Eternal Grove",
        "Lahtenda Bog",
        "Vehtendi Valley",
        "Magus Stones",
        "Diviner's Ascent",
        "Pongmei Valley",
        "Anvil Rock",
        "The Ruptured Heart",
        "Talmark Wilderness",
        "The Hidden City of Ahdashim",
        "Vulture Drifts",
        "Kinya Province",
        "Ettin's Back",
        "Grenth's Footprint",
        "Jahai Bluffs",
        "Vehjin Mines",
        "Reed Bog",
        "Minister Cho's Estate",
        "Iron Horse Mine",
        "The Shattered Ravines",
        "Archipelagos",
        "Marga Coast",
        "Watchtower Coast",
        "Cursed Lands",
        "Mourning Veil Falls",
        "Old Ascalon",
        "Turai's Procession",
        "Maishang Hills",
        "The Floodplain of Mahnkelon",
        "Sparkfly Swamp",
        "Frozen Forest",
        "Dry Top",
        "Jaya Bluffs",
        "Plains of Jarin",
        "Xaquang Skyway",
        "The Mirror of Lyss",
        "Ascalon Foothills",
        "Unwaking Waters",
        "Bjora Marches",
        "Dejarin Estate",
        "Talus Chute",
        "Shenzun Tunnels",
        "Gandara, the Moon Fortress",
        "Diessa Lowlands",
        "Melandru's Hope",
        "Tasca's Demise",
        "Arbor Bay",
        "Joko's Domain",
        "Sunqua Vale",
        "The Sulfurous Wastes",
        "The Black Curtain",
        "The Undercity",
        "Yatendi Canyons",
        "Grothmar Wardowns",
        "Dragon's Gullet",
        "Boreas Seabed",
        "Scoundrel's Rise",
        "Sunward Marches",
        "Sage Lands",
        "Cliffs of Dohjok",
        "Norrhart Domains",
        "Traveler's Vale",
        "Flame Temple Corridor"
    };
    const char* zaishen_bounty_cycles[66] {
        "Droajam, Mage of the Sands",
        "Royen Beastkeeper",
        "Eldritch Ettin",
        "Vengeful Aatxe",
        "Fronis Irontoe",
        "Urgoz",
        "Fenrir",
        "Selvetarm",
        "Mohby Windbeak",
        "Charged Blackness",
        "Rotscale",
        "Zoldark the Unholy",
        "Korshek the Immolated",
        "Myish, Lady of the Lake",
        "Frostmaw the Kinslayer",
        "Kunvie Firewing",
        "Z'him Monns",
        "The Greater Darkness",
        "TPS Regulator Golem",
        "Plague of Destruction",
        "The Darknesses",
        "Admiral Kantoh",
        "Borrguus Blisterbark",
        "Forgewight",
        "Baubao Wavewrath",
        "Joffs the Mitigator",
        "Rragar Maneater",
        "Chung, the Attuned",
        "Lord Jadoth",
        "Nulfastu, Earthbound",
        "The Iron Forgeman",
        "Magmus",
        "Mobrin, Lord of the Marsh",
        "Jarimiya the Unmerciful",
        "Duncan the Black",
        "Quansong Spiritspeak",
        "The Stygian Underlords",
        "Fozzy Yeoryios",
        "The Black Beast of Arrgh",
        "Arachni",
        "The Four Horsemen",
        "Remnant of Antiquities",
        "Arbor Earthcall",
        "Prismatic Ooze",
        "Lord Khobay",
        "Jedeh the Mighty",
        "Ssuns, Blessed of Dwayna",
        "Justiciar Thommis",
        "Harn and Maxine Coldstone",
        "Pywatt the Swift",
        "Fendi Nin",
        "Mungri Magicbox",
        "Priest of Menzies",
        "Ilsundur, Lord of Fire",
        "Kepkhet Marrowfeast",
        "Commander Wahli",
        "Kanaxai",
        "Khabuus",
        "Molotov Rocktail",
        "The Stygian Lords",
        "Dragon Lich",
        "Havok Soulwail",
        "Ghial the Bone Dancer",
        "Murakai, Lady of the Night",
        "Rand Stormweaver",
        "Verata"
    };
    const char* zaishen_combat_cycles[28]{
        "Jade Quarry",
        "Codex Arena",
        "Heroes' Ascent",
        "Guild Versus Guild",
        "Alliance Battles",
        "Heroes' Ascent",
        "Guild Versus Guild",
        "Codex Arena",
        "Fort Aspenwood",
        "Jade Quarry",
        "Random Arena",
        "Codex Arena",
        "Guild Versus Guild",
        "Jade Quarry",
        "Alliance Battles",
        "Heroes' Ascent",
        "Random Arena",
        "Fort Aspenwood",
        "Jade Quarry",
        "Random Arena",
        "Fort Aspenwood",
        "Heroes' Ascent",
        "Alliance Battles",
        "Guild Versus Guild",
        "Codex Arena",
        "Random Arena",
        "Fort Aspenwood",
        "Alliance Battles"
    };
    const char* zaishen_mission_cycles[69]{
        "Augury Rock",
        "Grand Court of Sebelkeh",
        "Ice Caves of Sorrow",
        "Raisu Palace",
        "Gate of Desolation",
        "Thirsty River",
        "Blacktide Den",
        "Against the Charr",
        "Abaddon's Mouth",
        "Nundu Bay",
        "Divinity Coast",
        "Zen Daijun",
        "Pogahn Passage",
        "Tahnnakai Temple",
        "The Great Northern Wall",
        "Dasha Vestibule",
        "The Wilds",
        "Unwaking Waters",
        "Chahbek Village",
        "Aurora Glade",
        "A Time for Heroes",
        "Consulate Docks",
        "Ring of Fire",
        "Nahpui Quarter",
        "The Dragon's Lair",
        "Dzagonur Bastion",
        "D'Alessio Seaboard",
        "Assault on the Stronghold",
        "The Eternal Grove",
        "Sanctum Cay",
        "Rilohn Refuge",
        "Warband of Brothers",
        "Borlis Pass",
        "Imperial Sanctum",
        "Moddok Crevice",
        "Nolani Academy",
        "Destruction's Depths",
        "Venta Cemetery",
        "Fort Ranik",
        "A Gate Too Far",
        "Minister Cho's Estate",
        "Thunderhead Keep",
        "Tihark Orchard",
        "Finding the Bloodstone",
        "Dunes of Despair",
        "Vizunah Square",
        "Jokanur Diggings",
        "Iron Mines of Moladune",
        "Kodonur Crossroads",
        "G.O.L.E.M.",
        "Arborstone",
        "Gates of Kryta",
        "Gate of Madness",
        "The Elusive Golemancer",
        "Riverside Province",
        "Boreas Seabed",
        "Ruins of Morah",
        "Hell's Precipice",
        "Ruins of Surmia",
        "Curse of the Nornbear",
        "Sunjiang District",
        "Elona Reach",
        "Gate of Pain",
        "Blood Washes Blood",
        "Bloodstone Fen",
        "Jennur's Horde",
        "Gyala Hatchery",
        "Abaddon's Gate",
        "The Frost Gate"
    };
    const char* zaishen_vanquish_cycles[136]{
        "Jaya Bluffs",
        "Holdings of Chokhin",
        "Ice Cliff Chasms",
        "Griffon's Mouth",
        "Kinya Province",
        "Issnur Isles",
        "Jaga Moraine",
        "Ice Floe",
        "Maishang Hills",
        "Jahai Bluffs",
        "Riven Earth",
        "Icedome",
        "Minister Cho's Estate",
        "Mehtani Keys",
        "Sacnoth Valley",
        "Iron Horse Mine",
        "Morostav Trail",
        "Plains of Jarin",
        "Sparkfly Swamp",
        "Kessex Peak",
        "Mourning Veil Falls",
        "The Alkali Pan",
        "Varajar Fells",
        "Lornar's Pass",
        "Pongmei Valley",
        "The Floodplain of Mahnkelon",
        "Verdant Cascades",
        "Majesty's Rest",
        "Raisu Palace",
        "The Hidden City of Ahdashim",
        "Rhea's Crater",
        "Mamnoon Lagoon",
        "Shadow's Passage",
        "The Mirror of Lyss",
        "Saoshang Trail",
        "Nebo Terrace",
        "Shenzun Tunnels",
        "The Ruptured Heart",
        "Salt Flats",
        "North Kryta Province",
        "Silent Surf",
        "The Shattered Ravines",
        "Scoundrel's Rise",
        "Old Ascalon",
        "Sunjiang District",
        "The Sulfurous Wastes",
        "Magus Stones",
        "Perdition Rock",
        "Sunqua Vale",
        "Turai's Procession",
        "Norrhart Domains",
        "Pockmark Flats",
        "Tahnnakai Temple",
        "Vehjin Mines",
        "Poisoned Outcrops",
        "Prophet's Path",
        "The Eternal Grove",
        "Tasca's Demise",
        "Resplendent Makuun",
        "Reed Bog",
        "Unwaking Waters",
        "Stingray Strand",
        "Sunward Marches",
        "Regent Valley",
        "Wajjun Bazaar",
        "Yatendi Canyons",
        "Twin Serpent Lakes",
        "Sage Lands",
        "Xaquang Skyway",
        "Zehlon Reach",
        "Tangle Root",
        "Silverwood",
        "Zen Daijun",
        "The Arid Sea",
        "Nahpui Quarter",
        "Skyward Reach",
        "The Scar",
        "The Black Curtain",
        "Panjiang Peninsula",
        "Snake Dance",
        "Traveler's Vale",
        "The Breach",
        "Lahtenda Bog",
        "Spearhead Peak",
        "Mount Qinkai",
        "Marga Coast",
        "Melandru's Hope",
        "The Falls",
        "Joko's Domain",
        "Vulture Drifts",
        "Wilderness of Bahdza",
        "Talmark Wilderness",
        "Vehtendi Valley",
        "Talus Chute",
        "Mineral Springs",
        "Anvil Rock",
        "Arborstone",
        "Witman's Folly",
        "Arkjok Ward",
        "Ascalon Foothills",
        "Bahdok Caverns",
        "Cursed Lands",
        "Alcazia Tangle",
        "Archipelagos",
        "Eastern Frontier",
        "Dejarin Estate",
        "Watchtower Coast",
        "Arbor Bay",
        "Barbarous Shore",
        "Deldrimor Bowl",
        "Boreas Seabed",
        "Cliffs of Dohjok",
        "Diessa Lowlands",
        "Bukdek Byway",
        "Bjora Marches",
        "Crystal Overlook",
        "Diviner's Ascent",
        "Dalada Uplands",
        "Drazach Thicket",
        "Fahranur, the First City",
        "Dragon's Gullet",
        "Ferndale",
        "Forum Highlands",
        "Dreadnought's Drift",
        "Drakkar Lake",
        "Dry Top",
        "Tears of the Fallen",
        "Gyala Hatchery",
        "Ettin's Back",
        "Gandara, the Moon Fortress",
        "Grothmar Wardowns",
        "Flame Temple Corridor",
        "Haiju Lagoon",
        "Frozen Forest",
        "Garden of Seborhin",
        "Grenth's Footprint"
    };
    const char* wanted_by_shining_blade_cycles[21]{
        "Justiciar Kimii",
        "Zaln the Jaded",
        "Justiciar Sevaan",
        "Insatiable Vakar",
        "Amalek the Unmerciful",
        "Carnak the Hungry",
        "Valis the Rampant",
        "Cerris",
        "Sarnia the Red-Handed",
        "Destor the Truth Seeker",
        "Selenas the Blunt",
        "Justiciar Amilyn",
        "Maximilian the Meticulous",
        "Joh the Hostile",
        "Barthimus the Provident",
        "Calamitous",
        "Greves the Overbearing",
        "Lev the Condemned",
        "Justiciar Marron",
        "Justiciar Kasandra",
        "Vess the Disputant"
    };
    const char* pve_weekly_bonus_cycles[9]{
        "Extra Luck",
        "Elonian Support",
        "Zaishen Bounty",
        "Factions Elite",
        "Northern Support",
        "Zaishen Mission",
        "Pantheon",
        "Faction Support",
        "Zaishen Vanquishing"
    };
    const char* pve_weekly_bonus_descriptions[9]{
        "Keys and lockpicks drop at four times the usual rate and double Lucky and Unlucky title points",
        "Double Sunspear and Lightbringer points",
        "Double copper Zaishen Coin rewards for Zaishen bounties",
        "The Deep and Urgoz's Warren can be entered from Kaineng Center",
        "Double Asura, Deldrimor, Ebon Vanguard, or Norn reputation points",
        "Double copper Zaishen Coin rewards for Zaishen missions",
        "Free passage to the Underworld and the Fissure of Woe",
        "Double Kurzick and Luxon title track points for exchanging faction",
        "Double copper Zaishen Coin rewards for Zaishen vanquishes"
    };
    const char* pvp_weekly_bonus_cycles[6]{
        "Random Arenas",
        "Guild Versus Guild",
        "Competitive Mission",
        "Heroes' Ascent",
        "Codex Arena",
        "Alliance Battle"
    };
    const char* pvp_weekly_bonus_descriptions[6]{
        "Double Balthazar faction and Gladiator title points in Random Arenas",
        "Double Balthazar faction and Champion title points in GvG",
        "Double Balthazar and Imperial faction in the Jade Quarry and Fort Aspenwood",
        "Double Balthazar faction and Hero title points in Heroes' Ascent",
        "Double Balthazar faction and Codex title points in Codex Arena",
        "Double Balthazar and Imperial faction in Alliance Battles"
    };
private:

    static const size_t zb_cnt = sizeof(zaishen_bounty_cycles) / sizeof( * zaishen_bounty_cycles);
    static const size_t zm_cnt = sizeof(zaishen_mission_cycles) / sizeof( * zaishen_mission_cycles);
    static const size_t zc_cnt = sizeof(zaishen_combat_cycles) / sizeof( * zaishen_combat_cycles);
    static const size_t zv_cnt = sizeof(zaishen_vanquish_cycles) / sizeof( * zaishen_vanquish_cycles);
    static const size_t ws_cnt = sizeof(wanted_by_shining_blade_cycles) / sizeof(*wanted_by_shining_blade_cycles);
    static const size_t wbe_cnt = sizeof(pve_weekly_bonus_cycles) / sizeof(*pve_weekly_bonus_cycles);
    static const size_t wbp_cnt = sizeof(pvp_weekly_bonus_cycles) / sizeof(*pvp_weekly_bonus_cycles);

    bool subscribed_zaishen_bounties[zb_cnt] = { 0 };
    bool subscribed_zaishen_combats[zc_cnt] = { 0 };
    bool subscribed_zaishen_missions[zm_cnt] = { 0 };
    bool subscribed_zaishen_vanquishes[zv_cnt] = { 0 };
    bool subscribed_wanted_quests[ws_cnt] = { 0 };
    bool subscribed_weekly_bonus_pve[wbe_cnt] = { 0 };
    bool subscribed_weekly_bonus_pvp[wbp_cnt] = { 0 };

    bool show_zaishen_bounty_in_window = true;
    bool show_zaishen_combat_in_window = true;
    bool show_zaishen_missions_in_window = true;
    bool show_zaishen_vanquishes_in_window = true;
    bool show_wanted_quests_in_window = true;
    bool show_nicholas_in_window = true;
    bool show_weekly_bonus_pve_in_window = true;
    bool show_weekly_bonus_pvp_in_window = true;

    uint32_t subscriptions_lookahead_days = 7;

    float text_width = 200.0f;
    int daily_quest_window_count = 90;

    static void CmdWeeklyBonus(const wchar_t* message, int argc, LPWSTR* argv);
    static void CmdWantedByShiningBlade(const wchar_t *message, int argc, LPWSTR *argv);
    static void CmdZaishenBounty(const wchar_t *message, int argc, LPWSTR *argv);
    static void CmdZaishenMission(const wchar_t *message, int argc, LPWSTR *argv);
    static void CmdZaishenCombat(const wchar_t *message, int argc, LPWSTR *argv);
    static void CmdZaishenVanquish(const wchar_t *message, int argc, LPWSTR *argv);
    static void CmdVanguard(const wchar_t *message, int argc, LPWSTR *argv);
    static void CmdNicholas(const wchar_t *message, int argc, LPWSTR *argv);
};
