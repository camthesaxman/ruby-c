signed int sub_8012028()
{
  int v0; // r2@2
  int v1; // r6@7
  int v2; // r5@7
  unsigned int v3; // r7@8
  int v4; // r5@19
  signed int result; // r0@11

  if ( *(_WORD *)(88 * v2024A60 + 0x2024AAE) == 175 )
    v0 = *(_BYTE *)(28 * v2024A60 + 0x2024DF7);
  else
    v0 = itemid_get_x12(*(_WORD *)(88 * v2024A60 + 0x2024AAE)) & 0xFF;
  v2024C0B = v2024A60;
  if ( v0 == 37 || v20239F8 & 2 || *(_BYTE *)(88 * v2024A60 + 0x2024AA0) == 50 )
    return 0;
  v1 = (unsigned __int8)battle_side_get_owner(v2024A60);
  v2 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      if ( v1 != (unsigned __int8)battle_side_get_owner(v3 >> 24) && *(_BYTE *)(88 * v2 + 0x2024AA0) == 23 )
      {
        v2016003 = v2;
        v2024C06 = *(_BYTE *)(88 * v2 + 0x2024AA0);
        result = 2;
        goto _08012248;
      }
      if ( v1 != (unsigned __int8)battle_side_get_owner(v3 >> 24)
        && *(_BYTE *)(88 * v2024A60 + 0x2024AA0) != 26
        && *(_BYTE *)(88 * v2024A60 + 0x2024AA1) != 2
        && *(_BYTE *)(88 * v2024A60 + 0x2024AA2) != 2
        && *(_BYTE *)(88 * v2 + 0x2024AA0) == 71 )
      {
        break;
      }
      v3 += 0x1000000;
      if ( ++v2 >= v2024A68 )
        goto _08012126;
    }
    v2016003 = v2;
    v2024C06 = *(_BYTE *)(88 * v2 + 0x2024AA0);
    result = 2;
    goto _08012248;
  }
_08012126:
  v4 = (unsigned __int8)sub_8018324(15, v2024A60, 42, 0);
  if ( !v4 || *(_BYTE *)(88 * v2024A60 + 0x2024AA1) != 8 && *(_BYTE *)(88 * v2024A60 + 0x2024AA2) != 8 )
  {
    if ( *(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x400E000 || *(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x400 )
    {
      v2024D23 = 0;
      return 1;
    }
    if ( v20239F8 & 0x10 )
    {
      result = 1;
      goto _08012248;
    }
    return 0;
  }
  v2016003 = v4 - 1;
  v2024C06 = *(_BYTE *)(88 * (v4 - 1) + 0x2024AA0);
  result = 2;
_08012248:
  v2024D23 = result;
  return result;
}
