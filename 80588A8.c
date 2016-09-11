int __fastcall npc_clear_strange_bits(int a1)
{
  int result; // r0@1

  *(_BYTE *)(a1 + 1) &= 0xE9u;
  result = v202E858 & 0x7F;
  v202E858 &= 0x7Fu;
  return result;
}
