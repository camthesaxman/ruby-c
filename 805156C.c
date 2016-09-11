int sub_805156C()
{
  unsigned int v0; // r1@1
  int v1; // r6@2
  unsigned int v2; // r0@3
  int v3; // r4@3
  int v4; // r5@3
  char *v5; // r4@3
  int v7; // [sp+1Ch] [bp-4h]@0

  v0 = Random() & 1;
  if ( v0 != -1 )
  {
    v1 = v0 + 1;
    do
    {
      v2 = (unsigned __int16)Random() % 0x14u;
      v3 = (unsigned __int8)CreateSprite(
                              (int)" [Òµtd!\bàd!\b",
                              gSineTable[((((*(_WORD *)(dword_3004854 + 84) + v2) << 16) & 0xFF0000) >> 16) + 64] / 4
                            + 120,
                              gSineTable[(((*(_WORD *)(dword_3004854 + 84) + v2) << 16) & 0xFF0000) >> 16] / 4 + 80);
      v4 = 17 * v3;
      v5 = &gSprites[68 * v3];
      *((_WORD *)v5 + 23) = 16 - (Random() & 0x1F);
      *((_WORD *)v5 + 24) = 16 - (Random() & 0x1F);
      dword_2020020[v4] = (int)sub_8051524;
      --v1;
    }
    while ( v1 );
  }
  return v7;
}
