int __fastcall sub_806F8AC(unsigned __int8 a1)
{
  int v1; // r6@1
  char *v2; // r0@4
  char *v3; // r5@6
  unsigned __int8 v4; // r0@9
  int v5; // r2@9
  int v6; // r0@9
  unsigned __int8 v7; // r0@9
  unsigned __int8 v8; // r4@2
  unsigned __int8 v9; // r0@2
  int v11; // [sp+0h] [bp-2Ch]@1
  int v12; // [sp+4h] [bp-28h]@3
  int v13; // [sp+8h] [bp-24h]@3
  char v14; // [sp+14h] [bp-18h]@4
  int v15; // [sp+28h] [bp-4h]@10

  v1 = a1;
  v201B282 = sub_806F7E8(a1, (int)&v11, -1);
  if ( v201B282 == -1 )
  {
    v201C00C = 0;
    if ( v12 - v13 <= v11 )
    {
      v2 = &v14;
      *(_WORD *)&v14 = -(signed __int16)v13;
    }
    else
    {
      v2 = &v14;
      *(_WORD *)&v14 = v11 - v12;
    }
    v3 = v2;
    v2024BEC = -*(_WORD *)v2;
    GetMonNickname(v201C000, (int)&gStringVar1);
    ConvertIntToDecimalStringN((char *)&gStringVar2, *(_WORD *)v3, 0, 3);
    if ( LOWORD(dword_3004B20[10 * v1 + 9]) )
      StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F566);
    else
      StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F4B5);
    v4 = sub_806DDA0(v201C004, v201C005);
    v6 = sub_806D84C(v4, v201C000, v5);
    v7 = battle_type_is_double(v6);
    task_pc_turn_off(&gUnknown_083769A8[12 * v7] + 2 * v201C005, 7u);
    v201B261 = 2;
    sub_806E834((int)&gStringVar4, 1u);
    *(_WORD *)v3 += v12;
    SetMonData(v201C000, 57, (int)v3);
    sub_80A9538(v201C006, 1);
    sub_8032638();
    dword_3004B20[10 * v1] = (int)sub_806FB44;
  }
  else
  {
    v8 = v201C005;
    v9 = battle_type_is_double(33669120);
    sub_806E420(v8, v9, v201B282, v11);
  }
  return v15;
}
