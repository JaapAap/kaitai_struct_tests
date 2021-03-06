using NUnit.Framework;

namespace Kaitai
{
    [TestFixture]
    public class SpecSwitchManualStrElse : CommonSpec
    {
        [Test]
        public void TestSwitchManualStrElse()
        {
            var r = SwitchManualStrElse.FromFile(SourceFile("switch_opcodes2.bin"));
            Assert.AreEqual(r.Opcodes.Count, 4);

            Assert.AreEqual(r.Opcodes[0].Code, "S");
            Assert.AreEqual(((SwitchManualStrElse.Opcode.Strval)r.Opcodes[0].Body).Value, "foo");

            Assert.AreEqual(r.Opcodes[1].Code, "X");
            Assert.AreEqual(((SwitchManualStrElse.Opcode.Noneval)r.Opcodes[1].Body).Filler, 0x42);

            Assert.AreEqual(r.Opcodes[2].Code, "Y");
            Assert.AreEqual(((SwitchManualStrElse.Opcode.Noneval)r.Opcodes[2].Body).Filler, 0xcafe);

            Assert.AreEqual(r.Opcodes[3].Code, "I");
            Assert.AreEqual(((SwitchManualStrElse.Opcode.Strval)r.Opcodes[3].Body).Value, 7);
        }
    }
}
