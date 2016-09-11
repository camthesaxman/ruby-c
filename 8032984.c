int __fastcall sub_8032984(unsigned __int8 a1, unsigned __int16 a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  int *v5; // r0@5
  void *v6; // r1@5
  int v8; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a1;
  v4 = a2;
  if ( battle_side_get_owner(a1) << 24 )
  {
    if ( *(_WORD *)(4 * v2 + 0x2017802) )
      v4 = *(_WORD *)(4 * v2 + 0x2017802);
    if ( gEnemyMonElevation[v4] )
    {
      v5 = &dword_2020020[17 * *(_BYTE *)(12 * v2 + 0x2017817)];
      v6 = sub_80328A4;
    }
    else
    {
      v5 = &dword_2020020[17 * *(_BYTE *)(12 * v3 + 0x2017817)];
      v6 = sub_8032978;
    }
    *v5 = (int)v6;
  }
  return v8;
}
