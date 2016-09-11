int sub_8028858()
{
  int v0; // r7@1
  char *v1; // r9@3
  int v2; // r0@8
  int v3; // r6@13
  int v4; // r5@14
  int v5; // r4@14
  int v6; // r0@17
  int v7; // r0@22
  int v8; // r0@2
  char v9; // r0@2
  int v11; // [sp+4h] [bp-20h]@1
  int v12; // [sp+20h] [bp-4h]@31

  v11 = 0;
  v0 = 0;
  if ( v2024BE6 == 215 )
  {
    v2024D23 = 0;
    v1 = (char *)&unk_30045C0;
    if ( !(battle_side_get_owner(v2024C07) << 24) )
      v1 = (char *)&unk_3004360;
    if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA0) == 43 )
    {
      sub_81074C4(v2024C07, *(_BYTE *)(88 * v2024C07 + 0x2024AA0));
      v2024D23 |= 1u;
    }
    else
    {
      *(_DWORD *)(88 * v2024C07 + 0x2024ACC) = 0;
    }
    v2 = battle_get_per_side_status(v2024C07);
    v2016003 = battle_get_side_with_given_state((v2 ^ 2) & 0xFF);
    v2024A60 = v2016003;
    if ( v20239F8 & 1 && !(v2024C0C & gBitTable[v2024A60]) )
    {
      if ( *(_BYTE *)(88 * v2024A60 + 0x2024AA0) == 43 )
      {
        sub_81074C4(v2024A60, *(_BYTE *)(88 * v2024A60 + 0x2024AA0));
        v2024D23 |= 2u;
      }
      else
      {
        *(_DWORD *)(88 * v2024A60 + 0x2024ACC) = 0;
      }
    }
    v3 = 0;
    while ( 1 )
    {
      v4 = (unsigned __int16)GetMonData(&v1[100 * v3], 65);
      v5 = (unsigned __int8)GetMonData(&v1[100 * v3], 46);
      if ( v4 )
      {
        if ( v4 != 412 )
          break;
      }
_08028A1E:
      if ( ++v3 > 5 )
        goto _08028A7E;
    }
    if ( *(_WORD *)(2 * v2024C07 + 0x2024A6A) == v3 )
    {
      v6 = 88 * v2024C07;
    }
    else
    {
      if ( !(v20239F8 & 1) || *(_WORD *)(2 * v2024A60 + 0x2024A6A) != v3 || v2024C0C & gBitTable[v2024A60] )
      {
        v7 = (unsigned __int8)sub_803DB14(v4, v5);
_08028A10:
        if ( v7 != 43 )
          v0 = (v0 | (1 << v3)) & 0xFF;
        goto _08028A1E;
      }
      v6 = 88 * v2024A60;
    }
    v7 = *(_BYTE *)(v6 + 33704608);
    goto _08028A10;
  }
  v2024D23 = 4;
  LOBYTE(v0) = 63;
  *(_DWORD *)(88 * v2024C07 + 0x2024ACC) = 0;
  v8 = battle_get_per_side_status(v2024C07);
  v9 = battle_get_side_with_given_state((v8 ^ 2) & 0xFF);
  v2024A60 = v9;
  if ( v20239F8 & 1 && !(v2024C0C & gBitTable[v2024A60]) )
    *(_DWORD *)(88 * v2024A60 + 0x2024ACC) = 0;
_08028A7E:
  v2024A60 = v2024C07;
  dp01_build_cmdbuf_x02_a_b_varargs(0, 40, v0, 4u, (char *)&v11);
  dp01_battle_side_mark_buffer_for_execution(v2024A60);
  ++v2024C10;
  return v12;
}
