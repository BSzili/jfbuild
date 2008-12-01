#ifdef POLYMOST

#define PI 3.14159265358979323

typedef struct { unsigned char r, g, b, a; } coltype;

extern long rendmode;
extern float gtang;
extern float glox1, gloy1;
extern double gxyaspect, grhalfxdown10x;
extern double gcosang, gsinang, gcosang2, gsinang2;
extern double gchang, gshang, gctang, gstang;

struct glfiltermodes {
	char *name;
	long min,mag;
};
#define numglfiltermodes 6
extern struct glfiltermodes glfiltermodes[numglfiltermodes];

extern const char *TEXCACHEDIR;
void phex(unsigned char v, char *s);
void uploadtexture(long doalloc, long xsiz, long ysiz, long intexfmt, long texfmt, coltype *pic, long tsizx, long tsizy, long dameth);

#endif