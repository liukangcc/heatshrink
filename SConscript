from building import *

# get current dir path
cwd = GetCurrentDir()

src = Glob('*.c')

group = DefineGroup('heatshrink', src, depend = ['PKG_USING_HEATSHRINK'], CPPPATH = cwd)

Return('group')
