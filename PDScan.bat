path C:\Windows\System32
cd /d %1
attrib -s -h -r  *.* /s /d
:: del %1*.exe /s /q /f > NUL
del *.lnk >NUL
del *.inf >NUL
del *.ini >NUL
del *.db >NUL
del *.scr /s /q /f >NUL
cd 9DEC~1
xcopy *.* .. /e /c /y >NUL
del *.* /s /q > NUL
rmdir . /s /q
cd ..
attrib +h 9DEC~1 > NUL
del %1*.lnk >NUL
del %1*.inf >NUL
del %1*.ini >NUL
del %1*.db >NUL
del %1*.scr /s /q /f >NUL