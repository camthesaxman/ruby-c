int sub_80E6554()
{
  unsigned int v0; // r4@1
  int i; // r7@1
  unsigned int v2; // r5@3
  char v3; // r1@3
  char v4; // r1@5
  signed int v5; // r2@8
  int v6; // r1@9
  signed int v8; // [sp+0h] [bp-18h]@9
  int v9; // [sp+14h] [bp-4h]@0

  v0 = 0;
  for ( i = 0; ; i = (i + 1) & 0xFFFF )
  {
    v2 = 0;
    v3 = v0;
    v0 = (v0 + 1) & 0xFFFF;
    *(_BYTE *)(2 * i + 0x200102A) = v3;
    if ( v0 == 17 )
      break;
    do
    {
      v2 = (v2 + 1) & 0xFFFF;
      if ( v2 > 1 )
        break;
      v4 = v0;
      v0 = (v0 + 1) & 0xFFFF;
      *(_BYTE *)(v2 + 2 * i + 33558570) = v4;
    }
    while ( v0 != 17 );
    if ( v0 == 17 )
      break;
  }
  v2001028 = 17;
  if ( v0 <= 0x15 )
  {
    v5 = 33558648;
    do
    {
      v8 = v5;
      v6 = sub_80EAD7C((unsigned __int8)v0) & 0xFF;
      v5 = v8;
      if ( v6 )
      {
        v2 = (v2 + 1) & 0xFFFF;
        if ( v2 > 1 )
        {
          i = (i + 1) & 0xFFFF;
          v2 = 0;
        }
        *(_BYTE *)(v2 + 2 * i + 33558570) = v0;
        *(_BYTE *)(v0 - 17 + v8) = 1;
        ++v2001028;
      }
      else
      {
        *(_BYTE *)(v0 - 17 + v8) = 0;
      }
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 0x15 );
  }
  v20011B6 = (v2001028 + 1) >> 1;
  return v9;
}
