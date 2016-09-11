int sub_810DB28()
{
  int v0; // r7@1
  __int16 v1; // r9@1
  __int16 v2; // r8@1
  int v3; // r10@1
  signed int v4; // r0@1
  __int16 v5; // r0@8
  __int16 v6; // r0@9
  unsigned int i; // r6@14
  char v8; // r0@16
  char v10[4]; // [sp+8h] [bp-2Ch]@1
  char v11; // [sp+Ch] [bp-28h]@1
  _BYTE v12[3]; // [sp+Dh] [bp-27h]@16
  int v13; // [sp+30h] [bp-4h]@20

  v0 = 0;
  v1 = 0;
  v2 = 0;
  memcpy(v10, (const char *)&gUnknown_083F8358, 4);
  memcpy(&v11, (const char *)&gUnknown_083F835C, 8);
  v3 = (unsigned __int8)sub_8008218();
  v4 = (unsigned __int8)player_get_direction_lower_nybble();
  if ( v4 == 2 )
  {
    v0 = 1;
    v1 = v2025734;
    v6 = v2025736 - 1;
_0810DBCC:
    v2 = v6;
    goto _0810DBD2;
  }
  if ( v4 <= 2 )
  {
    if ( v4 != 1 )
      goto _0810DBD2;
    v0 = 3;
    v1 = v2025734;
    v6 = v2025736 + 1;
    goto _0810DBCC;
  }
  if ( v4 == 3 )
  {
    v0 = 2;
    v5 = v2025734 - 1;
  }
  else
  {
    if ( v4 != 4 )
      goto _0810DBD2;
    v5 = v2025734 + 1;
  }
  v1 = v5;
  v2 = v2025736;
_0810DBD2:
  for ( i = 0; i < v202E8CC; i = (i + 1) & 0xFF )
  {
    if ( v3 != i )
    {
      v8 = sub_805983C(0, *((_BYTE *)&gLinkPlayers + 28 * i + 19));
      SpawnSpecialFieldObjectParametrized(
        v8,
        v10[v0],
        -16 - i,
        (signed __int16)(v1 + *(&v11 + 2 * v0) + 7),
        (signed __int16)(v2 + v12[2 * v0] + 7),
        0);
      v0 = (v0 + 1) & 0xFF;
      if ( v0 == 4 )
        v0 = 0;
    }
  }
  return v13;
}
