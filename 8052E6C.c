int NewGameInitData()
{
  int v0; // r0@4
  int v1; // r0@4
  int v2; // r0@4
  int v3; // r0@4
  int v4; // r0@4
  int v5; // r0@4
  int v6; // r0@4
  int v7; // r0@4
  int v8; // r0@4
  int v9; // r0@4
  int v10; // r0@4
  int v11; // r0@4
  int v12; // r0@4
  int v13; // r0@4
  int v14; // r0@4
  int v15; // r0@4
  int v16; // r0@4
  int v17; // r0@4
  int v18; // r0@4
  int v19; // r0@4
  int v20; // r0@4
  int v21; // r0@4
  int v23; // [sp+8h] [bp-4h]@0

  if ( !word_3005EB8 || word_3005EB8 == 2 )
    RtcReset();
  v20297EC = 1;
  ZeroPlayerPartyMons();
  v0 = ZeroEnemyPartyMons();
  sub_808C02C(v0);
  sub_8052DE4();
  v1 = memset(33707828, 0, 15040);
  sub_80A2B18(v1);
  v2024EAD = 0;
  set_player_trainer_id();
  PlayTimeCounter_Reset();
  v2 = sub_8052D78();
  v3 = sub_8069030(v2);
  v4 = sub_80BD7A8(v3);
  v5 = sub_80BDAB4(v4);
  v6 = sub_80BB5B4(v5);
  sub_80B4A90(v6);
  v2025BC4 = 3000;
  v7 = sub_80AB1B0();
  sub_80530AC(v7);
  v8 = sub_8052DA8();
  v9 = GameFreakRTC_Reset(v8);
  v10 = sub_80C5B84(v9);
  sub_80C5BDC(v10);
  byte_3004350 = 0;
  v11 = ZeroPlayerPartyMons();
  v12 = sub_80961D8(v11);
  v13 = sub_81341F8(v12);
  sub_813420C(v13);
  v2025BCA = 0;
  v14 = sub_80A3714();
  v15 = sub_8139C18(v14);
  v16 = sub_810C994(v15);
  v17 = sub_8133F80(v16);
  v18 = sub_80E6764(v17);
  v19 = sub_80F7AA4(v18);
  v20 = sub_80FA17C(v19);
  v21 = sub_810FA54(v20);
  sub_8145A78(v21);
  sub_8052E04();
  script_env_2_execute_new_script(&gUnknown_0819FA81);
  return v23;
}
