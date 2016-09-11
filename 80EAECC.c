int sub_80EAECC()
{
  int v0; // r8@1
  unsigned int v1; // r4@2
  int v2; // r9@2
  unsigned int v3; // r6@2
  unsigned int v4; // r0@3
  unsigned int v5; // r1@3
  __int16 v6; // r4@3
  signed int v7; // r7@4
  int v8; // r5@4
  int v9; // r3@5
  unsigned int v10; // r1@6
  unsigned int v11; // r4@6
  signed int v12; // r0@6
  int v13; // r1@8
  int v14; // r1@12
  unsigned int v16; // [sp+0h] [bp-30h]@2
  unsigned __int16 v17; // [sp+8h] [bp-28h]@2
  int v18; // [sp+Ch] [bp-24h]@6
  int v19; // [sp+2Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = (unsigned __int16)gEasyChatWordsByLetter[v0];
    v16 = (unsigned __int16)gEasyChatWordsByLetter[v0 + 1];
    *(_WORD *)(2 * v0 + 0x2005142) = 0;
    v2 = 0;
    v3 = v1;
    v17 = v0 + 1;
    while ( v3 < v16 )
    {
      v4 = v3;
      v3 = (v3 + 1) & 0xFFFF;
      v5 = gEasyChatWordsAlphabetized[v4];
      v6 = gEasyChatWordsAlphabetized[v4];
      if ( v5 <= 0xFEFF )
      {
        if ( sub_80EADC0(v5 >> 9, v5 & 0x1FF) << 24 )
        {
          v14 = v2;
          v2 = (v2 + 1) & 0xFFFF;
          *(_WORD *)(2 * (255 * v0 + v14) + 0x2001B78) = v6;
          ++*(_WORD *)(2 * v0 + 0x2005142);
        }
      }
      else
      {
        v7 = 0;
        v8 = ((unsigned __int8)v5 - 1) & 0xFFFF;
        if ( v8 != 0xFFFF )
        {
          v9 = 510 * v0;
          do
          {
            v10 = v3;
            v3 = (v3 + 1) & 0xFFFF;
            v11 = gEasyChatWordsAlphabetized[v10];
            v18 = v9;
            v12 = sub_80EADC0(v11 >> 9, v11 & 0x1FF);
            v9 = v18;
            if ( v12 << 24 && !v7 )
            {
              v13 = v2;
              v2 = (v2 + 1) & 0xFFFF;
              *(_WORD *)(2 * v13 + v18 + 33561464) = v11;
              ++*(_WORD *)(2 * v0 + 0x2005142);
              v7 = 1;
            }
            v8 = (v8 - 1) & 0xFFFF;
          }
          while ( v8 != 0xFFFF );
        }
      }
    }
    v0 = (unsigned __int16)(v0 + 1);
  }
  while ( v17 <= 0x1Au );
  return v19;
}
