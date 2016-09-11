int sub_813556C()
{
  int v0; // r2@1
  signed int v1; // r5@8
  int v2; // r0@10
  int v3; // r1@10
  int v4; // r2@10
  unsigned __int8 v5; // r0@10
  signed int v6; // r5@11
  int v7; // r0@13
  int v8; // r1@13
  int v9; // r2@13
  unsigned __int8 v10; // r0@13
  __int16 v12; // [sp+0h] [bp-10h]@9
  int v13; // [sp+Ch] [bp-4h]@14

  v0 = v202E8CC;
  if ( v202E8CC == 1 )
  {
    v1 = 0;
    do
    {
      v12 = GetMonData((int)&dword_3004360[25 * v1], 12, v0);
      SetMonData(100 * v1++ + 33708396, 12, (int)&v12);
    }
    while ( v1 <= 5 );
_081355D6:
    CreateTask((int)sub_8135534, 1);
    v2 = current_map_music_set__default_for_battle(0);
    v5 = sub_8082138(v2, v3, v4);
    sub_811AABC(v5);
    return v13;
  }
  if ( (signed int)v202E8CC <= 1 )
  {
    if ( v202E8CC )
      return v13;
    v20239F8 = 264;
    v202FF5E = 0;
    sub_8134DD4();
    goto _081355D6;
  }
  if ( v202E8CC == 2 )
  {
    ZeroEnemyPartyMons();
    v6 = 0;
    do
    {
      sub_803ADE8((int)&unk_30045C0 + 100 * v6, 44 * v6 + 33706864);
      ++v6;
    }
    while ( v6 <= 2 );
    v20239F8 = 2056;
    v202FF5E = 0;
    CreateTask((int)sub_8135534, 1);
    v7 = current_map_music_set__default_for_battle(0);
    v10 = sub_8082138(v7, v8, v9);
    sub_811AABC(v10);
  }
  return v13;
}
