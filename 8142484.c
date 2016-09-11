int __fastcall sub_8142484(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r4@1
  int v3; // r3@1
  int v4; // r9@1
  _WORD *v5; // r6@3
  int v6; // r3@3
  int v8; // [sp+1Ch] [bp-4h]@0

  v1 = 10 * a1;
  v2 = &dword_3004B20[v1];
  v3 = HIWORD(dword_3004B20[v1 + 2]);
  v4 = 20 * v3 + 33669120;
  if ( HIWORD(dword_3004B20[v1 + 3]) )
  {
    *((_WORD *)v2 + 7) = HIWORD(dword_3004B20[v1 + 3]) - 1;
  }
  else
  {
    v5 = &byte_3004B28[2 * (v3 + 5)] + v1 * 4;
    v6 = v203931C | (0x10000 << ((unsigned __int8)gSprites[68 * *v5 + 5] >> 4));
    v203931C |= 0x10000 << ((unsigned __int8)gSprites[68 * *v5 + 5] >> 4);
    if ( (signed int)*((_WORD *)v2 + 5) <= 4 && *(_WORD *)(v4 + 28) & 0x1FF )
    {
      ++*((_WORD *)v2 + 5);
      BeginNormalPaletteFade(v6, 0, 0xCu, 0xCu, 29535);
      gSprites[68 * *v5 + 5] = gSprites[68 * *v5 + 5] & 0xF3 | 4;
      *v2 = (int)sub_8142320;
    }
    else
    {
      dword_3004B20[10 * a1] = (int)sub_8142570;
    }
  }
  return v8;
}
