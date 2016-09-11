int __fastcall unref_sub_805C014(int a1, __int16 a2, __int16 a3)
{
  __int16 v3; // r3@1
  __int16 v4; // r4@1
  int v6; // [sp+4h] [bp-4h]@0

  v3 = *(_WORD *)(a1 + 16);
  *(_WORD *)(a1 + 20) = v3;
  v4 = *(_WORD *)(a1 + 18);
  *(_WORD *)(a1 + 22) = v4;
  *(_WORD *)(a1 + 16) = a2 + v3;
  *(_WORD *)(a1 + 18) = a3 + v4;
  return v6;
}
