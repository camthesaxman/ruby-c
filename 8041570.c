int __fastcall sub_8041570(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r7@1
  unsigned int *v5; // r6@1
  _BYTE *v6; // r2@1
  int v7; // r9@1
  int v8; // r2@1
  int v9; // r2@1
  int v10; // r1@3
  int v11; // r0@3
  int v12; // r4@4
  int v14; // [sp+0h] [bp-84h]@1
  int v15; // [sp+64h] [bp-20h]@2

  v2 = a1;
  v3 = a2;
  v4 = 4 * a2;
  v5 = (unsigned int *)(a1 + 80 * a2);
  pokemon_get_nick_(v5, (int)&gStringVar1);
  v7 = (unsigned __int16)GetBoxMonData(v5, 11, v6);
  sub_803B4B4((int)v5, (int)&v14);
  if ( GetMonData((int)&v14, 56, v8) != 100 )
  {
    v15 = GetMonData((int)&v14, 25, v9) + *(_DWORD *)(v2 + 272 + v4);
    SetMonData((int)&v14, 25, (int)&v15);
    sub_804151C((int)&v14);
  }
  memcpy(&unk_3004554, &v14, 100);
  v10 = 56 * v3;
  v11 = *(_WORD *)(v2 + 56 * v3 + 192);
  if ( *(_WORD *)(v2 + 56 * v3 + 192) )
  {
    v12 = v2 + v10 + 160;
    sub_80A2D88(&unk_3004554, v2 + v10 + 160);
    v11 = sub_80417F4(v12);
  }
  party_compaction(v11);
  ZeroBoxMonData((int)v5);
  *(_DWORD *)(v2 + 272 + v4) = 0;
  sub_80414C0(v2, 0, (_BYTE *)0x110);
  calc_player_party_count();
  return v7;
}
