int __fastcall sub_8045A5C(unsigned int a1, int a2, unsigned __int8 a3)
{
  int v3; // r9@1
  unsigned int v4; // r8@1
  unsigned int v5; // r7@1
  int v6; // r10@1
  int v7; // r0@1
  int v8; // r2@1
  unsigned __int8 v9; // r0@4
  __int16 v10; // r0@6
  __int16 v11; // r0@9
  int v12; // r2@12
  int v13; // r4@12
  int v14; // r2@12
  int v15; // r0@12
  int v16; // r2@16
  int v17; // r5@16
  int v18; // r2@16
  int v19; // r4@16
  int v20; // r2@16
  int v21; // r3@16
  int v22; // r0@16
  unsigned __int8 v23; // r0@29
  int v24; // r2@32
  int v25; // r4@32
  int v26; // r2@32
  int v27; // r0@32
  int v29; // [sp+24h] [bp-4h]@0

  v3 = a2;
  a1 = (unsigned __int8)a1;
  v4 = a1;
  v5 = a3;
  v6 = *(_WORD *)&gSprites[68 * (unsigned __int8)a1 + 58] & 0xFF;
  v7 = battle_side_get_owner(v6) << 24;
  if ( v7 )
  {
    if ( v5 == 3 || !v5 )
    {
      v23 = GetMonData(v3, 56, v8);
      sub_8043FC0(v4, v23);
    }
    if ( v5 == 5 || !v5 )
    {
      load_gfxc_health_bar();
      v25 = GetMonData(v3, 58, v24);
      v27 = GetMonData(v3, 57, v26);
      sub_8043D84(v6, v4, v25, v27, 0);
      sub_8045C78(v6, v4, 0, 0);
    }
    if ( v5 == 4 || !v5 )
      sub_80451A0(v4, v3);
    if ( v5 == 9 || !v5 )
      draw_status_ailment_maybe(v4);
  }
  else
  {
    if ( v5 == 3 || !v5 )
    {
      v9 = GetMonData(v3, 56, v8);
      v7 = sub_8043FC0(v4, v9);
    }
    if ( v5 <= 1 )
    {
      v10 = GetMonData(v3, 57, v8);
      v7 = sub_80440EC(v4, v10, 0);
    }
    if ( v5 == 2 || !v5 )
    {
      v11 = GetMonData(v3, 58, v8);
      v7 = sub_80440EC(v4, v11, 1u);
    }
    if ( v5 == 5 || !v5 )
    {
      load_gfxc_health_bar();
      v13 = GetMonData(v3, 58, v12);
      v15 = GetMonData(v3, 57, v14);
      sub_8043D84(v6, v4, v13, v15, 0);
      v7 = sub_8045C78(v6, v4, 0, 0);
    }
    if ( !(unsigned __int8)battle_type_is_double(v7) && (v5 == 6 || !v5) )
    {
      load_gfxc_health_bar();
      v17 = (unsigned __int16)GetMonData(v3, 11, v16);
      v19 = (unsigned __int8)GetMonData(v3, 56, v18);
      v21 = GetMonData(v3, 25, v20);
      v22 = 404 * *((_BYTE *)&gBaseStats + 28 * v17 + 19);
      sub_8043D84(
        v6,
        v4,
        *(_DWORD *)((char *)&gExperienceTables[v19 + 1] + v22) - *(_DWORD *)((char *)&gExperienceTables[v19] + v22),
        v21 - *(_DWORD *)((char *)&gExperienceTables[v19] + v22),
        0);
      sub_8045C78(v6, v4, 1, 0);
    }
    if ( v5 == 4 || !v5 )
      sub_80451A0(v4, v3);
    if ( v5 == 9 || !v5 )
      draw_status_ailment_maybe(v4);
    if ( v5 == 10 )
      sub_80458B0(v4);
    if ( ((v5 - 10) & 0xFF) <= 1 )
      sub_8045998(v4);
  }
  return v29;
}
