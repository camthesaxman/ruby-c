int __fastcall sub_8126608(int a1)
{
  int v1; // r6@1
  int v2; // r5@1
  int v3; // r2@1
  int v4; // r4@1
  signed int v5; // r0@5
  int v6; // r2@6
  int v7; // r4@7
  unsigned __int16 v8; // r0@8
  int v9; // r0@8
  int v10; // r1@8
  int v11; // r2@8
  int v13; // [sp+0h] [bp-A0h]@6
  char v14; // [sp+24h] [bp-7Ch]@1

  v1 = a1;
  v2 = script_read_word(a1) - *(_DWORD *)(v1 + 104) + *(_DWORD *)(v1 + 100);
  memcpy(&v14, (const char *)v2, 100);
  v4 = (unsigned __int16)GetMonData((int)&v14, 65, v3);
  if ( v4 == 412 )
    StringCopyN((int)&gStringVar1, (int)&gUnknown_0840DCC4, 11);
  else
    StringCopyN((int)&gStringVar1, (int)&gUnknown_0840DCC8, 11);
  if ( byte_3004350 == 6 )
  {
    StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)"׃דיז");
    v5 = 3;
  }
  else
  {
    memcpy(&unk_3004554, (const char *)v2, 100);
    memcpy(&v13, (const char *)(v2 + 100), 36);
    if ( v4 != 412 )
    {
      v7 = (unsigned __int16)SpeciesToNationalPokedexNum(v4);
      sub_8090D90(v7, 2u);
      sub_8090D90(v7, 3u);
    }
    v8 = GetMonData((int)&unk_3004554, 12, v6);
    v9 = itemid_is_mail(v8) << 24;
    if ( v9 )
      v9 = sub_80A2D88((unsigned int *)&unk_3004554, (int)&v13);
    party_compaction(v9, v10, v11);
    calc_player_party_count();
    StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_0842F8A4);
    v5 = 2;
  }
  *(_DWORD *)(v1 + 108) = v5;
  return 0;
}
