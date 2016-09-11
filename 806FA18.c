int __fastcall sub_806FA18(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  int v3; // r3@2
  int *v4; // r5@2
  unsigned __int8 v5; // r0@2
  int v6; // r2@2
  int v7; // r2@2
  unsigned __int8 v8; // r4@3
  unsigned __int8 v9; // r0@3
  int v11; // [sp+0h] [bp-28h]@1
  int v12; // [sp+24h] [bp-4h]@4

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v201B282 = sub_806F7E8(BYTE3(v1), (int)&v11, 1);
  if ( v201B282 == -1 )
  {
    audio_play(1);
    v201C00C = 0;
    v3 = 10 * v2;
    v4 = &dword_3004B20[10 * v2];
    *((_WORD *)v4 + 15) -= *((_WORD *)v4 + 16);
    SetMonData(v201C000, 57, (int)&dword_3004B20[v3 + 7] + 2);
    v5 = sub_806DDA0(v201C004, v2001001);
    sub_806D84C(v5, v201C000, v6);
    v201C005 = *(_WORD *)&gSprites[68 * v2001002 + 46];
    v201C000 = &dword_3004360[25 * v201C005];
    *((_WORD *)v4 + 14) = GetMonData(v201C000, 58, (int)gSprites);
    *((_WORD *)v4 + 15) = GetMonData(v201C000, 57, v7);
    v201C00C = -32768;
    v201C014 = v201C010;
    *v4 = (int)sub_806F8AC;
    v201B282 = *((_WORD *)v4 + 15);
  }
  else
  {
    v8 = v201C005;
    v9 = battle_type_is_double(33669120);
    sub_806E420(v8, v9, v201B282, v11);
  }
  return v12;
}
