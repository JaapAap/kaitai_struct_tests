using NUnit.Framework;

namespace Kaitai
{
    [TestFixture]
    public class SpecNestedTypes : CommonSpec
    {
        [Test]
        public void TestNestedTypes()
        {
            var r = NestedTypes.FromFile(SourceFile("fixed_struct.bin"));
            Assert.AreEqual(r.One.TypedAtRoot.ValueB, 80);
            Assert.AreEqual(r.One.TypedHere.ValueC, 65);
            Assert.AreEqual(r.Two.ValueB, 67);
        }
    }
}
