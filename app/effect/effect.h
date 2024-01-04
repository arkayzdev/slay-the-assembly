#ifndef EFFECT
    #define EFFECT

    struct Effect {
        int id; // Damage, Draw card, Strengh, Weakness, Vulnerability, Armor, Dodge
        int value;
    };

    void initEffect(struct Effect *effects, int size);
    int addEffect(struct Effect *effects, int id, int value);
    
#endif


