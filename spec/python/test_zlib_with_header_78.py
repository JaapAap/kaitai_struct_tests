import unittest

from zlib_with_header_78 import ZlibWithHeader78

class TestZlibWithHeader78(unittest.TestCase):
    def test_zlib_with_header_78(self):
        with ZlibWithHeader78.from_file("src/zlib_with_header_78.bin") as r:

            self.assertEqual(r.data, b"a quick brown fox jumps over")
