int __fastcall sub_803FCD4(int a1, unsigned __int8 a2)
{
  int v2; // r7@1
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r0@1
  int v6; // r4@3
  int v7; // r6@8
  int v8; // r0@8
  int v9; // r2@18
  int v10; // r0@24
  __int16 v12; // [sp+0h] [bp-18h]@8
  int v13; // [sp+14h] [bp-4h]@31

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int16)GetMonData(a1, 65, 0);
  v5 = (unsigned __int16)GetMonData(v2, 12, 0);
  if ( v5 == 175 )
  {
    if ( byte_3001BAD & 2 )
      v6 = v2024DF7;
    else
      v6 = v2028DBC;
  }
  else
  {
    v6 = itemid_get_x12(v5) & 0xFF;
  }
  if ( v4 && v4 != 412 )
  {
    v7 = 0;
    v12 = GetMonData(v2, 32, 0);
    v8 = v12;
    if ( v12 > 99 )
      v7 = 1;
    if ( v12 > 199 )
    {
      v8 = (v7 + 1) << 24;
      v7 = (v7 + 1) & 0xFF;
    }
    if ( (v3 != 5 || !(Random(v8) & 1))
      && (v3 != 3
       || v20239F8 & 8
       && (((*((_BYTE *)&gTrainers + 40 * v202FF5E + 1) - 24) & 0xFFu) <= 1
        || *((_BYTE *)&gTrainers + 40 * v202FF5E + 1) == 32)) )
    {
      LOBYTE(v9) = *(&gUnknown_082082FE[3 * v3] + v7);
      if ( (char)v9 > 0 && v6 == 27 )
        v9 = 150 * (char)v9 / 100 & 0xFF;
      v12 += (char)v9;
      if ( (char)v9 > 0 )
      {
        if ( GetMonData(v2, 38, 0) == 11 )
          ++v12;
        v10 = GetMonData(v2, 35, 0);
        if ( v10 == (unsigned __int8)sav1_map_get_name(v10) )
          ++v12;
      }
      if ( v12 < 0 )
        v12 = 0;
      if ( v12 > 255 )
        v12 = 255;
      SetMonData(v2, 32, (int)&v12);
    }
  }
  return v13;
}
