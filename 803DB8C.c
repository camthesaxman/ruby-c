int __fastcall create_enemy_party(int a1)
{
  int v1; // r4@1
  int v2; // r7@1
  int v3; // ST04_4@3
  signed int v4; // r5@3
  int v5; // r9@3
  void *v6; // r3@3
  void *v7; // ST14_4@4
  signed int v8; // r5@5
  char *v9; // r7@5
  int v10; // r6@5
  int v12; // [sp+10h] [bp-28h]@2
  int v13; // [sp+34h] [bp-4h]@0

  v1 = a1;
  ZeroEnemyPartyMons();
  memcpy(33648640, v1, 160);
  v2 = 0;
  do
  {
    v12 = v2 + 1;
    if ( *(_WORD *)(2 * v2 + 0x201707C) )
    {
      v3 = *(_DWORD *)(4 * v2 + 0x2017034);
      CreateMon((int)&unk_30045C0 + 100 * v2, *(_WORD *)(2 * v2 + 0x201707C), *(_BYTE *)(v2 + 33648788), 0xFu);
      SetMonData((int)&unk_30045C0 + 100 * v2, 12, 2 * v2 + 33648776);
      v4 = 0;
      v5 = 4 * v2;
      v6 = &unk_30045C0;
      do
      {
        v7 = v6;
        SetMonData((int)v6 + 100 * v2, v4++ + 26, v2 + 33648794);
        v6 = v7;
      }
      while ( v4 <= 5 );
      v8 = 0;
      v9 = (char *)&unk_30045C0 + 100 * v2;
      v10 = 2 * v5;
      do
      {
        SetMonData((int)v9, v8 + 13, v10 + 33648716);
        SetMonData((int)v9, v8 + 17, (int)&unk_81FB130 + 12 * *(_WORD *)(v10 + 33648716));
        v10 += 2;
        ++v8;
      }
      while ( v8 <= 3 );
    }
    v2 = v12;
  }
  while ( v12 <= 5 );
  v20239F8 = 8;
  v202FF5E = 1024;
  return v13;
}
