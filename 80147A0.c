int sub_80147A0()
{
  int v0; // r0@1
  unsigned int v1; // r3@1
  void **v2; // r1@4
  void **i; // r10@8
  int v5; // [sp+1Ch] [bp-4h]@0

  v2024C08 = *(_BYTE *)(v2024A7E + 0x2024A7A);
  v2024C07 = v2024C08;
  word_30042A4 = 0;
  word_30042A0 = 0;
  *(_BYTE *)(28 * v2024C08 + 0x2024CB8) = 0;
  v0 = *(_BYTE *)((v2024C07 << 9) + 0x2024262) << 8;
  v1 = *(_BYTE *)((v2024C07 << 9) + 0x2024261) | v0;
  v2024C04 = *(_BYTE *)((v2024C07 << 9) + 0x2024261) | (unsigned __int16)v0;
  if ( v1 <= 0xC )
  {
    v2024C10 = *(&gUnknown_081D9E48 + v2024C04);
    goto _08014A8C;
  }
  if ( ((v1 - 80) & 0xFFFF) <= 1 )
  {
    v2 = &gUnknown_081D9E94;
_0801485C:
    v2024C10 = *v2;
    goto _08014A8C;
  }
  if ( !(battle_side_get_owner(v2024C07) << 24) )
  {
    v2 = &gUnknown_081D9E7C;
    goto _0801485C;
  }
  v2016003 = v2024C07;
  i = &gUnknown_081D9E7C;
  if ( (unsigned int)*(_BYTE *)(((unsigned int)v2024C07 << 24 >> 25) + 0x20160D8) - 1 <= 4 )
  {
    switch ( *(_BYTE *)(((unsigned int)v2016003 << 24 >> 25) + 0x20160D8) )
    {
      case 3:
        v2024D23 = 0;
        if ( *(_BYTE *)(((unsigned int)v2024C07 >> 1) + 0x20160DA) & 1 )
        {
          i = &gUnknown_081D9E7C;
          if ( *(_BYTE *)(((unsigned int)v2024C07 >> 1) + 0x20160DA) & 0x3E )
            v2024D23 = 5;
        }
        else
        {
          i = &gUnknown_081D9E7C;
          do
          {
            *(_BYTE *)(((unsigned int)v2024C07 >> 1) + 0x20160DA) >>= 1;
            ++v2024D23;
          }
          while ( !(*(_BYTE *)(((unsigned int)v2024C07 >> 1) + 0x20160DA) & 1) );
        }
        break;
      case 4:
        v2024D23 = 4;
        if ( *(_BYTE *)(((unsigned int)v2024C07 >> 1) + 0x20160DA) & 0x80 )
        {
          v2024D23 = 5;
          i = &gUnknown_081D9E7C;
        }
        else
        {
          byte_30041C0[0] = -3;
          byte_30041C1 = 5;
          byte_30041C2 = 1;
          byte_30041C3 = -1;
          byte_3004290[0] = -3;
          byte_3004291 = 0;
          byte_3004292 = -46;
          byte_3004293 = 0;
          byte_3004294 = -1;
          for ( i = &gUnknown_081D9E7C; !(*(_BYTE *)(((unsigned int)v2024C07 >> 1) + 0x20160DA) & 1); ++byte_30041C2 )
            *(_BYTE *)(((unsigned int)v2024C07 >> 1) + 0x20160DA) >>= 1;
          v20160A4 = byte_30041C2 + 14;
          v20160A5 = 0;
        }
        break;
      case 5:
        if ( v20239F8 & 1 )
        {
          v2024D23 = 2;
          i = &gUnknown_081D9E7C;
        }
        else
        {
          v2024D23 = 0;
          i = &gUnknown_081D9E7C;
        }
        break;
      default:
        break;
    }
  }
  v2024C10 = i[*(_BYTE *)(((unsigned int)v2024C07 >> 1) + 0x20160D8)];
_08014A8C:
  v2024A7F = 10;
  return v5;
}
