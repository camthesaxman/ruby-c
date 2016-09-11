int __fastcall sub_812EFC8(unsigned __int8 a1)
{
  int v1; // r9@2
  int v2; // r8@2
  int v3; // r6@2
  signed __int16 v4; // r3@2
  int v5; // r2@3
  int v6; // r2@4
  int v7; // r2@5
  char *v8; // r0@6
  signed __int16 v9; // r10@10
  int v10; // r2@11
  int v11; // r2@12
  char *v12; // r0@13
  char v13; // r7@19
  __int16 v14; // r4@19
  unsigned __int8 v15; // r0@19
  unsigned __int8 v16; // r0@19
  __int16 v17; // r6@19
  char *v18; // r5@19
  int v19; // r7@19
  unsigned int v20; // r1@19
  int *v21; // r1@19
  int v23; // [sp+10h] [bp-28h]@1
  unsigned __int8 v24; // [sp+14h] [bp-24h]@2
  int v25; // [sp+34h] [bp-4h]@0

  v23 = a1;
  obj_id_for_side_relative_to_move(0);
  if ( sub_8076BE0() << 24 )
  {
    v24 = 1;
    v1 = v2019358;
    v2 = v2019354;
    LOWORD(v3) = v201934A;
    v4 = 20;
_0812F13C:
    v9 = v4;
    goto _0812F13E;
  }
  if ( !(battle_side_get_owner(v202F7C8) << 24) )
  {
    v24 = 1;
    v1 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v202F7C9 + 0x2024A6A), 0, 1);
    v2 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v202F7C9 + 0x2024A6A), 1, v10);
    if ( *(_WORD *)(4 * v202F7C9 + 0x2017802) )
    {
      LOWORD(v3) = *(_WORD *)(4 * v202F7C9 + 0x2017802);
    }
    else
    {
      if ( battle_side_get_owner(v202F7C9) << 24 )
        v12 = (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v202F7C9 + 0x2024A6A);
      else
        v12 = (char *)&dword_3004360[25 * *(_WORD *)(2 * v202F7C9 + 0x2024A6A)];
      v3 = GetMonData((int)v12, 11, v11) & 0xFFFF;
    }
    v4 = -20;
    goto _0812F13C;
  }
  v24 = 0;
  v1 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v202F7C9 + 0x2024A6A)], 0, v5);
  v2 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v202F7C9 + 0x2024A6A)], 1, v6);
  if ( *(_WORD *)(4 * v202F7C9 + 0x2017802) )
  {
    LOWORD(v3) = *(_WORD *)(4 * v202F7C9 + 0x2017802);
  }
  else
  {
    if ( battle_side_get_owner(v202F7C9) << 24 )
      v8 = (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v202F7C9 + 0x2024A6A);
    else
      v8 = (char *)&dword_3004360[25 * *(_WORD *)(2 * v202F7C9 + 0x2024A6A)];
    v3 = GetMonData((int)v8, 11, v7) & 0xFFFF;
  }
  v9 = 20;
_0812F13E:
  v13 = sub_8079ED4(v202F7C8);
  v14 = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
  v15 = sub_8077ABC(v202F7C8, 1u);
  v16 = sub_8079F44(v3, v24, 0, v14 + v9, v15, 5, v1, v2);
  v17 = v16;
  v18 = &gSprites[68 * v16];
  v19 = 4 * (v13 & 3);
  v20 = (unsigned __int8)(v18[5] & 0xF3) | v19;
  v18[5] = v20;
  v18[1] = v18[1] & 0xF3 | 4;
  FillPalette(0x7FFF, 16 * (v20 >> 4) | 0x100, 32);
  v18[5] = v18[5] & 0xF3 | v19;
  v4000050 = 16192;
  v21 = &dword_3004B20[10 * v23];
  v4000052 = ((16 - *((_WORD *)v21 + 5)) << 8) | *((_WORD *)v21 + 5);
  *((_WORD *)v21 + 4) = v17;
  *v21 = (int)sub_812F238;
  return v25;
}
