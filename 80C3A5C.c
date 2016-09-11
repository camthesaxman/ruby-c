int __fastcall sub_80C3A5C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r3@1
  __int16 v3; // r2@1
  __int16 v4; // r0@4
  unsigned int v5; // r2@5
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 14);
  if ( *((_WORD *)v2 + 14) )
  {
    if ( *((_WORD *)v2 + 14) == 1 )
    {
      v4 = *((_WORD *)v2 + 15) - 1;
      *((_WORD *)v2 + 15) = v4;
      if ( v4 == -1 )
      {
        v5 = (unsigned int)((*((_WORD *)v2 + 4) << 17) + 1346568192) >> 16;
        *(_WORD *)(192 * *((_WORD *)v2 + 5) + 0x600E142) = v5;
        *(_WORD *)(192 * *((_WORD *)v2 + 5) + 0x600E144) = v5 + 1;
        *(_WORD *)(192 * *((_WORD *)v2 + 5) + 0x600E182) = v5 + 16;
        *(_WORD *)(192 * *((_WORD *)v2 + 5) + 0x600E184) = v5 + 17;
        ++v2018005;
        DestroyTask(v1);
        audio_play(0x18u);
      }
    }
  }
  else
  {
    *((_WORD *)v2 + 15) = 40 * (3 - *((_WORD *)v2 + 4));
    *((_WORD *)v2 + 14) = 1;
  }
  return v7;
}
