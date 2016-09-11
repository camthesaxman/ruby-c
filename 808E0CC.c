int __fastcall sub_808E0CC(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // r5@1
  unsigned int v3; // r3@1
  int v4; // r0@4
  int v5; // r0@6
  int v6; // r0@8
  int v7; // r0@9
  int v9; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = 0;
  do
  {
    *(_WORD *)(v202FFB4 + 1566 + 2 * v3);
    *(_WORD *)(v202FFB4 + 1566 + 2 * v3) = -1;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 3 );
  *(_WORD *)(v202FFB4 + 1574) = -1;
  sub_808DBE8(0, a1, a2);
  v400001A = *(_BYTE *)(v202FFB4 + 1581);
  if ( (sub_808E888((v2 - 1) & 0xFFFF) & 0xFFFF) != 0xFFFF )
  {
    v4 = 17 * (unsigned __int8)sub_808E8C8();
    dword_2020020[v4] = (int)sub_808EE28;
    *(_WORD *)&gSprites[v4 * 4 + 56] = -32;
  }
  if ( (sub_808E888(v2) & 0xFFFF) != 0xFFFF )
  {
    v5 = 17 * (unsigned __int8)sub_808E8C8();
    dword_2020020[v5] = (int)sub_808EE28;
    *(_WORD *)&gSprites[v5 * 4 + 56] = 0;
  }
  if ( (sub_808E888((v2 + 1) & 0xFFFF) & 0xFFFF) != 0xFFFF )
  {
    v6 = 17 * (unsigned __int8)sub_808E8C8();
    dword_2020020[v6] = (int)sub_808EE28;
    *(_WORD *)&gSprites[v6 * 4 + 56] = 32;
  }
  v7 = v202FFB4;
  *(_WORD *)(v202FFB4 + 1584) = 0;
  *(_WORD *)(v7 + 1586) = 0;
  return v9;
}
