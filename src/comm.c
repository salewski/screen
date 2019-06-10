/* Copyright (c) 2008, 2009
 *      Juergen Weigert (jnweiger@immd4.informatik.uni-erlangen.de)
 *      Michael Schroeder (mlschroe@immd4.informatik.uni-erlangen.de)
 *      Micah Cowan (micah@cowan.name)
 *      Sadrul Habib Chowdhury (sadrul@users.sourceforge.net)
 * Copyright (c) 1993-2002, 2003, 2005, 2006, 2007
 *      Juergen Weigert (jnweiger@immd4.informatik.uni-erlangen.de)
 *      Michael Schroeder (mlschroe@immd4.informatik.uni-erlangen.de)
 * Copyright (c) 1987 Oliver Laumann
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program (see the file COPYING); if not, see
 * http://www.gnu.org/licenses/, or contact Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02111-1301  USA
 *
 ****************************************************************
 */

#include "config.h"

#include "comm.h"

/* Must be in alpha order ! */

struct comm comms[RC_LAST + 1] =
{
  { "acladd",		{NULL} },
  { "aclchg",		{NULL} },
  { "acldel",		{NULL} },
  { "aclgrp",		{NULL} },
  { "aclumask",		{NULL} },
  { "activity",		{NULL} },
  { "addacl",		{NULL} },
  { "allpartial",	{NULL} },
  { "altscreen",	{NULL} },
  { "at",		{NULL} },
  { "autodetach",	{NULL} },
  { "autonuke",		{NULL} },
  { "backtick",		{NULL} },
  { "bce",		{NULL} },
  { "bell",		{NULL} },
  { "bell_msg",		{NULL} },
  { "bind",		{NULL} },
  { "bindkey",		{NULL} },
  { "blanker",		{NULL} },
  { "blankerprg",	{NULL} },
  { "break",		{NULL} },
  { "breaktype",	{NULL} },
  { "bufferfile",	{NULL} },
  { "bumpleft",		{NULL} },
  { "bumpright",	{NULL} },
  { "c1",		{NULL} },
  { "caption",		{NULL} },
  { "chacl",		{NULL} },
  { "charset",          {NULL} },
  { "chdir",		{NULL} },
  { "cjkwidth",		{NULL} },
  { "clear",		{NULL} },
  { "collapse",		{NULL} },
  { "colon",		{NULL} },
  { "command",		{NULL} },
  { "compacthist",	{NULL} },
  { "console",		{NULL} },
  { "copy",		{NULL} },
  { "crlf",		{NULL} },
  { "defautonuke",	{NULL} },
  { "defbce",		{NULL} },
  { "defbreaktype",	{NULL} },
  { "defc1",		{NULL} },
  { "defcharset",       {NULL} },
  { "defdynamictitle",	{NULL} },
  { "defencoding",	{NULL} },
  { "defescape",	{NULL} },
  { "defflow",		{NULL} },
  { "defgr",		{NULL} },
  { "defhstatus",	{NULL} },
  { "defkanji",		{NULL} },
  { "deflog",		{NULL} },
#if defined(ENABLE_UTMP)
  { "deflogin",		{NULL} },
#endif
  { "defmode",		{NULL} },
  { "defmonitor",	{NULL} },
  { "defmousetrack",	{NULL} },
  { "defnonblock",	{NULL} },
  { "defobuflimit",	{NULL} },
  { "defscrollback",	{NULL} },
  { "defshell",		{NULL} },
  { "defsilence",	{NULL} },
  { "defslowpaste",	{NULL} },
  { "defutf8",		{NULL} },
  { "defwrap",		{NULL} },
  { "defwritelock",	{NULL} },
  { "detach",		{NULL} },
  { "digraph",		{NULL} },
  { "dinfo",		{NULL} },
  { "displays",		{NULL} },
  { "dumptermcap",	{NULL} },
  { "dynamictitle",	{NULL} },
  { "echo",		{NULL} },
  { "encoding",		{NULL} },
  { "escape",		{NULL} },
  { "eval",		{NULL} },
  { "exec",		{NULL} },
  { "fit",		{NULL} },
  { "flow",		{NULL} },
  { "focus",		{NULL} },
  { "focusminsize",	{NULL} },
  { "gr",		{NULL} },
  { "group",            {NULL} },
  { "hardcopy",		{NULL} },
  { "hardcopy_append",	{NULL} },
  { "hardcopydir",	{NULL} },
  { "hardstatus",	{NULL} },
  { "height",		{NULL} },
  { "help",		{NULL} },
  { "history",		{NULL} },
  { "hstatus",		{NULL} },
  { "idle",		{NULL} },
  { "ignorecase",	{NULL} },
  { "info",		{NULL} },
  { "kanji",		{NULL} },
  { "kill",		{NULL} },
  { "lastmsg",		{NULL} },
  { "layout",           {NULL} },
  { "license",		{NULL} },
  { "lockscreen",	{NULL} },
  { "log",		{NULL} },
  { "logfile",		{NULL} },
#if defined(ENABLE_UTMP)
  { "login",		{NULL} },
#endif
  { "logtstamp",	{NULL} },
  { "mapdefault",	{NULL} },
  { "mapnotnext",	{NULL} },
  { "maptimeout",	{NULL} },
  { "markkeys",		{NULL} },
  { "meta",		{NULL} },
  { "monitor",		{NULL} },
  { "mousetrack",	{NULL} },
  { "msgminwait",	{NULL} },
  { "msgwait",		{NULL} },
  { "multiinput",	{NULL} },
  { "multiuser",	{NULL} },
  { "next",		{NULL} },
  { "nonblock",		{NULL} },
  { "number",		{NULL} },
  { "obuflimit",	{NULL} },
  { "only",		{NULL} },
  { "other",		{NULL} },
  { "parent",		{NULL} },
  { "partial",		{NULL} },
  { "paste",		{NULL} },
  { "pastefont",	{NULL} },
  { "pow_break",	{NULL} },
  { "pow_detach",	{NULL} },
  { "pow_detach_msg",	{NULL} },
  { "prev",		{NULL} },
  { "printcmd",		{NULL} },
  { "process",		{NULL} },
  { "quit",		{NULL} },
  { "readbuf",		{NULL} },
  { "readreg",          {NULL} },
  { "redisplay",	{NULL} },
  { "register",		{NULL} },
  { "remove",		{NULL} },
  { "removebuf",	{NULL} },
  { "rendition",	{NULL} },
  { "reset",		{NULL} },
  { "resize",		{NULL} },
  { "screen",		{NULL} },
  { "scrollback",	{NULL} },
  { "select",		{NULL} },
  { "sessionname",	{NULL} },
  { "setenv",		{NULL} },
  { "setsid",		{NULL} },
  { "shell",		{NULL} },
  { "shelltitle",	{NULL} },
  { "silence",		{NULL} },
  { "silencewait",	{NULL} },
  { "sleep",		{NULL} },
  { "slowpaste",	{NULL} },
  { "sorendition",      {NULL} },
  { "sort",		{NULL} },
  { "source",		{NULL} },
  { "split",		{NULL} },
  { "startup_message",	{NULL} },
  { "status",		{NULL} },
  { "stuff",		{NULL} },
  { "su",		{NULL} },
  { "suspend",		{NULL} },
  { "term",		{NULL} },
  { "termcap",		{NULL} },
  { "termcapinfo",	{NULL} },
  { "terminfo",		{NULL} },
  { "title",		{NULL} },
  { "truecolor",	{NULL} },
  { "umask",		{NULL} },
  { "unbindall",	{NULL} },
  { "unsetenv",		{NULL} },
  { "utf8",		{NULL} },
  { "vbell",		{NULL} },
  { "vbell_msg",	{NULL} },
  { "vbellwait",	{NULL} },
  { "verbose",		{NULL} },
  { "version",		{NULL} },
  { "wall",		{NULL} },
  { "width",		{NULL} },
  { "windowlist",	{NULL} },
  { "windows",		{NULL} },
  { "wrap",		{NULL} },
  { "writebuf",		{NULL} },
  { "writelock",	{NULL} },
  { "xoff",		{NULL} },
  { "xon",		{NULL} },
  { "zmodem",		{NULL} },
  { "zombie",		{NULL} },
  { "zombie_timeout",	{NULL} }
};
