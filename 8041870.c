unsigned int __fastcall sub_8041870(unsigned __int16 a1)
{
  unsigned int v1; // r2@1
  signed int v2; // r8@1
  signed int v3; // r7@2
  signed int v4; // r6@2
  unsigned int v5; // r4@2
  signed int v6; // r5@2
  void *v7; // r3@2
  int v8; // r1@3

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = 0;
    v4 = 1;
    v5 = 0x10000;
    v6 = 1;
    v7 = &unk_8203B90;
    while ( 1 )
    {
      v8 = 0;
      if ( *((_WORD *)v7 + 2) == v1 )
        break;
      while ( ++v8 <= 4 )
      {
        if ( *(_WORD *)((char *)&gEvolutionTable[4 * v8 + 2] + v6 * 40) == v1 )
        {
          v1 = v5 >> 16;
          v3 = 1;
          break;
        }
      }
      if ( !v3 )
      {
        v5 += 0x10000;
        ++v6;
        v7 = (char *)v7 + 40;
        if ( ++v4 <= 411 )
          continue;
      }
      goto _080418CC;
    }
    v1 = v5 >> 16;
_080418CC:
    if ( v4 == 412 )
      break;
    ++v2;
  }
  while ( v2 <= 4 );
  return v1;
}
