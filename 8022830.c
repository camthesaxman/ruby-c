int sub_8022830()
{
  char *v0; // r8@6
  signed int v1; // r5@8
  unsigned __int8 v2; // r0@8
  int v3; // r6@10
  int v4; // r7@20
  int v5; // r6@21
  char *v6; // r8@23
  signed int v7; // r5@28
  int v9; // [sp+14h] [bp-4h]@0

  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1) & 0x7F);
  if ( *(_BYTE *)(v2024C10 + 1) & 0x80
    || !(*(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x400E000) && !(*(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x400) )
  {
    if ( v20239F8 & 0x40 )
    {
      v0 = (char *)&unk_3004360;
      if ( (unsigned __int8)battle_side_get_owner(v2024A60) == 1 )
        v0 = (char *)&unk_30045C0;
      v1 = 0;
      v2 = sub_803FC34(v2024A60);
      if ( (unsigned __int16)sub_803FBFC(v2) == 1 )
        v1 = 3;
      v3 = v1 + 3;
      if ( __OFSUB__(v1, v1 + 3) ^ 1 )
      {
        do
        {
          if ( GetMonData(&v0[100 * v1], 11)
            && !GetMonData(&v0[100 * v1], 45)
            && GetMonData(&v0[100 * v1], 57)
            && *(_WORD *)(2 * v2024A60 + 0x2024A6A) != v1 )
          {
            break;
          }
          ++v1;
        }
        while ( v1 < v3 );
      }
      if ( v1 != v3 )
        goto _08022A24;
    }
    else
    {
      if ( (unsigned __int8)battle_side_get_owner(v2024A60) == 1 )
      {
        v4 = (unsigned __int8)battle_get_side_with_given_state(1);
        if ( v20239F8 & 1 )
          v5 = battle_get_side_with_given_state(3) & 0xFF;
        else
          v5 = v4;
        v6 = (char *)&unk_30045C0;
      }
      else
      {
        v4 = (unsigned __int8)battle_get_side_with_given_state(0);
        if ( v20239F8 & 1 )
          v5 = battle_get_side_with_given_state(2) & 0xFF;
        else
          v5 = v4;
        v6 = (char *)&unk_3004360;
      }
      v7 = 0;
      do
      {
        if ( GetMonData(&v6[100 * v7], 57)
          && GetMonData(&v6[100 * v7], 11)
          && !GetMonData(&v6[100 * v7], 45)
          && v7 != *(_WORD *)(2 * v4 + 0x2024A6A)
          && v7 != *(_WORD *)(2 * v5 + 0x2024A6A) )
        {
          break;
        }
        ++v7;
      }
      while ( v7 <= 5 );
      if ( v7 != 6 )
      {
_08022A24:
        v2024C10 += 6;
        return v9;
      }
    }
    v2024C10 = *(_BYTE *)(v2024C10 + 2) | (*(_BYTE *)(v2024C10 + 3) << 8) | (*(_BYTE *)(v2024C10 + 4) << 16) | (*(_BYTE *)(v2024C10 + 5) << 24);
    return v9;
  }
  v2024C10 = *(_BYTE *)(v2024C10 + 2) | (*(_BYTE *)(v2024C10 + 3) << 8) | (*(_BYTE *)(v2024C10 + 4) << 16) | (*(_BYTE *)(v2024C10 + 5) << 24);
  return v9;
}
