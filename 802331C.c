int sub_802331C()
{
  signed int v0; // r0@2
  signed int v1; // r3@8
  signed int v2; // r1@9
  _BYTE *v3; // r2@9
  int v5; // [sp+14h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
    v0 = *(_BYTE *)(v2024C10 + 2);
    if ( v0 == 1 )
    {
      if ( !(v20239F8 & 0x40) )
        sub_8012258(v2024A60);
    }
    else if ( v0 > 1 )
    {
      if ( v0 == 2 )
      {
        v2024D1E = *(_BYTE *)((v2024A60 << 9) + 0x2024261);
        *(_BYTE *)(v2024A60 + 0x2016068) = *(_BYTE *)((v2024A60 << 9) + 0x2024261);
        if ( v20239F8 & 0x40 )
        {
          *(_BYTE *)(3 * v2024A60 + 0x201606C) &= 0xFu;
          *(_BYTE *)(3 * v2024A60 + 0x201606C) |= *(_BYTE *)((v2024A60 << 9) + 0x2024262) & 0xF0;
          *(_BYTE *)(3 * v2024A60 + 0x201606D) = *(_BYTE *)((v2024A60 << 9) + 0x2024263);
          *(_BYTE *)(3 * (v2024A60 ^ 2) + 0x201606C) &= 0xF0u;
          *(_BYTE *)(3 * (v2024A60 ^ 2) + 0x201606C) |= (unsigned __int8)(*(_BYTE *)((v2024A60 << 9) + 0x2024262) & 0xF0) >> 4;
          *(_BYTE *)(3 * (v2024A60 ^ 2) + 0x201606E) = *(_BYTE *)((v2024A60 << 9) + 0x2024263);
        }
        else
        {
          sub_8012258(v2024A60);
        }
        byte_30041C0[0] = -3;
        byte_30041C1 = 6;
        word_30041C2 = *(_WORD *)(88 * v2024C07 + 0x2024A80);
        byte_30041C4 = -1;
        byte_3004290[0] = -3;
        byte_3004291 = 7;
        LOBYTE(word_3004292) = v2024A60;
        HIBYTE(word_3004292) = *(_BYTE *)((v2024A60 << 9) + 0x2024261);
        byte_3004294 = -1;
      }
    }
    else if ( !*(_BYTE *)(v2024C10 + 2) )
    {
      v1 = 0;
      if ( (signed int)v2024A68 > 0 )
      {
        v2 = 33702496;
        v3 = (_BYTE *)33644648;
        do
        {
          if ( *(_BYTE *)v2 == 34 )
            *v3 = *(_BYTE *)(v2 + 1);
          v2 += 512;
          ++v3;
          ++v1;
        }
        while ( v1 < v2024A68 );
      }
    }
    v2024C10 += 3;
  }
  return v5;
}