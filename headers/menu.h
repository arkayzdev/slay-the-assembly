const char *FONT_NAME = "resource/font/american_captain.ttf";
const int FONT_NORMAL = 40;
const int FONT_HOVER = 60;

// Event capturer from SDL Window.
SDL_Color TextColor = {255, 255, 255, 0}; // White SDL color.
TTF_Font *Font;                           // The font to be loaded from the ttf file.
SDL_Surface *TextSurface;                 // The surface necessary to create the font texture.
SDL_Surface *BackgroundImg = NULL;
SDL_Texture *ImgTexture;                                                                              // The image we will load and show on the screen                                    // The surface contained by the window
SDL_Texture *TextTexture0, *TextTexture1, *TextTexture2, *TextTexture3, *TextTexture4, *TextTexture5; // The font texture prepared for render.
SDL_Rect TextRect0, TextRect1, TextRect2, TextRect3, TextRect4, TextRect5;                            // Text rectangle area with the position for the texture text.
SDL_Point mousePosition;

bool create_text(const char *Message, int FONT_SIZE, SDL_Texture **TextTexture, SDL_Rect *TextRect, int y, int middle);
bool is_polling_event_menu();
void render();
void clear_menu();
void clear_score();
bool create_menu_texts();
bool create_score_texts(char (*board)[200]);
bool display_menu();
void check_save();
void generate_leaderboard(char (*board)[200]);
bool display_score();

int save = 0;

extern struct Ranking ranking[5];