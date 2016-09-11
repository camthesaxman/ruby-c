int __fastcall sub_806D198(unsigned __int8 a1)
{
  unsigned __int8 v1; // r10@1
  int v2; // r0@1
  int v3; // r0@1
  unsigned __int8 v4; // r0@1
  int *v5; // r0@1
  int v6; // r0@1
  unsigned __int8 v7; // r0@1
  int v8; // r0@1
  int v10; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  sub_806DE50(v2001000, v2001005, v2001004);
  v2 = sub_806DE50(v2001000, v2001006, v2001003);
  v3 = *(&gUnknown_08376678[24 * (unsigned __int8)battle_type_is_double(v2)] + 4 * v2001006);
  *(_WORD *)&gSprites[68 * v2001003 + 32] = v3;
  v4 = battle_type_is_double(v3);
  *(_WORD *)&gSprites[68 * v2001003 + 34] = *(&gUnknown_08376678[24 * v4 + 1] + 4 * v2001006);
  *(_WORD *)&gSprites[68 * v2001003 + 36] = 0;
  *(_WORD *)&gSprites[68 * v2001003 + 38] = 0;
  v5 = &dword_2020020[17 * v2001003];
  *v5 = (int)sub_806DA38;
  v6 = *(&gUnknown_08376678[24 * (unsigned __int8)battle_type_is_double(v5)] + 4 * v2001005);
  *(_WORD *)&gSprites[68 * v2001004 + 32] = v6;
  v7 = battle_type_is_double(v6);
  *(_WORD *)&gSprites[68 * v2001004 + 34] = *(&gUnknown_08376678[24 * v7 + 1] + 4 * v2001005);
  *(_WORD *)&gSprites[68 * v2001004 + 36] = 0;
  *(_WORD *)&gSprites[68 * v2001004 + 38] = 0;
  dword_2020020[17 * v2001004] = (int)sub_806DA38;
  dword_2020020[17 * (unsigned __int8)sub_806DDA0(v2001000, *(_WORD *)&gSprites[68 * v2001002 + 46] & 0xFF)] = (int)sub_806DA0C;
  sub_806E6F0(&dword_3004360[25 * v2001005], &dword_3004360[25 * v2001006]);
  sub_806E2C0();
  sub_806E07C();
  sub_806E4E8();
  nullsub_12();
  sub_806E2C0();
  sub_806E07C();
  sub_806E4E8();
  v8 = nullsub_12();
  sub_806E6C8(v8);
  sub_806CC74(v1);
  return v10;
}
