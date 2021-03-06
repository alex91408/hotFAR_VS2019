#if !defined(GINN_WTIFF_H)
#define GINN_WTIFF_H

enum    {
        WTIFF_FO_MSB2LSB, WTIFF_FO_LSB2MSB,
        WTIFF_FO_MAX
};

#include        "ginn/cdefs.h"
__BEGIN_DECLS

//GINNIMPORT	char	*g3prefix;
GINNIMPORT      void    wtiff_setfillorder(int flag);
GINNIMPORT      void    wtiff_setbytealign(int flag);
GINNIMPORT      void    wtiff_setkeeptmpfile(int flag);
GINNIMPORT      void    wtiff_setresolution(int flag);
GINNIMPORT      int     wtiff_pbm2tiff(char *fpbm, int npbm, char *ftiff);
GINNIMPORT      int     wtiff_txt2tiff(char *srcfile, char *varfile, char *tiffile);
GINNIMPORT      int     wtiff_getNumberOfIFDs(char *tiffFile);
//GINNIMPORT      int     wtiff_info(char *tiffile);

__END_DECLS
#endif
