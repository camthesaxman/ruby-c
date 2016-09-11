int sub_8027064()
{
  int v0; // r1@2
  char *v1; // r0@2
  int v2; // r5@4
  int v3; // r1@5
  char *v4; // r0@5
  int v5; // r4@7
  int v6; // r10@7
  int v7; // r9@7
  int v8; // r8@7
  int v9; // r7@7
  int v10; // r4@9
  int v12; // [sp+1Ch] [bp-4h]@0

  if ( battle_side_get_owner(v2024C07) << 24 )
  {
    v0 = 100 * *(_WORD *)(2 * v2024C07 + 0x2024A6A);
    v1 = (char *)&unk_30045C0;
  }
  else
  {
    v0 = 100 * *(_WORD *)(2 * v2024C07 + 0x2024A6A);
    v1 = (char *)&unk_3004360;
  }
  v2 = (int)&v1[v0];
  if ( battle_side_get_owner(v2024C08) << 24 )
  {
    v3 = 100 * *(_WORD *)(2 * v2024C08 + 0x2024A6A);
    v4 = (char *)&unk_30045C0;
  }
  else
  {
    v3 = 100 * *(_WORD *)(2 * v2024C08 + 0x2024A6A);
    v4 = (char *)&unk_3004360;
  }
  v5 = (int)&v4[v3];
  v6 = (unsigned __int16)GetMonData(v2, 11);
  v7 = GetMonData(v2, 0);
  v8 = (unsigned __int16)GetMonData(v5, 11);
  v9 = GetMonData(v5, 0);
  if ( *(_BYTE *)(88 * v2024C08 + 0x2024AA0) == 12 )
  {
    v2024C10 = &gUnknown_081D98C9;
    v2024C06 = 12;
    sub_81074C4(v2024C08, 12);
  }
  else
  {
    v10 = GetGenderFromSpeciesAndPersonality(v6, v7);
    if ( v10 << 24 == GetGenderFromSpeciesAndPersonality(v8, v9) << 24
      || *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x400C0
      || *(_DWORD *)(88 * v2024C08 + 0x2024AD0) & 0xF0000
      || (unsigned __int8)GetGenderFromSpeciesAndPersonality(v6, v7) == 255
      || (unsigned __int8)GetGenderFromSpeciesAndPersonality(v8, v9) == 255 )
    {
      v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
    }
    else
    {
      *(_DWORD *)(88 * v2024C08 + 0x2024AD0) |= gBitTable[v2024C07] << 16;
      v2024C10 += 5;
    }
  }
  return v12;
}
