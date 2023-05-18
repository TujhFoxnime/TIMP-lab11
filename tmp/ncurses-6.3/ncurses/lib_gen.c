/* This file was generated by ./base/MKlib_gen.sh generated */

/*
 * DO NOT EDIT THIS FILE BY HAND!
 *
 * This is a file of trivial functions generated from macro
 * definitions in curses.h to satisfy the XSI Curses requirement
 * that every macro also exist as a callable function.
 *
 * It will never be linked unless you call one of the entry
 * points with its normal macro definition disabled. In that
 * case, if you have no shared libraries, it will indirectly
 * pull most of the rest of the library into your link image.
 */
#define NCURSES_ATTR_T int
#include <ncurses_cfg.h>

#undef NCURSES_NOMACROS /* _this_ file uses macros */
#define NCURSES_NOMACROS 1

#include <curses.priv.h>

NCURSES_EXPORT(int) addch (const chtype z)
{
	T((T_CALLED("addch(%s)"), _tracechtype2(0,z)));
	returnCode(waddch(stdscr,(z)));
}
NCURSES_EXPORT(int) addchnstr (const chtype * a1, int z)
{
	T((T_CALLED("addchnstr(%p,%d)"), (const void *)a1, z));
	returnCode(waddchnstr(stdscr,(a1),(z)));
}
NCURSES_EXPORT(int) addchstr (const chtype * z)
{
	T((T_CALLED("addchstr(%p)"), (const void *)z));
	returnCode(waddchnstr(stdscr,(z),-1));
}
NCURSES_EXPORT(int) addnstr (const char * a1, int z)
{
	T((T_CALLED("addnstr(%s,%d)"), _nc_visbuf2(0,a1), z));
	returnCode(waddnstr(stdscr,(a1),(z)));
}
NCURSES_EXPORT(int) addstr (const char * z)
{
	T((T_CALLED("addstr(%s)"), _nc_visbuf2(0,z)));
	returnCode(waddnstr(stdscr,(z),-1));
}
NCURSES_EXPORT(int) attroff (int z)
{
	T((T_CALLED("attroff(%s)"), _traceattr2(0,(chtype)z)));
	returnCode(wattr_off(stdscr, (attr_t)((z)), ((void *)0)));
}
NCURSES_EXPORT(int) attron (int z)
{
	T((T_CALLED("attron(%s)"), _traceattr2(0,(chtype)z)));
	returnCode(wattr_on(stdscr, (attr_t)((z)), ((void *)0)));
}
NCURSES_EXPORT(int) attrset (int z)
{
	T((T_CALLED("attrset(%s)"), _traceattr2(0,(chtype)z)));
	returnIntAttr((attr_t)((0 != (const void *)((stdscr))) ? ((stdscr)->_attrs = (attr_t)((z)), (0)) : (-1)));
}
NCURSES_EXPORT(int) attr_get (attr_t * a1, short * a2, void * z GCC_UNUSED)
{
	T((T_CALLED("attr_get(%p,%p,%p)"), (const void *)a1, (const void *)a2, (const void *)z));
	returnCode(((0 != (const void *)((stdscr))) ? ((void)((0 != (const void *)(((a1)))) ? (*((a1)) = (stdscr)->_attrs) : (0)), (void)((0 != (const void *)(((a2)))) ? (*((a2)) = (short) ((int)((((unsigned long)(((stdscr)->_attrs)) & ((chtype)((((1U) << 8) - 1U)) << ((0) + 8))) >> 8)))) : (0)), (0)) : (-1)));
}
NCURSES_EXPORT(int) attr_off (attr_t a1, void * z)
{
	T((T_CALLED("attr_off(%s,%p)"), _traceattr2(0,a1), (const void *)z));
	returnCode(wattr_off(stdscr,(a1),(z)));
}
NCURSES_EXPORT(int) attr_on (attr_t a1, void * z)
{
	T((T_CALLED("attr_on(%s,%p)"), _traceattr2(0,a1), (const void *)z));
	returnCode(wattr_on(stdscr,(a1),(z)));
}
NCURSES_EXPORT(int) attr_set (attr_t a1, short a2, void * z GCC_UNUSED)
{
	T((T_CALLED("attr_set(%s,%#lx,%p)"), _traceattr2(0,a1), (long)a2, (const void *)z));
	returnCode(((0 != (const void *)((stdscr))) ? ((void)((stdscr)->_attrs = ((((a1)) & ~((chtype)((((1U) << 8) - 1U)) << ((0) + 8))) | (attr_t)(((chtype)((((a2)))) << ((0) + 8)) & ((chtype)((((1U) << 8) - 1U)) << ((0) + 8))))), (0)) : (-1)));
}
NCURSES_EXPORT(int) bkgd (chtype z)
{
	T((T_CALLED("bkgd(%s)"), _tracechtype2(0,z)));
	returnCode(wbkgd(stdscr,(z)));
}
NCURSES_EXPORT(void) bkgdset (chtype z)
{
	T((T_CALLED("bkgdset(%s)"), _tracechtype2(0,z)));
	wbkgdset(stdscr,(z));
	returnVoid;
}
NCURSES_EXPORT(int) border (chtype a1, chtype a2, chtype a3, chtype a4, chtype a5, chtype a6, chtype a7, chtype z)
{
	T((T_CALLED("border(%s,%s,%s,%s,%s,%s,%s,%s)"), _tracechtype2(0,a1), _tracechtype2(1,a2), _tracechtype2(2,a3), _tracechtype2(3,a4), _tracechtype2(4,a5), _tracechtype2(5,a6), _tracechtype2(6,a7), _tracechtype2(7,z)));
	returnCode(wborder(stdscr, a1, a2, a3, a4, a5, a6, a7, z));
}
NCURSES_EXPORT(int) box (WINDOW * a1, chtype a2, chtype z)
{
	T((T_CALLED("box(%p,%s,%s)"), (const void *)a1, _tracechtype2(1,a2), _tracechtype2(2,z)));
	returnCode(wborder(a1, a2, a2, z, z, 0, 0, 0, 0));
}
NCURSES_EXPORT(int) chgat (int a1, attr_t a2, short a3, const void * z)
{
	T((T_CALLED("chgat(%d,%s,%#lx,%p)"), a1, _traceattr2(1,a2), (long)a3, (const void *)z));
	returnCode(wchgat(stdscr,(a1),(a2),(a3),(z)));
}
NCURSES_EXPORT(int) clear (void)
{
	T((T_CALLED("clear()")));
	returnCode(wclear(stdscr));
}
NCURSES_EXPORT(int) clrtobot (void)
{
	T((T_CALLED("clrtobot()")));
	returnCode(wclrtobot(stdscr));
}
NCURSES_EXPORT(int) clrtoeol (void)
{
	T((T_CALLED("clrtoeol()")));
	returnCode(wclrtoeol(stdscr));
}
NCURSES_EXPORT(int) color_set (short a1, void * z)
{
	T((T_CALLED("color_set(%#lx,%p)"), (long)a1, (const void *)z));
	returnCode(wcolor_set(stdscr,(a1),(z)));
}
NCURSES_EXPORT(int) COLOR_PAIR (int z)
{
	T((T_CALLED("COLOR_PAIR(%d)"), z));
	returnCode((((chtype)(((z))) << ((0) + 8)) & ((chtype)((((1U) << 8) - 1U)) << ((0) + 8))));
}
NCURSES_EXPORT(int) delch (void)
{
	T((T_CALLED("delch()")));
	returnCode(wdelch(stdscr));
}
NCURSES_EXPORT(int) deleteln (void)
{
	T((T_CALLED("deleteln()")));
	returnCode(winsdelln(stdscr,-1));
}
NCURSES_EXPORT(int) echochar (const chtype z)
{
	T((T_CALLED("echochar(%s)"), _tracechtype2(0,z)));
	returnCode(wechochar(stdscr,(z)));
}
NCURSES_EXPORT(int) erase (void)
{
	T((T_CALLED("erase()")));
	returnCode(werase(stdscr));
}
NCURSES_EXPORT(chtype) getbkgd (WINDOW * z)
{
	T((T_CALLED("getbkgd(%p)"), (const void *)z));
	returnChtype(((0 != (const void *)((z))) ? ((z)->_bkgd) : 0));
}
NCURSES_EXPORT(int) getch (void)
{
	T((T_CALLED("getch()")));
	returnCode(wgetch(stdscr));
}
NCURSES_EXPORT(int) getnstr (char * a1, int z)
{
	T((T_CALLED("getnstr(%p,%d)"), _nc_visbuf2(0,a1), z));
	returnCode(wgetnstr(stdscr, a1, (z)));
}
NCURSES_EXPORT(int) getstr (char * z)
{
	T((T_CALLED("getstr(%p)"), _nc_visbuf2(0,z)));
	returnCode(wgetnstr(stdscr, (z), -1));
}
NCURSES_EXPORT(int) hline (chtype a1, int z)
{
	T((T_CALLED("hline(%s,%d)"), _tracechtype2(0,a1), z));
	returnCode(whline(stdscr, a1, (z)));
}
NCURSES_EXPORT(chtype) inch (void)
{
	T((T_CALLED("inch()")));
	returnChtype(winch(stdscr));
}
NCURSES_EXPORT(int) inchnstr (chtype * a1, int z)
{
	T((T_CALLED("inchnstr(%p,%d)"), (const void *)a1, z));
	returnCode(winchnstr(stdscr,(a1),(z)));
}
NCURSES_EXPORT(int) inchstr (chtype * z)
{
	T((T_CALLED("inchstr(%p)"), (const void *)z));
	returnCode(winchnstr(stdscr, (z), -1));
}
NCURSES_EXPORT(int) innstr (char * a1, int z)
{
	return winnstr(stdscr,(a1),(z)) ;
}
NCURSES_EXPORT(int) insch (chtype z)
{
	T((T_CALLED("insch(%s)"), _tracechtype2(0,z)));
	returnCode(winsch(stdscr,(z)));
}
NCURSES_EXPORT(int) insdelln (int z)
{
	T((T_CALLED("insdelln(%d)"), z));
	returnCode(winsdelln(stdscr,(z)));
}
NCURSES_EXPORT(int) insertln (void)
{
	T((T_CALLED("insertln()")));
	returnCode(winsdelln(stdscr,1));
}
NCURSES_EXPORT(int) insnstr (const char * a1, int z)
{
	T((T_CALLED("insnstr(%s,%d)"), _nc_visbuf2(0,a1), z));
	returnCode(winsnstr(stdscr,(a1),(z)));
}
NCURSES_EXPORT(int) insstr (const char * z)
{
	T((T_CALLED("insstr(%s)"), _nc_visbuf2(0,z)));
	returnCode(winsnstr(stdscr, (z), -1));
}
NCURSES_EXPORT(int) instr (char * z)
{
	T((T_CALLED("instr(%s)"), _nc_visbuf2(0,z)));
	returnCode(winnstr(stdscr, (z), -1));
}
NCURSES_EXPORT(int) move (int a1, int z)
{
	T((T_CALLED("move(%d,%d)"), a1, z));
	returnCode(wmove(stdscr,(a1),(z)));
}
NCURSES_EXPORT(int) mvaddch (int a1, int a2, const chtype z)
{
	T((T_CALLED("mvaddch(%d,%d,%s)"), a1, a2, _tracechtype2(2,z)));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : waddch((stdscr),((z)))));
}
NCURSES_EXPORT(int) mvaddchnstr (int a1, int a2, const chtype * a3, int z)
{
	T((T_CALLED("mvaddchnstr(%d,%d,%p,%d)"), a1, a2, (const void *)a3, z));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : waddchnstr((stdscr),((a3)),((z)))));
}
NCURSES_EXPORT(int) mvaddchstr (int a1, int a2, const chtype * z)
{
	T((T_CALLED("mvaddchstr(%d,%d,%p)"), a1, a2, (const void *)z));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : waddchnstr((stdscr),((z)),-1)));
}
NCURSES_EXPORT(int) mvaddnstr (int a1, int a2, const char * a3, int z)
{
	T((T_CALLED("mvaddnstr(%d,%d,%s,%d)"), a1, a2, _nc_visbuf2(2,a3), z));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : waddnstr((stdscr),((a3)),((z)))));
}
NCURSES_EXPORT(int) mvaddstr (int a1, int a2, const char * z)
{
	T((T_CALLED("mvaddstr(%d,%d,%s)"), a1, a2, _nc_visbuf2(2,z)));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : waddnstr((stdscr),((z)),-1)));
}
NCURSES_EXPORT(int) mvchgat (int a1, int a2, int a3, attr_t a4, short a5, const void * z)
{
	T((T_CALLED("mvchgat(%d,%d,%d,%s,%#lx,%p)"), a1, a2, a3, _traceattr2(3,a4), (long)a5, (const void *)z));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : wchgat((stdscr),((a3)),((a4)),((a5)),((z)))));
}
NCURSES_EXPORT(int) mvdelch (int a1, int z)
{
	T((T_CALLED("mvdelch(%d,%d)"), a1, z));
	returnCode((wmove((stdscr),((a1)),((z))) == (-1) ? (-1) : wdelch(stdscr)));
}
NCURSES_EXPORT(int) mvgetch (int a1, int z)
{
	T((T_CALLED("mvgetch(%d,%d)"), a1, z));
	returnCode((wmove((stdscr),((a1)),((z))) == (-1) ? (-1) : wgetch(stdscr)));
}
NCURSES_EXPORT(int) mvgetnstr (int a1, int a2, char * a3, int z)
{
	T((T_CALLED("mvgetnstr(%d,%d,%p,%d)"), a1, a2, _nc_visbuf2(2,a3), z));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : wgetnstr((stdscr),((a3)),((z)))));
}
NCURSES_EXPORT(int) mvgetstr (int a1, int a2, char * z)
{
	T((T_CALLED("mvgetstr(%d,%d,%p)"), a1, a2, _nc_visbuf2(2,z)));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : wgetnstr((stdscr), ((z)), -1)));
}
NCURSES_EXPORT(int) mvhline (int a1, int a2, chtype a3, int z)
{
	T((T_CALLED("mvhline(%d,%d,%s,%d)"), a1, a2, _tracechtype2(2,a3), z));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : whline((stdscr),((a3)),((z)))));
}
NCURSES_EXPORT(chtype) mvinch (int a1, int z)
{
	T((T_CALLED("mvinch(%d,%d)"), a1, z));
	returnChtype((wmove((stdscr),((a1)),((z))) == (-1) ? (chtype)((-1)) : winch(stdscr)));
}
NCURSES_EXPORT(int) mvinchnstr (int a1, int a2, chtype * a3, int z)
{
	T((T_CALLED("mvinchnstr(%d,%d,%p,%d)"), a1, a2, (const void *)a3, z));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : winchnstr((stdscr),((a3)),((z)))));
}
NCURSES_EXPORT(int) mvinchstr (int a1, int a2, chtype * z)
{
	T((T_CALLED("mvinchstr(%d,%d,%p)"), a1, a2, (const void *)z));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : winchnstr((stdscr), ((z)), -1)));
}
NCURSES_EXPORT(int) mvinnstr (int a1, int a2, char * a3, int z)
{
	return (wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : winnstr((stdscr),((a3)),((z)))) ;
}
NCURSES_EXPORT(int) mvinsch (int a1, int a2, chtype z)
{
	T((T_CALLED("mvinsch(%d,%d,%s)"), a1, a2, _tracechtype2(2,z)));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : winsch((stdscr),((z)))));
}
NCURSES_EXPORT(int) mvinsnstr (int a1, int a2, const char * a3, int z)
{
	T((T_CALLED("mvinsnstr(%d,%d,%s,%d)"), a1, a2, _nc_visbuf2(2,a3), z));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : winsnstr((stdscr),((a3)),((z)))));
}
NCURSES_EXPORT(int) mvinsstr (int a1, int a2, const char * z)
{
	T((T_CALLED("mvinsstr(%d,%d,%s)"), a1, a2, _nc_visbuf2(2,z)));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : winsnstr((stdscr), ((z)), -1)));
}
NCURSES_EXPORT(int) mvinstr (int a1, int a2, char * z)
{
	T((T_CALLED("mvinstr(%d,%d,%s)"), a1, a2, _nc_visbuf2(2,z)));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : winnstr((stdscr), ((z)), -1)));
}
NCURSES_EXPORT(int) mvvline (int a1, int a2, chtype a3, int z)
{
	T((T_CALLED("mvvline(%d,%d,%s,%d)"), a1, a2, _tracechtype2(2,a3), z));
	returnCode((wmove((stdscr),((a1)),((a2))) == (-1) ? (-1) : wvline((stdscr),((a3)),((z)))));
}
NCURSES_EXPORT(int) mvwaddch (WINDOW * a1, int a2, int a3, const chtype z)
{
	T((T_CALLED("mvwaddch(%p,%d,%d,%s)"), (const void *)a1, a2, a3, _tracechtype2(3,z)));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : waddch((a1),(z))));
}
NCURSES_EXPORT(int) mvwaddchnstr (WINDOW * a1, int a2, int a3, const chtype * a4, int z)
{
	T((T_CALLED("mvwaddchnstr(%p,%d,%d,%p,%d)"), (const void *)a1, a2, a3, (const void *)a4, z));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : waddchnstr((a1),(a4),(z))));
}
NCURSES_EXPORT(int) mvwaddchstr (WINDOW * a1, int a2, int a3, const chtype * z)
{
	T((T_CALLED("mvwaddchstr(%p,%d,%d,%p)"), (const void *)a1, a2, a3, (const void *)z));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : waddchnstr((a1),(z),-1)));
}
NCURSES_EXPORT(int) mvwaddnstr (WINDOW * a1, int a2, int a3, const char * a4, int z)
{
	T((T_CALLED("mvwaddnstr(%p,%d,%d,%s,%d)"), (const void *)a1, a2, a3, _nc_visbuf2(3,a4), z));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : waddnstr((a1),(a4),(z))));
}
NCURSES_EXPORT(int) mvwaddstr (WINDOW * a1, int a2, int a3, const char * z)
{
	T((T_CALLED("mvwaddstr(%p,%d,%d,%s)"), (const void *)a1, a2, a3, _nc_visbuf2(3,z)));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : waddnstr((a1),(z),-1)));
}
NCURSES_EXPORT(int) mvwchgat (WINDOW * a1, int a2, int a3, int a4, attr_t a5, short a6, const void * z)
{
	T((T_CALLED("mvwchgat(%p,%d,%d,%d,%s,%#lx,%p)"), (const void *)a1, a2, a3, a4, _traceattr2(4,a5), (long)a6, (const void *)z));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : wchgat((a1),(a4),(a5),(a6),(z))));
}
NCURSES_EXPORT(int) mvwdelch (WINDOW * a1, int a2, int z)
{
	T((T_CALLED("mvwdelch(%p,%d,%d)"), (const void *)a1, a2, z));
	returnCode((wmove((a1),(a2),(z)) == (-1) ? (-1) : wdelch(a1)));
}
NCURSES_EXPORT(int) mvwgetch (WINDOW * a1, int a2, int z)
{
	T((T_CALLED("mvwgetch(%p,%d,%d)"), (const void *)a1, a2, z));
	returnCode((wmove((a1),(a2),(z)) == (-1) ? (-1) : wgetch(a1)));
}
NCURSES_EXPORT(int) mvwgetnstr (WINDOW * a1, int a2, int a3, char * a4, int z)
{
	T((T_CALLED("mvwgetnstr(%p,%d,%d,%p,%d)"), (const void *)a1, a2, a3, _nc_visbuf2(3,a4), z));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : wgetnstr((a1),(a4),(z))));
}
NCURSES_EXPORT(int) mvwgetstr (WINDOW * a1, int a2, int a3, char * z)
{
	T((T_CALLED("mvwgetstr(%p,%d,%d,%p)"), (const void *)a1, a2, a3, _nc_visbuf2(3,z)));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : wgetnstr((a1), (z), -1)));
}
NCURSES_EXPORT(int) mvwhline (WINDOW * a1, int a2, int a3, chtype a4, int z)
{
	T((T_CALLED("mvwhline(%p,%d,%d,%s,%d)"), (const void *)a1, a2, a3, _tracechtype2(3,a4), z));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : whline((a1),(a4),(z))));
}
NCURSES_EXPORT(chtype) mvwinch (WINDOW * a1, int a2, int z)
{
	T((T_CALLED("mvwinch(%p,%d,%d)"), (const void *)a1, a2, z));
	returnChtype((wmove((a1),(a2),(z)) == (-1) ? (chtype)((-1)) : winch(a1)));
}
NCURSES_EXPORT(int) mvwinchnstr (WINDOW * a1, int a2, int a3, chtype * a4, int z)
{
	T((T_CALLED("mvwinchnstr(%p,%d,%d,%p,%d)"), (const void *)a1, a2, a3, (const void *)a4, z));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : winchnstr((a1),(a4),(z))));
}
NCURSES_EXPORT(int) mvwinchstr (WINDOW * a1, int a2, int a3, chtype * z)
{
	T((T_CALLED("mvwinchstr(%p,%d,%d,%p)"), (const void *)a1, a2, a3, (const void *)z));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : winchnstr((a1), (z), -1)));
}
NCURSES_EXPORT(int) mvwinnstr (WINDOW * a1, int a2, int a3, char * a4, int z)
{
	return (wmove((a1),(a2),(a3)) == (-1) ? (-1) : winnstr((a1),(a4),(z))) ;
}
NCURSES_EXPORT(int) mvwinsch (WINDOW * a1, int a2, int a3, chtype z)
{
	T((T_CALLED("mvwinsch(%p,%d,%d,%s)"), (const void *)a1, a2, a3, _tracechtype2(3,z)));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : winsch((a1),(z))));
}
NCURSES_EXPORT(int) mvwinsnstr (WINDOW * a1, int a2, int a3, const char * a4, int z)
{
	T((T_CALLED("mvwinsnstr(%p,%d,%d,%s,%d)"), (const void *)a1, a2, a3, _nc_visbuf2(3,a4), z));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : winsnstr((a1),(a4),(z))));
}
NCURSES_EXPORT(int) mvwinsstr (WINDOW * a1, int a2, int a3, const char * z)
{
	T((T_CALLED("mvwinsstr(%p,%d,%d,%s)"), (const void *)a1, a2, a3, _nc_visbuf2(3,z)));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : winsnstr((a1), (z), -1)));
}
NCURSES_EXPORT(int) mvwinstr (WINDOW * a1, int a2, int a3, char * z)
{
	T((T_CALLED("mvwinstr(%p,%d,%d,%s)"), (const void *)a1, a2, a3, _nc_visbuf2(3,z)));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : winnstr((a1), (z), -1)));
}
NCURSES_EXPORT(int) mvwvline (WINDOW * a1, int a2, int a3, chtype a4, int z)
{
	T((T_CALLED("mvwvline(%p,%d,%d,%s,%d)"), (const void *)a1, a2, a3, _tracechtype2(3,a4), z));
	returnCode((wmove((a1),(a2),(a3)) == (-1) ? (-1) : wvline((a1),(a4),(z))));
}
NCURSES_EXPORT(int) PAIR_NUMBER (int z)
{
	T((T_CALLED("PAIR_NUMBER(%d)"), z));
	returnCode(((int)((((unsigned long)((z)) & ((chtype)((((1U) << 8) - 1U)) << ((0) + 8))) >> 8))));
}
NCURSES_EXPORT(int) redrawwin (WINDOW * z)
{
	T((T_CALLED("redrawwin(%p)"), (const void *)z));
	returnCode(wredrawln(z, 0, ((0 != (const void *)((z))) ? (z)->_maxy+1 : -1)));
}
NCURSES_EXPORT(int) refresh (void)
{
	T((T_CALLED("refresh()")));
	returnCode(wrefresh(stdscr));
}
NCURSES_EXPORT(int) scrl (int z)
{
	T((T_CALLED("scrl(%d)"), z));
	returnCode(wscrl(stdscr,(z)));
}
NCURSES_EXPORT(int) scroll (WINDOW * z)
{
	T((T_CALLED("scroll(%p)"), (const void *)z));
	returnCode(wscrl(z,1));
}
NCURSES_EXPORT(int) setscrreg (int a1, int z)
{
	T((T_CALLED("setscrreg(%d,%d)"), a1, z));
	returnCode(wsetscrreg(stdscr,(a1),(z)));
}
#if USE_WIDEC_SUPPORT
NCURSES_EXPORT(int) slk_attr_off (const attr_t a1, void * z)
{
	T((T_CALLED("slk_attr_off(%s,%p)"), _traceattr2(0,a1), (const void *)z));
	returnCode(((z) ? (-1) : slk_attroff(a1)));
}
#endif
#if USE_WIDEC_SUPPORT
NCURSES_EXPORT(int) slk_attr_on (attr_t a1, void * z)
{
	T((T_CALLED("slk_attr_on(%s,%p)"), _traceattr2(0,a1), (const void *)z));
	returnCode(((z) ? (-1) : slk_attron(a1)));
}
#endif
NCURSES_EXPORT(int) standout (void)
{
	T((T_CALLED("standout()")));
	returnIntAttr((attr_t)(((0 != (const void *)((stdscr))) ? ((stdscr)->_attrs = (attr_t)(((chtype)((1U)) << ((8) + 8))), (0)) : (-1))));
}
NCURSES_EXPORT(int) standend (void)
{
	T((T_CALLED("standend()")));
	returnIntAttr((attr_t)(((0 != (const void *)((stdscr))) ? ((stdscr)->_attrs = (attr_t)((1U - 1U)), (0)) : (-1))));
}
NCURSES_EXPORT(void) timeout (int z)
{
	T((T_CALLED("timeout(%d)"), z));
	wtimeout(stdscr,(z));
	returnVoid;
}
NCURSES_EXPORT(int) touchline (WINDOW * a1, int a2, int z)
{
	T((T_CALLED("touchline(%p,%d,%d)"), (const void *)a1, a2, z));
	returnCode(wtouchln((a1), a2, z, 1));
}
NCURSES_EXPORT(int) touchwin (WINDOW * z)
{
	T((T_CALLED("touchwin(%p)"), (const void *)z));
	returnCode(wtouchln((z), 0, ((0 != (const void *)((z))) ? ((z)->_maxy + 1) : (-1)), 1));
}
NCURSES_EXPORT(int) untouchwin (WINDOW * z)
{
	T((T_CALLED("untouchwin(%p)"), (const void *)z));
	returnCode(wtouchln((z), 0, ((0 != (const void *)((z))) ? ((z)->_maxy + 1) : (-1)), 0));
}
NCURSES_EXPORT(int) vline (chtype a1, int z)
{
	T((T_CALLED("vline(%s,%d)"), _tracechtype2(0,a1), z));
	returnCode(wvline(stdscr, a1, (z)));
}
NCURSES_EXPORT(int) waddchstr (WINDOW * a1, const chtype * z)
{
	T((T_CALLED("waddchstr(%p,%p)"), (const void *)a1, (const void *)z));
	returnCode(waddchnstr(a1,z,-1));
}
NCURSES_EXPORT(int) waddstr (WINDOW * a1, const char * z)
{
	T((T_CALLED("waddstr(%p,%s)"), (const void *)a1, _nc_visbuf2(1,z)));
	returnCode(waddnstr(a1,z,-1));
}
NCURSES_EXPORT(int) wattron (WINDOW * a1, int z)
{
	T((T_CALLED("wattron(%p,%d)"), (const void *)a1, z));
	returnCode(wattr_on(a1, (attr_t)(z), ((void *)0)));
}
NCURSES_EXPORT(int) wattroff (WINDOW * a1, int z)
{
	T((T_CALLED("wattroff(%p,%d)"), (const void *)a1, z));
	returnCode(wattr_off(a1, (attr_t)(z), ((void *)0)));
}
NCURSES_EXPORT(int) wattrset (WINDOW * a1, int z)
{
	T((T_CALLED("wattrset(%p,%d)"), (const void *)a1, z));
	returnIntAttr((attr_t)((0 != (const void *)((a1))) ? ((a1)->_attrs = (attr_t)(z), (0)) : (-1)));
}
NCURSES_EXPORT(int) wattr_get (WINDOW * a1, attr_t * a2, short * a3, void * z GCC_UNUSED)
{
	T((T_CALLED("wattr_get(%p,%p,%p,%p)"), (const void *)a1, (const void *)a2, (const void *)a3, (const void *)z));
	returnCode(((0 != (const void *)((a1))) ? ((void)((0 != (const void *)((a2))) ? (*(a2) = (a1)->_attrs) : (0)), (void)((0 != (const void *)((a3))) ? (*(a3) = (short) ((int)((((unsigned long)(((a1)->_attrs)) & ((chtype)((((1U) << 8) - 1U)) << ((0) + 8))) >> 8)))) : (0)), (0)) : (-1)));
}
NCURSES_EXPORT(int) wattr_set (WINDOW * a1, attr_t a2, short a3, void * z GCC_UNUSED)
{
	T((T_CALLED("wattr_set(%p,%s,%#lx,%p)"), (const void *)a1, _traceattr2(1,a2), (long)a3, (const void *)z));
	returnCode(((0 != (const void *)((a1))) ? ((void)((a1)->_attrs = (((a2) & ~((chtype)((((1U) << 8) - 1U)) << ((0) + 8))) | (attr_t)(((chtype)(((a3))) << ((0) + 8)) & ((chtype)((((1U) << 8) - 1U)) << ((0) + 8))))), (0)) : (-1)));
}
NCURSES_EXPORT(int) wdeleteln (WINDOW * z)
{
	T((T_CALLED("wdeleteln(%p)"), (const void *)z));
	returnCode(winsdelln(z,-1));
}
NCURSES_EXPORT(int) wgetstr (WINDOW * a1, char * z)
{
	T((T_CALLED("wgetstr(%p,%p)"), (const void *)a1, _nc_visbuf2(1,z)));
	returnCode(wgetnstr(a1, z, -1));
}
NCURSES_EXPORT(int) winchstr (WINDOW * a1, chtype * z)
{
	T((T_CALLED("winchstr(%p,%p)"), (const void *)a1, (const void *)z));
	returnCode(winchnstr(a1, z, -1));
}
NCURSES_EXPORT(int) winsertln (WINDOW * z)
{
	T((T_CALLED("winsertln(%p)"), (const void *)z));
	returnCode(winsdelln(z,1));
}
NCURSES_EXPORT(int) winsstr (WINDOW * a1, const char * z)
{
	T((T_CALLED("winsstr(%p,%s)"), (const void *)a1, _nc_visbuf2(1,z)));
	returnCode(winsnstr(a1, z, -1));
}
NCURSES_EXPORT(int) winstr (WINDOW * a1, char * z)
{
	T((T_CALLED("winstr(%p,%s)"), (const void *)a1, _nc_visbuf2(1,z)));
	returnCode(winnstr(a1, z, -1));
}
NCURSES_EXPORT(int) wstandout (WINDOW * z)
{
	T((T_CALLED("wstandout(%p)"), (const void *)z));
	returnIntAttr((attr_t)(((0 != (const void *)((z))) ? ((z)->_attrs = (attr_t)(((chtype)((1U)) << ((8) + 8))), (0)) : (-1))));
}
NCURSES_EXPORT(int) wstandend (WINDOW * z)
{
	T((T_CALLED("wstandend(%p)"), (const void *)z));
	returnIntAttr((attr_t)(((0 != (const void *)((z))) ? ((z)->_attrs = (attr_t)((1U - 1U)), (0)) : (-1))));
}
NCURSES_EXPORT(int) getattrs (const WINDOW * z)
{
	T((T_CALLED("getattrs(%p)"), (const void *)z));
	returnCode((int)((0 != (const void *)((z))) ? (z)->_attrs : (1U - 1U)));
}
NCURSES_EXPORT(int) getcurx (const WINDOW * z)
{
	T((T_CALLED("getcurx(%p)"), (const void *)z));
	returnCode(((0 != (const void *)((z))) ? (z)->_curx : (-1)));
}
NCURSES_EXPORT(int) getcury (const WINDOW * z)
{
	T((T_CALLED("getcury(%p)"), (const void *)z));
	returnCode(((0 != (const void *)((z))) ? (z)->_cury : (-1)));
}
NCURSES_EXPORT(int) getbegx (const WINDOW * z)
{
	T((T_CALLED("getbegx(%p)"), (const void *)z));
	returnCode(((0 != (const void *)((z))) ? (z)->_begx : (-1)));
}
NCURSES_EXPORT(int) getbegy (const WINDOW * z)
{
	T((T_CALLED("getbegy(%p)"), (const void *)z));
	returnCode(((0 != (const void *)((z))) ? (z)->_begy : (-1)));
}
NCURSES_EXPORT(int) getmaxx (const WINDOW * z)
{
	T((T_CALLED("getmaxx(%p)"), (const void *)z));
	returnCode(((0 != (const void *)((z))) ? ((z)->_maxx + 1) : (-1)));
}
NCURSES_EXPORT(int) getmaxy (const WINDOW * z)
{
	T((T_CALLED("getmaxy(%p)"), (const void *)z));
	returnCode(((0 != (const void *)((z))) ? ((z)->_maxy + 1) : (-1)));
}
NCURSES_EXPORT(int) getparx (const WINDOW * z)
{
	T((T_CALLED("getparx(%p)"), (const void *)z));
	returnCode(((0 != (const void *)((z))) ? (z)->_parx : (-1)));
}
NCURSES_EXPORT(int) getpary (const WINDOW * z)
{
	T((T_CALLED("getpary(%p)"), (const void *)z));
	returnCode(((0 != (const void *)((z))) ? (z)->_pary : (-1)));
}
NCURSES_EXPORT(WINDOW *) wgetparent (const WINDOW * z)
{
	T((T_CALLED("wgetparent(%p)"), (const void *)z));
	returnWin(((0 != (const void *)((z))) ? (z)->_parent : 0));
}
NCURSES_EXPORT(NCURSES_BOOL) is_cleared (const WINDOW * z)
{
	T((T_CALLED("is_cleared(%p)"), (const void *)z));
	returnBool(((0 != (const void *)((z))) ? (z)->_clear : 0));
}
NCURSES_EXPORT(NCURSES_BOOL) is_idcok (const WINDOW * z)
{
	T((T_CALLED("is_idcok(%p)"), (const void *)z));
	returnBool(((0 != (const void *)((z))) ? (z)->_idcok : 0));
}
NCURSES_EXPORT(NCURSES_BOOL) is_idlok (const WINDOW * z)
{
	T((T_CALLED("is_idlok(%p)"), (const void *)z));
	returnBool(((0 != (const void *)((z))) ? (z)->_idlok : 0));
}
NCURSES_EXPORT(NCURSES_BOOL) is_immedok (const WINDOW * z)
{
	T((T_CALLED("is_immedok(%p)"), (const void *)z));
	returnBool(((0 != (const void *)((z))) ? (z)->_immed : 0));
}
NCURSES_EXPORT(NCURSES_BOOL) is_keypad (const WINDOW * z)
{
	T((T_CALLED("is_keypad(%p)"), (const void *)z));
	returnBool(((0 != (const void *)((z))) ? (z)->_use_keypad : 0));
}
NCURSES_EXPORT(NCURSES_BOOL) is_leaveok (const WINDOW * z)
{
	T((T_CALLED("is_leaveok(%p)"), (const void *)z));
	returnBool(((0 != (const void *)((z))) ? (z)->_leaveok : 0));
}
NCURSES_EXPORT(NCURSES_BOOL) is_nodelay (const WINDOW * z)
{
	T((T_CALLED("is_nodelay(%p)"), (const void *)z));
	returnBool(((0 != (const void *)((z))) ? ((z)->_delay == 0) : 0));
}
NCURSES_EXPORT(NCURSES_BOOL) is_notimeout (const WINDOW * z)
{
	T((T_CALLED("is_notimeout(%p)"), (const void *)z));
	returnBool(((0 != (const void *)((z))) ? (z)->_notimeout : 0));
}
NCURSES_EXPORT(NCURSES_BOOL) is_pad (const WINDOW * z)
{
	T((T_CALLED("is_pad(%p)"), (const void *)z));
	returnBool(((0 != (const void *)((z))) ? ((z)->_flags & 0x10) != 0 : 0));
}
NCURSES_EXPORT(NCURSES_BOOL) is_scrollok (const WINDOW * z)
{
	T((T_CALLED("is_scrollok(%p)"), (const void *)z));
	returnBool(((0 != (const void *)((z))) ? (z)->_scroll : 0));
}
NCURSES_EXPORT(NCURSES_BOOL) is_subwin (const WINDOW * z)
{
	T((T_CALLED("is_subwin(%p)"), (const void *)z));
	returnBool(((0 != (const void *)((z))) ? ((z)->_flags & 0x01) != 0 : 0));
}
NCURSES_EXPORT(NCURSES_BOOL) is_syncok (const WINDOW * z)
{
	T((T_CALLED("is_syncok(%p)"), (const void *)z));
	returnBool(((0 != (const void *)((z))) ? (z)->_sync : 0));
}
NCURSES_EXPORT(int) wgetdelay (const WINDOW * z)
{
	T((T_CALLED("wgetdelay(%p)"), (const void *)z));
	returnCode(((0 != (const void *)((z))) ? (z)->_delay : 0));
}
NCURSES_EXPORT(int) wgetscrreg (const WINDOW * a1, int * a2, int * z)
{
	T((T_CALLED("wgetscrreg(%p,%p,%p)"), (const void *)a1, (const void *)a2, (const void *)z));
	returnCode(((0 != (const void *)((a1))) ? (*(a2) = (a1)->_regtop, *(z) = (a1)->_regbottom, (0)) : (-1)));
}
NCURSES_EXPORT(NCURSES_BOOL) mouse_trafo (int * a1, int * a2, NCURSES_BOOL z)
{
	T((T_CALLED("mouse_trafo(%p,%p,%#lx)"), (const void *)a1, (const void *)a2, (long)z));
	returnBool(wmouse_trafo(stdscr,a1,a2,z));
}