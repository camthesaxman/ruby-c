int sub_800B884()
{
  int v0; // r1@1
  int v1; // r0@3
  int v2; // r0@3
  int v4; // [sp+10h] [bp-18h]@1
  int v5; // [sp+24h] [bp-4h]@5

  dword_30042D4 = (int)nullsub_41;
  v4 = 0;
  v0 = 0;
  do
  {
    dword_3004330[v0] = (int)nullsub_91;
    *(_BYTE *)(v0 + 33704562) = -1;
    *(_BYTE *)(v4 + 33705568) = 0;
    *(_BYTE *)(v4++ + 33705572) = 0;
    v0 = v4;
  }
  while ( v4 <= 3 );
  sub_800B858();
  v2024A64 = 0;
  v1 = sub_8075624();
  v2 = sub_8040710(v1);
  sub_81070D4(v2);
  if ( v20239F8 & 0x10 )
  {
    ZeroEnemyPartyMons();
    CreateMon(&unk_30045C0, 286, 2, 32);
    v4 = 0;
    SetMonData(&unk_30045C0, 12, &v4);
  }
  v20239FC = 0;
  v2024C78 = 0;
  return v5;
}
