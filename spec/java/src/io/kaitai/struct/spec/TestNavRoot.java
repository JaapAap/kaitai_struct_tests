package io.kaitai.struct.spec;

import io.kaitai.struct.testformats.NavRoot;
import org.testng.annotations.Test;

import static org.testng.Assert.assertEquals;

public class TestNavRoot extends CommonSpec {
    @Test
    public void testNavRoot() throws Exception {
        NavRoot r = NavRoot.fromFile(SRC_DIR + "nav.bin");

        assertEquals(r.header().qtyEntries(), 2);
        assertEquals(r.header().filenameLen(), 8);

        assertEquals(r.index().entries().size(), 2);
        assertEquals(r.index().entries().get(0).filename(), "FIRST___");
        assertEquals(r.index().entries().get(1).filename(), "SECOND__");
    }
}
