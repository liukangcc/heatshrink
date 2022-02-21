from building import *

# get current dir path
cwd = GetCurrentDir()
path = [cwd]

src = Glob('*.c')

group = DefineGroup('heatshrink', src, depend = ['PKG_USING_HEATSHRINK'], CPPPATH = path)

Return('group')
