int __fastcall sub_80BBCCC(unsigned __int8 a1)
{
  int v1; // r8@1
  int v2; // r5@2
  int v3; // r3@4
  unsigned int v4; // r0@6
  unsigned __int16 v6; // [sp+0h] [bp-1Ch]@2
  unsigned __int16 v7; // [sp+2h] [bp-1Ah]@8
  int v8; // [sp+18h] [bp-4h]@12

  v1 = a1;
  if ( CurrentMapIsSecretBase() << 24 )
  {
    v2 = (unsigned __int16)VarGet(16468);
    v6 = 0;
    do
    {
      if ( ((*(_BYTE *)(160 * v2 + v6 + 0x202714E) - 1) & 0xFFu) <= 0x77 )
      {
        v3 = *(_BYTE *)(160 * v2 + v6 + 0x202714E);
        if ( *((_BYTE *)&gDecorations + 32 * v3 + 17) != 4 )
          sub_80FF394(
            ((unsigned int)*(_BYTE *)(160 * v2 + v6 + 0x202715E) >> 4) + 7,
            (*(_BYTE *)(160 * v2 + v6 + 0x202715E) & 0xF) + 7,
            v3);
      }
      v4 = (v6++ + 1) & 0xFFFF;
    }
    while ( v4 <= 0xF );
    if ( v2 )
    {
      sub_80BB764(&v6, &v7, 0x220u);
      MapGridSetMetatileIdAt(v6 + 7, v7 + 7, 3617);
    }
    else if ( v1 == 1 && (unsigned __int16)VarGet(16521) == 1 )
    {
      sub_80BB764(&v6, &v7, 0x220u);
      MapGridSetMetatileIdAt(v6 + 7, v7 + 7, 3594);
    }
  }
  return v8;
}
