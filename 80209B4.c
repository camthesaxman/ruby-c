int sub_80209B4()
{
  int v0; // r6@1
  signed int v1; // r5@2
  int v2; // r6@9
  signed int v3; // r5@9
  int v4; // r2@18
  signed int v5; // r5@18
  _BYTE *v6; // r3@19
  int v7; // r4@24
  signed int v8; // r5@24
  _BYTE *v9; // r3@25
  int v11; // [sp+14h] [bp-4h]@0

  v0 = 0;
  if ( !v2024A64 )
  {
    v1 = 0;
    do
    {
      if ( GetMonData((char *)&unk_3004360 + 100 * v1, 11) && !GetMonData((char *)&unk_3004360 + 100 * v1, 45) )
        v0 = (v0 + GetMonData((char *)&unk_3004360 + 100 * v1, 57)) & 0xFFFF;
      ++v1;
    }
    while ( v1 <= 5 );
    if ( !v0 )
      v2024D26 |= 2u;
    v2 = 0;
    v3 = 0;
    do
    {
      if ( GetMonData((char *)&unk_30045C0 + 100 * v3, 11) && !GetMonData((char *)&unk_30045C0 + 100 * v3, 45) )
        v2 = (v2 + GetMonData((char *)&unk_30045C0 + 100 * v3, 57)) & 0xFFFF;
      ++v3;
    }
    while ( v3 <= 5 );
    if ( !v2 )
      v2024D26 |= 1u;
    if ( v2024D26 || !(v20239F8 & 2) )
    {
      v2024C10 += 5;
      return v11;
    }
    v4 = 0;
    v5 = 0;
    if ( (signed int)v2024A68 > 0 )
    {
      v6 = (_BYTE *)33705320;
      do
      {
        if ( (0x10000000 << v5) & v2024C6C && !(*v6 & 0x40) )
          ++v4;
        v6 += 40;
        v5 += 2;
      }
      while ( v5 < v2024A68 );
    }
    v7 = 0;
    v8 = 1;
    if ( (signed int)v2024A68 > 1 )
    {
      v9 = (_BYTE *)33705340;
      do
      {
        if ( (0x10000000 << v8) & v2024C6C && !(*v9 & 0x40) )
          ++v7;
        v9 += 40;
        v8 += 2;
      }
      while ( v8 < v2024A68 );
    }
    if ( v20239F8 & 0x40 )
    {
      if ( v7 + v4 <= 1 )
      {
_08020B36:
        v2024C10 += 5;
        return v11;
      }
    }
    else if ( !v7 || !v4 )
    {
      goto _08020B36;
    }
    v2024C10 = *(_BYTE *)(v2024C10 + 1)
             + (*(_BYTE *)(v2024C10 + 2) << 8)
             + (*(_BYTE *)(v2024C10 + 3) << 16)
             + (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  return v11;
}
