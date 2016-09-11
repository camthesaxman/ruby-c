int __fastcall sub_80627E0(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1

  v2 = a1;
  v3 = a2;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0xDF | 32 * (((unsigned int)*(_BYTE *)(a1 + 1) << 26 >> 31) ^ 1);
  if ( sub_8064824(a2) << 24 )
  {
    *(_BYTE *)(v2 + 1) |= 0x20u;
    *(_WORD *)(v3 + 50) = 3;
  }
  return 0;
}
