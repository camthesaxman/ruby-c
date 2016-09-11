signed int __fastcall sub_805D458(int a1, int a2)
{
  int v2; // r4@1
  __int16 v3; // r1@1
  signed int result; // r0@2

  v2 = a2;
  v3 = *(_WORD *)(a2 + 50) + 1;
  *(_WORD *)(v2 + 50) = v3;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0xDF | 32 * ((v3 & 2u) << 16 >> 17);
  *(_BYTE *)(v2 + 44) |= 0x40u;
  if ( (signed int)*(_WORD *)(v2 + 50) > 64 )
  {
    get_berry_tree_graphics(a1, v2);
    *(_WORD *)(v2 + 48) = 4;
    *(_WORD *)(v2 + 50) = 0;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
