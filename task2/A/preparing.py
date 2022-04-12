import sys
with open(str(sys.argv[1]) + '/index.h', 'w') as fp:
	fp.write("#pragma once\n int GetOne() { return 1; }")
