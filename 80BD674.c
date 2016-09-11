int __fastcall sub_80BD674(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r6@1
  int v4; // r5@1
  signed int v5; // r7@1
  int v6; // r0@2
  unsigned int v7; // r3@18
  char v8; // r1@19
  unsigned int v9; // r3@22
  unsigned int v10; // r1@23
  int v12; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( FlagGet(0x60u) << 24 )
  {
    v6 = (unsigned __int8)GetLinkPlayerCount();
    if ( v6 == 2 )
    {
      memset(v3 + 2 * v4, 0, v4);
      memset(v3 + 3 * v4, 0, v4);
    }
    else if ( v6 == 3 )
    {
      memset(v3 + 3 * v4, 0, v4);
    }
    if ( v5 == 1 )
    {
      sub_80BD610(v3 + 2 * v4, v3 + 3 * v4, v3);
    }
    else if ( v5 > 1 )
    {
      if ( v5 == 2 )
      {
        sub_80BD610(v3 + 3 * v4, v3, v3 + v4);
      }
      else if ( v5 == 3 )
      {
        sub_80BD610(v3, v3 + v4, v3 + 2 * v4);
      }
    }
    else if ( !v5 )
    {
      sub_80BD610(v3 + v4, v3 + 2 * v4, v3 + 3 * v4);
    }
    v7 = 1;
    do
    {
      v8 = *(_BYTE *)(160 * v7 + 0x202713D);
      if ( (v8 & 0xF) == 1 )
        *(_BYTE *)(160 * v7 + 0x202713D) = (v8 & 0x3F | 0x40) & 0xF0;
      v7 = (v7 + 1) & 0xFFFF;
    }
    while ( v7 <= 0x13 );
    sub_80BD280();
    v9 = 1;
    do
    {
      v10 = *(_BYTE *)(160 * v9 + 0x202713D);
      if ( v10 >> 6 == 2 )
        *(_BYTE *)(160 * v9 + 0x202713D) = v10 & 0x3F;
      v9 = (v9 + 1) & 0xFFFF;
    }
    while ( v9 <= 0x13 );
    if ( v202714A != 0xFFFF )
      ++v202714A;
  }
  return v12;
}
