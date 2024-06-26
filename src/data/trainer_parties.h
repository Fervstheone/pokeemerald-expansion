//#define generic_spread              ((const u8[6]){ hp, atk, def, spatk, spdef, speed}
#define EVEN_SPREAD                   ((const u8[6]){  85,  85,  85,  85,  85,  85})
      
//2 Major Stats Spreads                               hp  atk  def spatk spdef speed
#define HP_ATK_SPREAD                 ((const u8[6]){ 252, 252,   6,   0,   0,   0})
#define HP_DEF_SPREAD                 ((const u8[6]){ 252,   0, 252,   0,   6,   0})
#define HP_SPATK_SPREAD               ((const u8[6]){ 252,   0,   0, 252,   6,   0})
#define HP_SPDEF_SPREAD               ((const u8[6]){ 252,   0,   6,   0, 252,   0})
#define HP_SPEED_SPREAD               ((const u8[6]){ 252,   0,   6,   0,   0, 252})
#define ATK_DEF_SPREAD                ((const u8[6]){   6, 252, 252,   0,   0,   0})
#define ATK_SPATK_SPREAD              ((const u8[6]){   0, 252,   0, 252,   0,   0})
#define ATK_SPDEF_SPREAD              ((const u8[6]){   6, 252,   0,   0, 252,   0})
#define ATK_SPEED_SPREAD              ((const u8[6]){   6, 252,   0,   0,   0, 252})
#define DEF_SPATK_SPREAD              ((const u8[6]){   6,   0, 252, 252,   6,   0})
#define DEF_SPDEF_SPREAD              ((const u8[6]){   6,   0, 252,   0, 252,   0})
#define DEF_SPEED_SPREAD              ((const u8[6]){   6,   0, 252,   0,   0, 252})
#define SPATK_SPDEF_SPREAD            ((const u8[6]){   6,   0,   6, 252, 252,   0})
#define SPATK_SPEED_SPREAD            ((const u8[6]){   6,   0,   0, 252,   0, 252})
#define SPDEF_SPEED_SPREAD            ((const u8[6]){   6,   0,   0,   0, 252, 252})
      
//3 Stats Spreads - HP Highest                        hp  atk  def spatk spdef speed
#define HP_ATK_DEF_SPREAD             ((const u8[6]){ 254, 128,   0,   0,   0,   0})
#define HP_ATK_SPATK_SPREAD           ((const u8[6]){ 254, 128,   0,   0,   0,   0})
#define HP_ATK_SPDEF_SPREAD           ((const u8[6]){ 254, 128,   0,   0,   0,   0})
#define HP_ATK_SPEED_SPREAD           ((const u8[6]){ 254, 128,   0,   0,   0,   0})
#define HP_DEF_SPATK_SPREAD           ((const u8[6]){ 254,   0, 128, 128,   0,   0})
#define HP_DEF_SPDEF_SPREAD           ((const u8[6]){ 254,   0, 128,   0, 128,   0})
#define HP_DEF_SPEED_SPREAD           ((const u8[6]){ 254,   0, 128,   0,   0, 128})
#define HP_SPATK_SPDEF_SPREAD         ((const u8[6]){ 254,   0,   0, 128, 128,   0})
#define HP_SPATK_SPEED_SPREAD         ((const u8[6]){ 254,   0,   0, 128,   0, 128})
#define HP_SPDEF_SPEED_SPREAD         ((const u8[6]){ 254,   0,   0,   0, 128, 128})
      
//3 Stats Spreads - Atk Highest                       hp  atk  def spatk spdef speed
#define ATK_HP_DEF_SPREAD             ((const u8[6]){ 128, 254,   0,   0,   0,   0})
#define ATK_HP_SPATK_SPREAD           ((const u8[6]){ 128, 254,   0,   0,   0,   0})
#define ATK_HP_SPDEF_SPREAD           ((const u8[6]){ 128, 254,   0,   0,   0,   0})
#define ATK_HP_SPEED_SPREAD           ((const u8[6]){ 128, 254,   0,   0,   0,   0})
#define ATK_DEF_SPATK_SPREAD          ((const u8[6]){   0, 254, 128,   0,   0,   0})
#define ATK_DEF_SPDEF_SPREAD          ((const u8[6]){   0, 254, 128,   0,   0,   0})
#define ATK_DEF_SPEED_SPREAD          ((const u8[6]){   0, 254, 128,   0,   0,   0})
#define ATK_SPATK_SPDEF_SPREAD        ((const u8[6]){   0, 254,   0, 128,   0,   0})
#define ATK_SPATK_SPEED_SPREAD        ((const u8[6]){   0, 254,   0, 128,   0,   0})
#define ATK_SPDEF_SPEED_SPREAD        ((const u8[6]){   0, 254,   0,   0, 128, 128})
      
//3 Stats Spreads - Def Highest                       hp  atk  def spatk spdef speed
#define DEF_HP_ATK_SPREAD             ((const u8[6]){ 128,   0, 254,   0,   0,   0})   
#define DEF_HP_SPATK_SPREAD           ((const u8[6]){ 128,   0, 254,   0,   0,   0})
#define DEF_HP_SPDEF_SPREAD           ((const u8[6]){ 128,   0, 254,   0,   0,   0})
#define DEF_HP_SPEED_SPREAD           ((const u8[6]){ 128,   0, 254,   0,   0,   0})
#define DEF_ATK_SPATK_SPREAD          ((const u8[6]){   0, 128, 254,   0,   0,   0})
#define DEF_ATK_SPDEF_SPREAD          ((const u8[6]){   0, 128, 254,   0,   0,   0})
#define DEF_ATK_SPEED_SPREAD          ((const u8[6]){   0, 128, 254,   0,   0,   0})
#define DEF_SPATK_SPDEF_SPREAD        ((const u8[6]){   0,   0, 254, 128,   0,   0})
#define DEF_SPATK_SPEED_SPREAD        ((const u8[6]){   0,   0, 254, 128,   0,   0})
#define DEF_SPDEF_SPEED_SPREAD        ((const u8[6]){   0,   0, 254,   0, 128, 128})
      
//3 Stats Spreads - Spatk Highest                     hp  atk  def spatk spdef speed
#define SPATK_HP_ATK_SPREAD           ((const u8[6]){ 128,   0,   0, 254,   0,   0})
#define SPATK_HP_DEF_SPREAD           ((const u8[6]){ 128,   0,   0, 254,   0,   0})
#define SPATK_HP_SPDEF_SPREAD         ((const u8[6]){ 128,   0,   0, 254,   0,   0})
#define SPATK_HP_SPEED_SPREAD         ((const u8[6]){ 128,   0,   0, 254,   0,   0})
#define SPATK_ATK_DEF_SPREAD          ((const u8[6]){   0, 128,   0, 254,   0,   0})
#define SPATK_ATK_SPDEF_SPREAD        ((const u8[6]){   0, 128,   0, 254,   0,   0})
#define SPATK_ATK_SPEED_SPREAD        ((const u8[6]){   0, 128,   0, 254,   0,   0})
#define SPATK_DEF_SPDEF_SPREAD        ((const u8[6]){   0,   0, 128, 254,   0,   0})
#define SPATK_DEF_SPEED_SPREAD        ((const u8[6]){   0,   0, 128, 254,   0,   0})
#define SPATK_SPDEF_SPEED_SPREAD      ((const u8[6]){   0,   0,   0, 254, 128, 128})
      
//3 Stats Spreads - Spdef Highest                     hp  atk  def spatk spdef speed
#define SPDEF_HP_ATK_SPREAD           ((const u8[6]){ 128,   0,   0,   0, 254,   0})
#define SPDEF_HP_DEF_SPREAD           ((const u8[6]){ 128,   0,   0,   0, 254,   0})
#define SPDEF_HP_SPATK_SPREAD         ((const u8[6]){ 128,   0,   0,   0, 254,   0})
#define SPDEF_HP_SPEED_SPREAD         ((const u8[6]){ 128,   0,   0,   0, 254,   0})
#define SPDEF_ATK_DEF_SPREAD          ((const u8[6]){   0, 128,   0,   0, 254,   0})
#define SPDEF_ATK_SPATK_SPREAD        ((const u8[6]){   0, 128,   0,   0, 254,   0})
#define SPDEF_ATK_SPEED_SPREAD        ((const u8[6]){   0, 128,   0,   0, 254,   0})
#define SPDEF_DEF_SPATK_SPREAD        ((const u8[6]){   0,   0, 128,   0, 254,   0})
#define SPDEF_DEF_SPEED_SPREAD        ((const u8[6]){   0,   0, 128,   0, 254,   0})
#define SPDEF_SPATK_SPEED_SPREAD      ((const u8[6]){   0,   0,   0, 128, 254, 128})
      
//3 Stats Spreads - Speed Highest                     hp  atk  def spatk spdef speed
#define SPEED_HP_ATK_SPREAD           ((const u8[6]){ 128,   0,   0,   0,   0, 254})
#define SPEED_HP_DEF_SPREAD           ((const u8[6]){ 128,   0,   0,   0,   0, 254})
#define SPEED_HP_SPATK_SPREAD         ((const u8[6]){ 128,   0,   0,   0,   0, 254})
#define SPEED_HP_SPDEF_SPREAD         ((const u8[6]){ 128,   0,   0,   0,   0, 254})
#define SPEED_ATK_DEF_SPREAD          ((const u8[6]){   0, 128,   0,   0,   0, 254})
#define SPEED_ATK_SPATK_SPREAD        ((const u8[6]){   0, 128,   0,   0,   0, 254})
#define SPEED_ATK_SPDEF_SPREAD        ((const u8[6]){   0, 128,   0,   0,   0, 254})
#define SPEED_SPATK_DEF_SPREAD        ((const u8[6]){   0,   0, 128,   0,   0, 254})
#define SPEED_SPATK_SPDEF_SPREAD      ((const u8[6]){   0,   0, 128,   0,   0, 254})
#define SPEED_SPDEF_DEF_SPREAD        ((const u8[6]){   0,   0,   0, 128, 128, 254})

//4 Stats Even Spreads                                hp  atk  def spatk spdef speed
#define HP_ATK_DEF_SPATK_SPREAD       ((const u8[6]){ 127, 127, 127, 127,   0,   0})
#define HP_ATK_DEF_SPDEF_SPREAD       ((const u8[6]){ 127, 127, 127,   0, 127,   0})
#define HP_ATK_DEF_SPEED_SPREAD       ((const u8[6]){ 127, 127, 127,   0,   0, 127})
#define HP_ATK_SPATK_SPDEF_SPREAD     ((const u8[6]){ 127, 127,   0, 127, 127,   0})
#define HP_ATK_SPATK_SPEED_SPREAD     ((const u8[6]){ 127, 127,   0, 127,   0, 127})
#define HP_ATK_SPDEF_SPEED_SPREAD     ((const u8[6]){ 127, 127,   0,   0, 127, 127})
#define HP_DEF_SPATK_SPDEF_SPREAD     ((const u8[6]){ 127,   0, 127, 127, 127,   0})
#define HP_DEF_SPATK_SPEED_SPREAD     ((const u8[6]){ 127,   0, 127, 127,   0, 127})
#define HP_DEF_SPDEF_SPEED_SPREAD     ((const u8[6]){ 127,   0, 127,   0, 127, 127})
#define HP_SPATK_SPDEF_SPEED_SPREAD   ((const u8[6]){ 127,   0,   0, 127, 127, 127})    
#define ATK_DEF_SPATK_SPDEF_SPREAD    ((const u8[6]){   0, 127, 127, 127, 127,   0})
#define ATK_DEF_SPATK_SPEED_SPREAD    ((const u8[6]){   0, 127, 127, 127,   0, 127})
#define ATK_DEF_SPDEF_SPEED_SPREAD    ((const u8[6]){   0, 127, 127,   0, 127, 127})
#define ATK_SPATK_SPDEF_SPEED_SPREAD  ((const u8[6]){   0, 127,   0, 127, 127, 127})
#define DEF_SPATK_SPDEF_SPEED_SPREAD  ((const u8[6]){   0,   0, 127, 127, 127, 127})

#define MAX_IVS TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
#define MEAN_IVS TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16)
#define MIN_IVS TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4)


