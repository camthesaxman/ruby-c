int __fastcall sub_8041FC4(int a1, int a2, _BYTE *a3)
{
  int v3; // r5@1
  _BYTE *v4; // r2@1
  int v5; // r0@1
  int v7; // [sp+0h] [bp-7Ch]@1
  unsigned __int8 v8; // [sp+64h] [bp-18h]@1
  unsigned __int8 v9; // [sp+65h] [bp-17h]@1
  unsigned __int16 v10; // [sp+68h] [bp-14h]@1
  char v11; // [sp+6Ah] [bp-12h]@1
  int v12; // [sp+78h] [bp-4h]@1

  v3 = a1;
  v10 = sub_8041EEC(a1, (int)&v8, a3);
  incense_effects(&v10, v3, v4);
  sub_80420FC(&v7, v10, v3);
  sub_80419A8((int)&v7, v3);
  daycare_build_child_moveset((int)&v7, (unsigned int *)(v3 + 80 * v9), (unsigned int *)(v3 + 80 * v8));
  v11 = 1;
  SetMonData((int)&v7, 45, (int)&v11);
  v5 = memcpy(&unk_3004554, &v7, 100);
  party_compaction(v5);
  calc_player_party_count();
  sub_8041E64(v3);
  return v12;
}
