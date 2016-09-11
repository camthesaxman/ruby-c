int __fastcall sub_80CEF44(int a1, int a2)
{
  int v2; // r6@1
  unsigned int v3; // r0@1
  unsigned int v4; // r5@1
  __int16 v5; // r0@2
  int v6; // r4@4
  signed int v7; // r0@4
  int v9; // [sp+Ch] [bp-4h]@0

  v2 = a2;
  v3 = a1 << 24;
  v4 = v3 >> 24;
  if ( battle_side_get_owner(BYTE3(v3)) << 24 )
    v5 = sub_807A100(v4, 4u) - 8;
  else
    v5 = sub_807A100(v4, 5u) + 8;
  *(_WORD *)(v2 + 32) = v5;
  v6 = (unsigned __int8)sub_8077ABC(v4, 3u);
  v7 = (signed __int16)sub_807A100(v4, 0);
  if ( (signed __int16)v7 < 0 )
    v7 += 3;
  *(_WORD *)(v2 + 34) = v6 - (v7 >> 2);
  return v9;
}
